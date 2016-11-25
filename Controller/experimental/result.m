close all
figure,plot(xc(2:end),yc(2:end),xd(2:end),yd(2:end),'*'),legend('actual','desired')
title('paths')
figure,plot(t(2:end),Ex(2:end)),title('Error in x')

dxc=diff(xc(2:end));
figure,plot(t(3:end),dxc),title('dxc')
