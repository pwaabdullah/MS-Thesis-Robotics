
clear
close all
imtool close all
imaqhwinfo('winvideo')
obj = videoinput('winvideo', 1, 'I420_960x544');
% obj = videoinput('winvideo', 1, 'YUY2_352x288');

obj.ReturnedColorspace = 'rgb';
% obj=videoinput('winvideo',1)
preview(obj)
for i=1:inf
    pause(1)
frame = getsnapshot(obj);
figure(1),image(frame);
R=frame(:,:,1);
G=frame(:,:,2);
B=frame(:,:,3);
maskRo=((R>(G+B)*1)& (R>100));
se = strel('disk',2);

maskR=imclose(maskRo,se);
figure(2),imshow(maskR)

 maskB=((B>(R+G)/2)& (B>100)&(B<200)&((R+G)/2<110));
 
 uint8maskR = uint8(maskR);
  uint8maskB = uint8(maskB);

figure(3),imshow(cat(3,uint8maskR.*R,uint8maskR.*G,uint8maskR.*B))
end
% http://10.13.27.207:8080/photo.jpg
% 
% cam = ipcam('http://10.13.27.207:8080/video.mjpeg')
