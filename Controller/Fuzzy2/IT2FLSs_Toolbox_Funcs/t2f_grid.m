function t2f_grid(cmd)
% Calls:
figNumber=gcf;

HandlGridOn = findobj('Tag', 'gridon');
HandlGridOff = findobj('Tag', 'gridoff');
% oldfis=get(figNumber,'UserData');
% fis=oldfis{1};
% inputColor=[1 1 0.8];
mainAxes=findobj('tag','mainaxes');
axes(mainAxes(1))
% hold on;

% hold off;
switch cmd
    case 'on'
        set(HandlGridOff,'value',0)
        set(HandlGridOn,'value',1)
        grid on;
    case 'off'
        set(HandlGridOn,'value',0)
        set(HandlGridOff,'value',1)
        grid off;
end