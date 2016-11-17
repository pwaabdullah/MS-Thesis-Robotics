function out=t2f_removemfs(fis,varType,varIndex,mfIndex)
% Calls: 
fis.(varType)(1,varIndex).mf=[];

out=fis;

