
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
A = [0
     0 
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

D=strcat (int2str(d1),'.',int2str(abs(v(1))),'.',int2str(d2),'.',int2str(abs(v(2))),'.',int2str(d3),'.',int2str(abs(v(3))),'.',int2str(d4),'.',int2str(abs(v(4))),'\n')

fprintf(s,D)
%%
fclose(s)
delete(s)
clear s