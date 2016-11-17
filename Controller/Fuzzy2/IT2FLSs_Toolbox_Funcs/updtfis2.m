function updtfis2(figNumber,fis,guiList)
nameList={'fuzzyt2',...
    'mfedit2',...
    'ruleedit',...
    't2f_mfdlg'};

fisName=fis.name;
for guiIndex=1:numel(nameList)
    newFigNumber=findall(0, 'Type', 'figure', 'tag',nameList{guiIndex});
    if length(newFigNumber)>1,
        close(newFigNumber(2:length(newFigNumber)));
        newFigNumber=newFigNumber(1);
    end
    
    if ~isempty(newFigNumber),
        if newFigNumber~=figNumber  %do not reset fis for current figure
            thisfis{1}=fis;
            set(newFigNumber,'UserData',thisfis);
        end
        if ~isempty(guiList)
            if any(guiIndex==guiList) & strcmp(get(newFigNumber,'Visible'),'on'),
                figure(newFigNumber);
                tag=get(newFigNumber,'Tag');
            end
        end
    end
end
figure(figNumber);
