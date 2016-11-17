function [xOut,yOut,x2Out,y2Out]=plotmf2(fis,varType,varIndex,numPts)
%PLOTMF Display all of the membership functions for a given variable.
%   PLOTMF(fismat,varType,varIndex) plots all of the membership functions
%   in the FIS called fismat associated with a given variable whose type 
%   (input or output) and index are respectively given by varType and 
%   varIndex. This function can also be used with the MATLAB function
%   subplot.
%
%   [xOut,yOut]=PLOTMF(fismat,varType,varIndex) returns the x and y data
%   points associated with the membership functions without plotting them.
%
%   PLOTMF(fismat,varType,varIndex,numPts) generates the same plot with
%   exactly numPts points plotted along the curve.
%
%   For example:
%
%           a=newfis('tipper');
%           a=addvar(a,'input','service',[0 10]);
%           a=addmf(a,'input',1,'poor','gaussmf',[1.5 0]);
%           a=addmf(a,'input',1,'good','gaussmf',[1.5 5]);
%           a=addmf(a,'input',1,'excellent','gaussmf',[1.5 10]);
%           plotmf(a,'input',1)
%
%   See also EVALMF, PLOTFIS.

%   Ned Gulley, 10-30-94, Kelly Liu  7-11-96
%   Copyright 1994-2002 The MathWorks, Inc. 
%   $Revision: 1.17.2.1 $  $Date: 2010/12/27 01:12:54 $

%====================================
if nargin<4, numPts=181; end

fisType=fis.type;

if ~strcmp(varType,'input') & (~strcmp(varType,'output') | strcmp(fisType,'sugeno'))
    error('No plots for Sugeno Output MFs')
end

if strcmp(varType, 'input')
 if isfield(fis.input(varIndex), 'mf')
   numMFs=size(fis.input(varIndex).mf, 2);
 else
   numMFs = 0;
 end
 var=fis.input(varIndex);
else
 if isfield(fis.output(varIndex), 'mf')
   numMFs=size(fis.output(varIndex).mf, 2);
 else
   numMFs=0;
 end
 var=fis.output(varIndex);
end

y=zeros(numPts,numMFs);
y2=zeros(numPts,numMFs);
xPts=linspace(var.range(1),var.range(2),numPts)';
%%type-1
x=xPts(:,ones(numMFs,1));
for mfIndex=1:numMFs,    
    mfType=var.mf(1,mfIndex).type;
    mfParams=var.mf(1,mfIndex).params;
    y(:,mfIndex)=mfParams(end)*evalmf2(xPts,mfParams(1:end-1),mfType); 
end
%%type-2
for mfIndex=1:numMFs,    
    mfType=var.mf(2,mfIndex).type;
    mfParams=var.mf(2,mfIndex).params;
    y2(:,mfIndex)=mfParams(end)*evalmf2(xPts,mfParams(1:end-1),mfType);
end
if nargout<1,
    plot(x,y)

    xlabel(var.name,'FontSize',10);
    ylabel('Degree of membership','FontSize',10)
    axis([var.range(1) var.range(2) -0.1 1.1])
    for mfIndex=1:numMFs,
        centerIndex=find(y(:,mfIndex)==max(y(:,mfIndex)));
        centerIndex=floor(mean(centerIndex));
        text(x(centerIndex,mfIndex),1.05,var.mf(mfIndex).name, ...
            'HorizontalAlignment','center', ...
            'VerticalAlignment','middle', ...
            'FontSize',10)
    end
else
    xOut=x;
    yOut=y;
    y2Out=y2;
    x2Out=x;
end
