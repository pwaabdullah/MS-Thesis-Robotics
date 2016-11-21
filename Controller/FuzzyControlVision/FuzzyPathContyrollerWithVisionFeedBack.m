%% initialization
clear
close all
imtool close all

amList = webcamlist;
obj = webcam(1);
frame = snapshot(obj);

out=instrfind;
if ~isempty(out)
    fclose( out);
  delete(out);
  clear out 
end

s = serial('COM23');
set(s,'BaudRate',38400);
fopen(s);
set(s, 'TimeOut', 0.1)

%% camera Calibration
frame = snapshot(obj);
imshow(frame)
[x,y] = ginput(1)
PA=0.2879;
x=x*PA;
y=y*PA;
%% direct profile
pause(5.5)
turn=0;

h=[]
tic
CC=readfis('C3');
for i=2:inf
    pause(0.2)
    %% feedback
    frame = (snapshot(obj));
    [xc(i),yc(i),angle(i)]= Robotlocation(frame,PA);
    
    %% trajectory updating  
    t(i)=toc ;  
    T=t(i)-t(i-1);
%     t=0:60
%     xd=70*sin(t*.06)+100;
%     yd=70*cos(.06*t)+100;
%    
%     plot(xd,yd)
%     xd(i)=30*sin(t(i)*.06)+100;
%     yd(i)=30*cos(.06*t(i))+100;
%     dxd(i)=(xd(i)-xd(i-1))/T;
%     dyd(i)=(yd(i)-yd(i-1))/T;
%     
    xd(i)=x;
    yd(i)=y;
    plot(xd/PA,yd/PA,'*k')
    %% controller
    
    Ex(i)=xd(i)-xc(i);
    Ey(i)=yd(i)-yc(i);
    dEx(i)= (Ex(i)-Ex(i-1));
    dEy(i)= (Ey(i)-Ey(i-1));
    IEx(i)=Ex(i)+Ex(i-1);
    IEy(i)=Ey(i)+Ey(i-1);
    
    FF1=evalfis([Ex(i),dEx(i)],CC);
    FF2=evalfis([Ey(i),dEy(i)],CC);
    
    kp1=FF1(1)*0.1+1;
    kp2=FF2(1)*0.1+1;
    kd1=FF2(2)*0.1+0.5;
    kd2=FF2(2)*0.1+0.5;
    ki1=FF2(3)*0.1+0.05;
    ki2=FF2(3)*0.1+0.05;
    
    Cx(i)=Ex(i)*kp1+kd1*dEx(i)+ki1*IEx(i);
    Cy(i)=Ey(i)*kp2+kd2*dEy(i)+ki2*IEy(i);

angler(i)=pi/180*angle(i);     
   
A = [Cx(i)
     Cy(i) 
     0];
 
R=[cos(angler(i)) -sin(angler(i)) 0
    sin(angler(i)) cos(angler(i)) 0
    0 0 1];

D = [-sin(-60*pi/180) cos(-60*pi/180) 1
     -sin(60*pi/180) cos(60*pi/180) 1
     -sin(135*pi/180) cos(135*pi/180) 1
     -sin(-135*pi/180) cos(-135*pi/180) 1];

 v = D*inv(R)*A;

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

D=strcat (int2str(d1),'.',int2str(abs(v(1))),'.',int2str(d2),'.',int2str(abs(v(2))),'.',int2str(d3),'.',int2str(abs(v(3))),'.',int2str(d4),'.',int2str(abs(v(4))));

fprintf(s,D);
 if round(i/20)==i/20
        flushinput(s)
        flushoutput(s)
 end
end
figure,plot(Ex)
figure,plot(Ey)

%%
fclose(s)
delete(s)
clear s

%% saved profile
h=[]
 D=strcat ('0.0.0.0.0.0.0.0')
 fprintf(s,D)

%%
h=[]
D=strcat ('0.100.0.100.0.100.0.100') 
fprintf(s,D)