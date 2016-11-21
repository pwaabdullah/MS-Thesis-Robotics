function [xc,yc,angle]= Robotlocation( frame ,PA)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
    R=frame(:,:,1);
    G=frame(:,:,2);
    B=frame(:,:,3);
    maskRo=((R>(G+B)*1)& (R>100));
    se = strel('disk',5);
    
    maskR=imclose(maskRo,se);
%     figure(2),imshow(maskR)
    
    maskB=((B>(R+G)/1.7)& (B>120)&((R+G)/2<125));
    
    uint8maskR = uint8(maskR);
    uint8maskB = uint8(maskB);
    
%     figure(3),subplot(2,1,1),imshow(cat(3,uint8maskR.*R,uint8maskR.*G,uint8maskR.*B))
% subplot(2,1,2),imshow(cat(3,uint8maskB.*R,uint8maskB.*G,uint8maskB.*B))
%%% finding the red center
[LR,NumR]=bwlabel(maskR);
if NumR>1
    NumMax=0;
    for i2=1:NumR
      if sum(LR(:)==i2)>NumMax
          maskR2=LR==i2;
          NumMax=sum(LR(:)==i2);
      end
    end
    else
   maskR2= maskR;
end
 se = strel('disk',5);  
    maskR3=imdilate(maskR2,se);
    [ys,xs]=find((maskR3));
    xRc=mean(xs);
    yRc=mean(ys);
 
 %%% finding the blue center
 [LB,NumB]=bwlabel(maskB);
if NumB>1
    NumMax=0;
    for i2=1:NumB
      if sum(LR(:)==i2)>NumMax
          maskB2=LB==i2;
          NumMax=sum(LB(:)==i2);
      end
    end
else
   maskB2= maskB;
end
 se = strel('disk',5);  
    maskB3=imdilate(maskB2,se);
%     [ys,xs]=find(flipud(maskB3));
[ys,xs]=find((maskB3));
    xBc=mean(xs);
    yBc=mean(ys);
    
    %%% robot center and heading angle
    xc=xRc*PA;
    yc=yRc*PA;
    angle=atan2((yBc-yRc),(xBc-xRc))*180/pi;
%     [xc,yc,angle]
%   imshow(flipdim(frame,1)),hold on,plot(xBc,yBc,'*',xRc,yRc,'o'),hold on %#ok<DFLIPDIM>
  imshow((frame)),hold on,plot(xBc,yBc,'*',xRc,yRc,'o'),hold on %#ok<DFLIPDIM>

  quiver(xRc,yRc,xBc-xRc,yBc-yRc)
end

