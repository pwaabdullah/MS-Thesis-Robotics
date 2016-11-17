function t2f_fill()
% Calls:
figNumber=gcf;
% oldfis=get(figNumber,'UserData');
% fis=oldfis{1};


% inputColor=[1 1 0.8];
mainAxes=findobj('tag','mainaxes');
axes(mainAxes(1))
hold on;
currLineHndl=findobj(mainAxes,'Tag','mfline');

OldColors=findobj(mainAxes,'FaceColor',[0.5 0.5 0.5]);
delete(OldColors)

for i = 1:numel(currLineHndl)
    X{i,1} = get(currLineHndl(i),'XData');
    Y{i,1} = get(currLineHndl(i),'YData');
    
end
for i = 1:2:numel(currLineHndl)    
    TestX=[X{i},fliplr(X{i+1})];
    TestY=[Y{i},fliplr(Y{i+1})];
    fill(TestX(1:end),TestY(1:end), [0.5 0.5 0.5],'facealpha',.5)
end
hold off;