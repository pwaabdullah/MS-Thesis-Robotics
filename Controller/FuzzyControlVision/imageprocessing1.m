clear
close all
imtool close all
imaqhwinfo('winvideo')
obj = videoinput('winvideo', 1, 'I420_960x544');%RGB24_320x176
obj.ReturnedColorspace = 'rgb';
% preview(obj)
%%

camList = webcamlist
obj = webcam(1)

%%
%   frame = getsnapshot(obj);
frame = snapshot(cam);
imshow(frame)
[x,y] = ginput(2);
D=sqrt(diff(y)^2+diff(x)^2);
PA= 21/D; 
for i=1:inf
    pause(0.001)
    frame = getsnapshot(obj);
    tic
    [xc,yc,angle]= Robotlocation(frame,PA)
    
    toc
%     figure(1),i

% mage(frame);

end
imtool(frame)
imtool(cat(3,uint8maskB.*B,uint8maskB.*G,uint8maskB.*B))
