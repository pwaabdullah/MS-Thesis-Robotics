
clear
out=instrfind
if ~isempty(out)
  delete(out);
  clear out
end

s = serial('COM6');
set(s,'BaudRate',9600);
fopen(s);
%% direct profile
% tic
% pause(20.5)
% turn=0;
% for i=2:inf
%     pause(0.1)
   %code goes here
    D=strcat ('0.100.1.200.1.100.0.50')
    fprintf(s,'%s',D)
%     if round(i/200)==i/200
%         flushinput(s)
%         flushoutput(s)
%     end
% end
%%
fclose(s)
delete(s)
clear s