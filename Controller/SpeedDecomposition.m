 A = [500 
     0 
     0];
D = [-sin(60) cos(60) 1
     -sin(-60) cos(-60) 1
     -sin(-135) cos(-135) 1
     -sin(135) cos(135) 1];

 v = D*A;
 
s = serial('COM10');
set(s,'BaudRate',9600);
fopen(s);
pause(2.5)

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

D=strcat (int2str(d1),'.',int2str(abs(v(1))),'.',int2str(d2),'.',int2str(abs(v(2))),'.',int2str(d3),'.',int2str(abs(v(3))),'.',int2str(d4),'.',int2str(abs(v(4))),'\n')

fprintf(s,D)

fclose(s)
delete(s)
clear s