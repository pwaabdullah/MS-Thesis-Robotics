clc;close all;clear;
T2=readt2fis('Test.t2fis');
yKM=evalt2(T2,[-1 -.4]) % using the TypeRedMethod in the t2fis file'KM'
yNT=evalt2(T2,[-1 -.4],7,false) % changing the TypeRedMethod as 'NT'
%%
T2=readt2fis('test5.t2fis');
yKM=evalt2(T2,[-1 -.4 -0.5]) % using the TypeRedMethod in the t2fis file'NT'
yNT=evalt2(T2,[-1 -.4 -0.5],1,false) % changing the TypeRedMethod as 'KM'