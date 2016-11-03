
clear
out=instrfind
if ~isempty(out)
  delete(out);
  clear out
end

s = serial('COM6');
set(s,'BaudRate',38400);
fopen(s);
%% direct profile
pause(2.5)
turn=0;
set(s, 'TimeOut', 0.1)
h=[]
tic
for i=2:inf
    pause(1)
    t(i)=toc;   
    T=t(i)-t(i-1);
    x(i)=550*sin(t(i)*.2);
    y(i)=550*cos(t(i)*.2);
    dx(i)=(x(i)-x(i-1))/T;
    dy(i)=(y(i)-y(i-1))/T;
%     dx(i)=(3*cos((3*t(i))/5))/10;
%     dy(i)=-(3*sin((3*t(i))/5))/10;
%     V(i)=sqrt(dx(i)^2+dy(i)^2);
%     q(i)=atan2(dy(i),dx(i))*180/pi;%+turn*360;
plot(x,y)
    A = [dx(i)
     dy(i) 
     0];
D = [-sin(-60*pi/180) cos(-60*pi/180) 1
     -sin(60*pi/180) cos(60*pi/180) 1
     -sin(135*pi/180) cos(135*pi/180) 1
     -sin(-135*pi/180) cos(-135*pi/180) 1];

 v = D*A;
% va=100;
% a=0;
% w=0;
%       v(1)=(va*sin(a-pi/4)-w);
%       v(2)=(va*sin(a-3*pi/4)-w);
%       v(3)=(va*sin(a-5*pi/4)-w);
%       v(4)=(va*sin(a-7*pi/4)-w);
if v(1)>0
  d1=1;
else
  d1=0;
end
if v(2)>0
  d2=1;
else
  d2=0;
end
if v(3)>0
  d3=1;
else
  d3=0;
end
if v(4)>0
  d4=1;
else
  d4=0;
end

D=strcat (int2str(d1),'.',int2str(abs(v(1))),'.',int2str(d2),'.',int2str(abs(v(2))),'.',int2str(d3),'.',int2str(abs(v(3))),'.',int2str(d4),'.',int2str(abs(v(4))))

fprintf(s,D)
 if round(i/20)==i/20
        flushinput(s)
        flushoutput(s)
        end
end
%%
fclose(s)
delete(s)
clear s