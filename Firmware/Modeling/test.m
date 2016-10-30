
% syms t
clear
out=instrfind
if ~isempty(out)
    fclose( out)
  delete(out);
  clear out
  
end
t=0;
% syms t
x=0.5*sin(t*.06);
y=0.5*cos(.06*t);
dx=(3*cos((3*t)/50))/100;
dy=-(3*sin((3*t)/50))/100;
% dx=cos(t/10)/20;
% dy=-(3*sin((3*t)/10))/10;
V=sqrt(dx^2+dy^2);
q=atan(dy/dx)*180/pi;
%  diff(y,t)
% plot(x,y)
% clear

s = serial('COM6');
set(s,'BaudRate',19200);
fopen(s);
%% direct profile
tic
pause(20.5)
turn=0;
set(s, 'TimeOut', 0.1)
h=[]

for i=2:inf
    pause(0.1)
    t(i)=toc;   
    x(i)=0.5*sin(t(i)*.6);
    y(i)=0.5*cos(.6*t(i));
    dx(i)=(3*cos((3*t(i))/5))/10;
    dy(i)=-(3*sin((3*t(i))/5))/10;
    V(i)=sqrt(dx(i)^2+dy(i)^2)*1000;
    q(i)=atan2(dy(i),dx(i))*180/pi+turn*360;
    if abs(q(i)-q(i-1))>90
      
        if (q(i-1))<0
        turn=turn-1; 
        end
        if (q(i-1))>0
        turn=turn+1; 
        end
        q(i)=atan2(dy(i),dx(i))*180/pi+turn*360;
    end
    w(i)=(q(i)-q(i-1))/(t(i)-t(i-1))*5;
%     D=strcat (int2str(V(i)),'.',int2str(q(i)),'.','0\n')

D=strcat (int2str(V(i)),'.0.',int2str(w(i)),'\n')

    fprintf(s,D)
    h=fscanf(s)
        if round(i/200)==i/200
        flushinput(s)
        flushoutput(s)
        end
%         w=diff(q)
%         v1=(V(i)*sin(q(i)-pi/4)-w);
%       v2=(V(i)*sin(q(i)-3*pi/4)-w);
%       v3=(V(i)*sin(q(i)-5*pi/4)-w);
%       v4=(V(i)*sin(q(i)-7*pi/4)-w);
%       w=0; 
%       q=q*pi/180;
%       v1=(V.*sin(q-pi/4)-w);
%       v2=(V.*sin(q-3*pi/4)-w);
%       v3=(V.*sin(q-5*pi/4)-w);
%       v4=(V.*sin(q-7*pi/4)-w);
      
%     if t>90
%         break;
%     end
end

%fprintf(s,'')
%% saved profile
set(s, 'TimeOut', 0.5)
h=[]
% 
% T=2*2;
% for i=1:T
%     fprintf(s,'500.0.0\n')
%     h=fscanf(s);
%     if strcmp(h(1:2),'go')
%        break 
%     end
%     
% end
% 
% pause(T-i)
% 
% h=[]
% T=2*2;
% for i=1:T
%     fprintf(s,'500.180.0\n')
%     h=fscanf(s);
%     if strcmp(h(1:2),'go')
%        break 
%     end
%     
% end
% 
% pause(T-i)
% 0
% h=0[]
% T=2*5;
% for i=1:T
%     fprintf(s,'500.0.300\n')
%     h=fscanf(s);
%     if strcmp(h(1:2),'go')
%        break 
%     end
%     
% end
% 
% pause(T-i)
% h=[]
% T=2*5;
% for i=1:T
%     fprintf(s,'0.0.300\n')
%     h=fscanf(s);
%     if strcmp(h(1:2),'go')
%        break 
%     end
%     
% end
% 
% pause(T-i)
% 
% h=[]
% T=2*2;
% for i=1:T
%     fprintf(s,'0.0.0\n')
%     h=fscanf(s);
%     if strcmp(h(1:2),'go')
%        break 
%     end
%     
% end
% i
% pause(T-i)
% 
% 'finish' 

fclose(s)
delete(s)
clear s