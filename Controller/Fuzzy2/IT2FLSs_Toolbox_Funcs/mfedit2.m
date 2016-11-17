function mfedit2(cmd,newIt2fls)

% Calls:
if nargin==0
    % Create it2fls
    newIt2fls=newit2fls;
    newIt2fls=addvar2_type2(newIt2fls,'input','input1',[-1 1],'init');
    newIt2fls=addvar2_type2(newIt2fls,'input','input2',[-1 1],'init');
    newIt2fls=addvar2_type2(newIt2fls,'output','output1',[0 1],'init');
    cmd='initialize';
end

hmfedit2 = findall(0,'type','figure','Tag','mfedit2');
if ~isempty(hmfedit2) && isequal(cmd,'initialize')
    figure(hmfedit2)
    return
end

%% colors
figColor=[0.9 0.9 0.9];
frmColor=192/255*[1 1 1];
editColor=255/255*[1 1 1];
selectColor=[1 0 0];
unselectColor=[0 0 0];
inputColor=[1 1 0.93];
outputColor=[0.8 1 1];
tickColor=[0.5 0.5 0.5];
popupColor=192/255*[1 1 1];
switch cmd
    case 'initialize'
        thisit2fls{1}=newIt2fls;
        hMember = figure('Color',[0.8 0.8 0.8], ...
            'MenuBar','none', ...
            'NumberTitle','off', ...
            'Tag','mfedit2', ...
            'UserData',thisit2fls, ...
            'ToolBar','none',...
            'Visible','on',...
            'Name','Membership Function Editor');
        set(hMember,'Units','Normalized','Position',[0.05, 0.1, 0.4, 0.65]);
        movegui(hMember,'west');
%         set(hMember, 'WindowStyle', 'docked')
%         setFigDockGroup(hMember, 'Interval Type-2 Fuzzy Logic Systems Toolbox');
        %% Add Menus
        t2f_addMenus('mfedit')
        
        param.CurrMF=-1;
        param.Action='';
        axPos = [0.3 0.5 0.65 0.4];
        mainAxHndl=axes( ...
            'Units','Normalized', ...
            'XColor',tickColor,'YColor',tickColor, ...
            'Color',inputColor, ...
            'Position',axPos, ...
            'Userdata', param, ...
            'Tag','mainaxes', ...
            'Box','on');
        grid on;
        hold on
        titleStr='Membership function plots';
        title(titleStr,'Color','black','FontSize',8);
        
        %% Add buttons and other gui elements
        
        %draw frame
        mainFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',[0.01 0.01 0.98 0.4], ...
            'BackgroundColor',frmColor);
        
        
        %         callbackStr='mfedit2 mfparams';
        %         name='mfparams';
        %         pos=[0.5 0.2 0.5 0.05];
        %         hndl=uicontrol( ...
        %             'Style','edit', ...
        %             'HorizontalAlignment','left', ...
        %             'BackgroundColor',editColor, ...
        %             'Units','Normalized', ...
        %             'Position',pos, ...
        %             'Callback',callbackStr, ...
        %             'Tag',name);
        
        
        % The VARIABLE PALETTE axes
        axBorder=5;
        axPos=[0.02 0.45 0.23 0.45];
        axHndl=axes( ...
            'Units','Normalized', ...
            'Visible','off', ...
            'XColor',tickColor,'YColor',tickColor, ...
            'Color',[0.8 0.8 0.8], ...
            'Position',axPos, ...
            'Tag','variables', ...
            'Box','on');
        axes(mainAxHndl)

        %====================================
        % The VARIABLE frame
        
        varFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',[0.02 0.02 0.35 0.38], ...
            'BackgroundColor',frmColor);
        
        
        %------------------------------------
        % The VARIABLE label field
        
        labelStr='Current Variable';
        pos=[0.04 0.27 0.2 0.1];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The VARIABLE NAME text field
        name='varname';
        labelStr='Name';
        pos=[0.04 0.21 0.2 0.1];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The VARIABLE NAME display field
        pos=[0.14 0.21 0.2 0.1];
        hndl=uicontrol( ...
            'Style','text', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',popupColor, ...
            'String',' ', ...
            'Tag',name);
        
        %------------------------------------
        % The VARIABLE TYPE text field
        labelStr='Type';
        pos=[0.04 0.15 0.2 0.1];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The VARIABLE TYPE display field
        labelStr=' input| output';
        name='vartype';
        pos=[0.14 0.15 0.2 0.1];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',popupColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Tag',name, ...
            'String',labelStr);
        
        %------------------------------------
        % The VARIABLE RANGE text field
        labelStr='Range';
        pos=[0.04 0.085 0.2 0.1];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The VARIABLE RANGE edit field
        name='varrange';
        callbackStr='mfedit2 varrange';
        pos=[0.17 0.16 0.17 0.03];
        hndl=uicontrol( ...
            'Style','edit', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',editColor, ...
            'Callback',callbackStr, ...
            'Tag',name);
        
        %------------------------------------
        % The VARIABLE DISPLAY RANGE text field
        labelStr='Display Range';
        pos=[0.04 0.09 0.2 0.03];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The VARIABLE DISPLAY RANGE edit field
        name='disprange';
        callbackStr='mfedit2 disprange';
        pos=[0.17 0.085 0.17 0.03];
        hndl=uicontrol( ...
            'Style','edit', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',editColor, ...
            'Callback',callbackStr, ...
            'Tag',name);
        
        %====================================
        % The MF frame
        frmPos=[0.4 0.02 0.58 0.377];
        mfFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        % Upper frame
        frmPos=[0.43 0.2 0.44 0.15];
        mfFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',frmPos, ...
            'BackgroundColor',frmColor,...
            'tag','UpperFrame');
        
        % Lower frame
        frmPos=[0.43 0.04 0.44 0.15];
        mfFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',frmPos, ...
            'BackgroundColor',frmColor,...
            'tag','LowerFrame');
        
        
        
        %------------------------------------
        % The MEMBERSHIP FUNCTION text field
        labelStr='Current Membership Function (click on MF to select)';
        pos=[0.45 0.35 0.4 0.03];
        uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %         callbackStr='paint_intervals';
        %         labelStr = 'Fill';
        %         name='FillInt';
        %         pos=[0.92 0.1 0.04 0.2];
        %         hndl=uicontrol( ...
        %             'Style','PushButton', ...
        %             'Units','Normalized', ...
        %             'Position',pos, ...
        %             'HorizontalAlignment','left', ...
        %             'BackgroundColor',[1 1 1], ...
        %             'Tag',name, ...
        %             'Callback',callbackStr, ...
        %             'String',labelStr );
        
        %------------------------------------
        % The MF Name text label
        labelStr='Name ';
        pos=[0.45 0.295 0.1 0.02];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The MF NAME edit field
        
        callbackStr='mfedit2 mfname';
        labelStr = 'test';
        name='mfname';
        pos=[0.75 0.29 0.1 0.025];
        hndl=uicontrol( ...
            'Style','edit', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',editColor, ...
            'Tag',name, ...
            'Callback',callbackStr, ...
            'String','testval');
        
        %------------------------------------
        % The MF Name text label
        labelStr='Name Lower';
        pos=[0.45 0.26 0.1 0.02];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The MF NAME edit field
        
        callbackStr='mfedit2 mfname';
        labelStr = 'test';
        name='mfname Lower';
        pos=[0.75 0.26 0.1 0.025];
        hndl=uicontrol( ...
            'Style','edit', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',editColor, ...
            'Tag',name, ...
            'Callback',callbackStr, ...
            'String','testval');
        
        % Crisp Interval Text
        pos=[0.6,0.3,0.16,0.03];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String','Choose Output Type');
        
        % Radio buttons for crisp interval selection
        ChkBoxHandle=uicontrol('style','radiobutton',...
            'units','Normalized',...
            'position',[0.5,0.22,0.09,0.04],...
            'string','Crisp',...
            'tag','CheckboxCrips',...
            'Callback','setValue_output(''crisp'')',...
            'BackgroundColor',frmColor);
        
        ChkBoxHandle=uicontrol('style','radiobutton',...
            'units','Normalized',...
            'position',[0.7,0.22,0.09,0.04],...
            'string','Interval',...
            'tag','CheckboxInterval',...
            'Callback','setValue_output(''interval'')',...
            'BackgroundColor',frmColor);
        
        
        % Grid Frame
        frmPos=[0.88 0.23 0.09 0.12];
        mfFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',frmPos, ...
            'BackgroundColor',frmColor,...
            'tag','GridFrame');
        
        % Grid Text
        labelStr='Grid';
        pos=[0.91 0.32 0.05 0.02];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        % Radio buttons for grid selection
        uicontrol('style','radiobutton',...
            'units','Normalized',...
            'position',[0.9,0.28,0.05,0.03],...
            'string','On',...
            'tag','gridon',...
            'Callback','t2f_grid(''on'')',...
            'BackgroundColor',frmColor,...
            'Value',1);
        
        uicontrol('style','radiobutton',...
            'units','Normalized',...
            'position',[0.9,0.24,0.05,0.03],...
            'string','Off',...
            'tag','gridoff',...
            'Callback','t2f_grid(''off'')',...
            'BackgroundColor',frmColor,...
            'Value',0);
        
        
        
        %------------------------------------
        % The MF TYPE text label
        labelStr='Type ';
        pos=[0.45 0.165 0.1 0.03];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        % The MF TYPE text label
        labelStr='Type Lower';
        pos=[0.45 0.12 0.1 0.03];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The MF TYPE popup menu
        callbackStr='mfedit2 mftype';
        labelStr1=str2mat(' trimf',' trapmf',' gbellmf',' gaussmf',' gauss2mf',' sigmf');
        labelStr1=str2mat(labelStr1,' dsigmf',' psigmf',' pimf',' smf',' zmf');
        labelStr2=str2mat(' constant',' linear');
        name='mftype';
        pos=[0.75 0.165 0.1 0.03];
        hndl=uicontrol( ...
            'Style','popupmenu', ...
            'Units','Normalized', ...
            'UserData',labelStr2, ...
            'Position',pos, ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',popupColor, ...
            'Callback',callbackStr, ...
            'String',labelStr1, ...
            'Tag',name);
        
        callbackStr='mfedit2 mftype';
        name='mftypelower';
        pos=[0.75 0.12 0.1 0.03];
        hndl=uicontrol( ...
            'Style','popupmenu', ...
            'Units','Normalized', ...
            'UserData',labelStr2, ...
            'Position',pos, ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',popupColor, ...
            'Callback',callbackStr, ...
            'String',labelStr1, ...
            'Tag',name);
        
        %------------------------------------
        % The MF PARAMS text label
        labelStr='Params';
        pos=[0.45 0.12 0.2 0.03];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        %------------------------------------
        % The MF PARAMS edit field
        callbackStr='mfedit2 mfparams';
        name='mfparams';
        pos=[0.65 0.12 0.2 0.03];
        hndl=uicontrol( ...
            'Style','edit', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',editColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Callback',callbackStr, ...
            'Tag',name);
        
        % The MF PARAMS2 text label
        labelStr='Params Lower';
        pos=[0.45 0.06 0.2 0.03];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'String',labelStr);
        
        % The MF PARAMS2 edit field
        callbackStr='mfedit2 mfparams';
        name='mfparams2';
        pos=[0.65 0.06 0.2 0.03];
        hndl=uicontrol( ...
            'Style','edit', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',editColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Callback',callbackStr, ...
            'Tag',name);
        
        callbackStr='mfedit2 plotmfs';
        name='numpoints';
        pos=[0.851 0.94 0.10 0.05];
        hndl=uicontrol( ...
            'Style','edit', ...
            'HorizontalAlignment','right', ...
            'BackgroundColor',editColor, ...
            'Units','normal', ...
            'Position',pos, ...
            'String', '181', ...
            'Callback',callbackStr, ...
            'Visible','off',...
            'Tag',name);
        pos=[0.74 0.94 0.10 0.05];
        
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','right', ...
            'BackgroundColor', figColor, ...
            'Units','normal', ...
            'Position',pos, ...
            'FontSize',8, ...
            'String', 'plot points:', ...
            'Visible', 'off',...
            'Tag','pointlabel');
        
        
        
        
        mfedit2 plotvars
        mfedit2 plotmfs
        
        
    case 'plotmfs'
        %         figNumber=gcf;
        %         mainAxes=findobj(figNumber,'Tag','mainaxes');
        %         axes(mainAxes);
        %         [x,y]=plotmships;
        %
        %
        %         line(x,y, ...
        %             'Color',[0 0 0], ...
        %             'LineWidth',1, ...
        %             'UserData',1, ...
        %             'Tag', 'mfline',...
        %             'ButtonDownFcn',{@localSelectmf2 [1 0 0]})
        
        
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        % Find the selected variable
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varIndex=get(currVarAxes,'UserData');
        varType=get(currVarAxes,'Tag');
        if isempty(varType)
            varType='input';
        end
        if isempty(varIndex)
            varIndex=1;
        end
        if strcmp(varType,'input'),
            backgroundColor=inputColor;
        else
            backgroundColor=outputColor;
        end
        
        fisType=fis.type;
        mainAxes=findobj(figNumber,'Tag','mainaxes');
        axes(mainAxes);
        varName=eval(['fis.' varType '(' num2str(varIndex) ').name']);
        try
            numMFs=eval(['length(fis.' varType '(' num2str(varIndex) ').mf(:))']);
            numMFs=numMFs/2;
        catch ME
            numMFs=0;
        end
        if strcmp(fisType,'sugeno') & strcmp(varType,'output'),
            % Handle sugeno case
            cla
            if isfield(fis, 'input')
                numInputs=length(fis.input);
            else
                numInputs=0;
            end
            
            inLabels=[];
            for i=1:numInputs
                inLabels=strvcat(inLabels, fis.input(i).name);
            end
            
            varRange=[-1 1];
            numMFs=2*numMFs;
            for count=1:numMFs,
                mfName=eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(count) ').name']);
                txtStr=deblank(mfName);
                if numMFs>6,
                    % Use two columns
                    if (count-1)<(numMFs/2),
                        % This is column one
                        xPos=0.25*diff(varRange)+varRange(1);
                        yPos=(count-1)/(numMFs/2-1);
                    else
                        % This is column two
                        xPos=0.75*diff(varRange)+varRange(1);
                        yPos=(count-round(numMFs/2)-1)/(round(numMFs/2)-1);
                    end
                else
                    % Only one column is necessary
                    xPos=0;
                    yPos=(count)/(numMFs);
                end
                
                text(xPos,yPos,txtStr, ...
                    'Color',unselectColor, ...
                    'UserData',count, ...
                    'HorizontalAlignment','center', ...
                    'FontSize',8, ...
                    'ButtonDownFcn',{@localSelectmf2 selectColor});
            end
            set(gca,'XTick',[],'YTick',[], ...
                'XLim',[-1 1],'YLim',[-0.2 1.2], ...
                'Color',backgroundColor);
            setValue_output('crisp');
        else
            % This is either an input variable or a mamdani output
            dispRangeHndl=findobj(figNumber,'Tag','disprange');
            varRange=eval(get(dispRangeHndl,'String'));
            ptsHndl = findobj(figNumber, 'Tag', 'numpoints');
            numPts=get(ptsHndl, 'String');
            numPts='181';
            numPts=str2double(numPts);
            cla
            % Draw all the lines
            set(gca, ...
                'YTick',[0 0.5 1],'XTickMode','auto', ...
                'YLim',[-0.05 1.2], ...
                'Color',backgroundColor);
            
            try
                [xAllMFs,yAllMFs,xAll2MFs,yAll2MFs]=plotmf2(fis,varType,varIndex,numPts);
            catch ME
                xAllMFs = repmat(linspace(0,1,numPts),numMFs,1);
                yAllMFs = NaN(numMFs,numPts);
            end
            
            for mfIndex=1:2*numMFs,
                if isint(mfIndex/2)
                    x=xAll2MFs(:,(mfIndex/2));
                    y=yAll2MFs(:,(mfIndex/2));
                else
                    x=xAllMFs(:,(mfIndex/2+0.5));
                    y=yAllMFs(:,(mfIndex/2+0.5));
                end
                
                mfName=eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(mfIndex) ').name']);
                line(x,y, ...
                    'Color',unselectColor, ...
                    'LineWidth',2, ...
                    'UserData',mfIndex, ...
                    'Tag', 'mfline',...
                    'ButtonDownFcn',{@localSelectmf2 selectColor})
                centerIndex=find(y==max(y));
                centerIndex=round(mean(centerIndex));
                if ~isnan(centerIndex)
                    text(x(centerIndex), 1.1*max(y) ,mfName, ...
                        'HorizontalAlignment','center', ...
                        'Color',unselectColor, ...
                        'FontSize',8, ...
                        'UserData',mfIndex, ...
                        'Tag', 'mftext',...
                        'ButtonDownFcn',{@localSelectmf2 selectColor});
                end
                param=get(gca, 'Userdata');
                param.CurrMF=-1;
                if varRange(2)==varRange(1)
                    varRange = varRange(1) + (1+abs(varRange(1))) * [-.1,.1];
                end
                set(gca,'UserData',param,'XLim',varRange);
            end
        end
        
        xlabel([varType ' variable "' varName '"'],'Color','black','FontSize',8);
        
        % Clean up the MF fields
        % Name Upper Edit
        hndl=findobj(figNumber,'Type','uicontrol','Tag','mfname');
        set(hndl,'String',' ','Enable','off');
        % Name Lower Edit
        hndl=findobj(figNumber,'Type','uicontrol','Tag','mfname Lower');
        set(hndl,'String',' ','Enable','off');
        % Type Upper
        hndl=findobj(figNumber,'Type','uicontrol','Tag','mftype');
        set(hndl,'Value',1,'Enable','off');
        % Type Lower
        hndl=findobj(figNumber,'Type','uicontrol','Tag','mftypelower');
        set(hndl,'Value',1,'Enable','off');
        % Params Upper
        hndl=findobj(figNumber,'Type','uicontrol','Tag','mfparams');
        set(hndl,'String',' ','Enable','off');
        % Params Lower
        hndl=findobj(figNumber,'Type','uicontrol','Tag','mfparams2');
        set(hndl,'String',' ','Enable','off');
        
        
        % Ensure plot is redrawn correctly
        refresh(figNumber);
        % Fill intervals;        
        t2f_fill;  
        
    case 'mfparams'
        %====================================
        mfParamHndl = gcbo;
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        fisType=fis.type;
        
        % Is the current variable input or output?
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varIndex=get(currVarAxes,'UserData');
        varType=get(currVarAxes,'Tag');
        if strcmp(varType,'input'),
            backgroundColor=inputColor;
        else
            backgroundColor=outputColor;
        end
        mainAxes=findobj(figNumber,'Type','axes','Tag','mainaxes');
        param=get(mainAxes,'UserData');
        currMF=param.CurrMF;
        
        HandlParamsUpper = findobj('Tag', 'mfparams');
        % Read user input
        newParamStr=get(HandlParamsUpper,'String');
        % Params Edit Lower
        HandlParamsLower = findobj('Tag', 'mfparams2');
        newParamStrLower=get(HandlParamsLower,'String');
        if isempty(newParamStr)
            newParamsUpper = [];
            newParamsLower = [];
        else
            newParamsUpper = evalin('base',newParamStr,'[]');
            newParamsLower = evalin('base',newParamStrLower,'[]');
            if ~isreal(newParamsUpper)
                newParamsUpper = [];
                newParamsLower = [];
            else
                iscrisp=setValue_output('iscrisp');
                newParamsUpper = reshape(newParamsUpper,[1 prod(size(newParamsUpper))]);
                if iscrisp
                    newParamsLower=newParamsUpper;
                else
                    newParamsLower = reshape(newParamsLower,[1 prod(size(newParamsLower))]);
                end
            end
        end
        
        isWarning = t2f_compareMFs(fis,newParamsLower,newParamsUpper,currMF,varType,varIndex);
        if isWarning
            warndlg({'The upper MF grade values must always be bigger then the lower MF ones for any crisp input.';...
                ' ';...
                'Please check Params Upper and Params Lower!!'},'!! Warning!!');
            drawnow
            return
        end
        
        
        
        
        % ii = 1 for first membership function and ii = 2 for second msfnc
        for ii=1:2
            if ii==1
                if isequal(varType,'output')
                    newParamsUse=newParamsUpper;
                elseif ~isint(currMF/2) % Upper Membership Function
                    newParamsUse=newParamsUpper;
                elseif isint(currMF/2) % Lower Membership Function
                    newParamsUse=newParamsLower;
                end
            elseif ii==2                
                if isequal(varType,'output')
                    try
                    newParamsUse(1,2)=newParamsLower;
                    catch
                        for i=1:length(newParamsLower)
                            newParamsUse(2,i)=newParamsLower(i);
                        end
                    end
                elseif ~isint(currMF/2) % Upper Membership Function
                    newParamsUse=newParamsLower;
                    currMF=currMF+1;
                elseif isint(currMF/2) % Lower Membership Function
                    newParamsUse=newParamsUpper;
                    currMF=currMF-1;
                end
            end
            % Use the old parameters for error-checking
            RefStruct = substruct('.',varType,'()',{varIndex},'.','mf','()',{currMF});
            EditedMF = subsref(fis,RefStruct);
            oldParams = EditedMF.params;
            
            % Resolve length discrepancies for Sugeno outputs
            if length(newParamsUse)==1 & strcmpi(fisType,'sugeno') & strcmpi(varType,'output')
                newParamsUse = [zeros(1,length(fis.input)*strcmp(EditedMF.type,'linear')),newParamsUse];
            end
            
            % Update FIS data
            if 0%length(newParams)~=length(oldParams),
                % Back out change
                newParams = oldParams;
                msgStr = sprintf('Invalid parameter vector. No change made to MF %d',currMF);
            else
                % Send status message to the user
                msgStr=sprintf('Changing parameter for MF %d to %s',currMF,newParamStr);
                
                if strcmp(fisType,'sugeno') & strcmp(varType,'output'),
                    % Nothing to do for sugeno output case...
                    EditedMF.params = newParamsUse;
                    fis = subsasgn(fis,RefStruct,EditedMF);
                    pushundo(figNumber,fis);
                    updtfis2(figNumber,fis,[4 5]);
                else
                    lineHndl=findobj(mainAxes,'Type','line','UserData',currMF);
                    x=get(lineHndl,'XData');
                    try
                        y = newParamsUse(end)*evalmf(x,newParamsUse(1:end-1),EditedMF.type);
                        % New data OK. Update FIS
                        EditedMF.params = newParamsUse;
                        fis = subsasgn(fis,RefStruct,EditedMF);
                        % Replot the curve
                        txtHndl=findobj(mainAxes,'Type','text','UserData',currMF);
                        centerIndex=find(y==max(y));
                        centerIndex=round(mean(centerIndex));
                        txtPos=get(txtHndl,'Position');
                        if ~isnan(centerIndex)
                            txtPos(1) = x(centerIndex);
                            txtPos(2) = y(centerIndex) + 0.1;
                        end
                        set(txtHndl,'Position',txtPos,'Color',selectColor);
                        set(lineHndl,'YData',y,'Color',selectColor);
                        pushundo(figNumber,fis);
                        updtfis2(figNumber,fis,[4 5]);
                    catch ME
                        % There's been an error in the MF code, so don't change anything
                        uiwait(errordlg(sprintf('Invalid parameter vector. No change made to MF %s',EditedMF.type),'Membership Function Error', 'modal'))
                        newParamsUse=oldParams;
                    end
                end
            end
        end
        set(HandlParamsUpper,'String',[' ' mat2str(newParamsUpper,4)]);
        set(HandlParamsLower,'String',[' ' mat2str(newParamsLower,4)]);
        statmsg(figNumber,msgStr);
        t2f_fill;
    case 'plotvars'
        %====================================
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        
        if isfield(fis, 'input')
            numInputs=length(fis.input);
        else
            numInputs=0;
        end
        if isfield(fis, 'output')
            numOutputs=length(fis.output);
        else
            numOutputs=0;
        end
        
        for i=1:numInputs
            if isfield(fis.input(i), 'mf')
                numInputMFs(i)=length(fis.input(i).mf);
            else
                numInputMFs(i)=0;
            end
        end
        
        for i=1:numOutputs
            if isfield(fis.output(i), 'mf')
                numOutputMFs(i)=length(fis.output(i).mf);
            else
                numOutputMFs(i)=0;
            end
        end
        if isfield(fis, 'rule')
            numRules=length(fis.rule);
        else
            numRules=0;
        end
        fisName=fis.name;
        fisType=fis.type;
        
        mainAxHndl=gca;
        mainAxHndl=findobj('tag','variables');
        set(mainAxHndl,'Units','pixel','XTick',[],'YTick',[])
        mainAxPos=get(mainAxHndl,'Position');
        axis([mainAxPos(1) mainAxPos(1)+mainAxPos(3) ...
            mainAxPos(2) mainAxPos(2)+mainAxPos(4)]);
        xCenter=mainAxPos(1)+mainAxPos(3)/2;
        yCenter=mainAxPos(2)+mainAxPos(4)/2;
        title('FIS Variables')
        set(get(mainAxHndl,'Title'),'Visible','on','FontSize',8,'Color','black')
        
        % Inputs first
        
        if get(0,'ScreenDepth')>2,
            inputColor=[1 1 0.5];
            outputColor=[0.5 1 1];
        else
            inputColor=[1 1 1];
            outputColor=[1 1 1];
        end
        
        tickColor=[0.5 0.5 0.5];
        
        boxWid=(1/2)*mainAxPos(3);
        boxHt=(1/(max(4,numInputs)))*mainAxPos(4);
        xInset=boxWid/10;
        yInset=boxHt/max([5,numInputs,numOutputs]);
        
        xMin=-1; xMax=1;
        
        for varIndex=1:numInputs,
            boxLft=mainAxPos(1);
            boxBtm=mainAxPos(2)+mainAxPos(4)-boxHt*varIndex;
            axPos=[boxLft+xInset boxBtm+yInset boxWid-2*xInset boxHt-2*yInset];
            
            varName=eval(['fis.input(' num2str(varIndex) ').name']);
            axName='input';
            axHndl=axes( ...
                'Units','pixel', ...
                'Box','on', ...
                'XTick',[],'YTick',[], ...
                'XColor',tickColor,'YColor',tickColor, ...
                'YLim',[-0.1 1.1], ...
                'Color',inputColor, ...
                'Tag',axName, ...
                'UserData',varIndex, ...
                'Position',axPos);
            mfIndex=(1:numInputMFs(varIndex))+sum(numInputMFs(1:(varIndex-1)));
            colorOrder=get(gca,'ColorOrder');
            
            % Plot three cartoon membership functions in the box
            x=(-1:0.1:1)';
            y1=trimf(x,[-2 -1 0]); y2=trimf(x,[-1 0 1]); y3=trimf(x,[0 1 2]);
            xlineMatrix=[x x x x x x];
            ylineMatrix=[y1 y1*0.7 y2 y2*0.7 y3 y3*0.7];
            line(xlineMatrix,ylineMatrix,'Color','black');
            hold on
            for k=1:2:5
                TestX=[xlineMatrix(:,k),flipud(xlineMatrix(:,k+1))];
                TestY=[ylineMatrix(:,k),flipud(ylineMatrix(:,k+1))];
                fill(TestX(1:end),TestY(1:end), [0.5 0.5 0.5],'facealpha',.5)
            end
            hold off
            
            xiInset=(xMax-xMin)/10;
            axis([xMin-xiInset xMax+xiInset -0.1 1.1])
            
            % Lay down a patch that simplifies clicking on the region
            patchHndl=patch([xMin xMax xMax xMin],[0 0 1 1],'black');
            set(patchHndl, ...
                'EdgeColor','none', ...
                'FaceColor','none', ...
                'ButtonDownFcn','mfedit2 selectvar');
            
            % Now put on the variable name as a label
            xlabel(varName);
            labelName=[axName 'label'];
            set(get(axHndl,'XLabel'), ...
                'FontSize',8, ...
                'Color','black', ...
                'Tag',labelName);
        end
        
        % Now for the outputs
        boxHt=(1/(max(4,numOutputs)))*mainAxPos(4);
        
        for varIndex=1:numOutputs,
            boxLft=mainAxPos(1)+boxWid;
            boxBtm=mainAxPos(2)+mainAxPos(4)-boxHt*varIndex;
            axPos=[boxLft+xInset boxBtm+yInset boxWid-2*xInset boxHt-2*yInset];
            
            varName=eval(['fis.output(' num2str(varIndex) ').name']);
            axName='output';
            axHndl=axes( ...
                'Units','pixel', ...
                'Box','on', ...
                'Color',outputColor, ...
                'XTick',[],'YTick',[], ...
                'XLim',[xMin xMax],'YLim',[-0.1 1.1], ...
                'XColor',tickColor,'YColor',tickColor, ...
                'Tag',axName, ...
                'UserData',varIndex, ...
                'Position',axPos);
            mfIndex=(1:numOutputMFs(varIndex))+sum(numOutputMFs(1:(varIndex-1)));
            if ~strcmp(fisType,'sugeno'),
                % Only try to plot outputs it if it's not a Sugeno-style system
                x=[-1 -0.5 0 0.5 1]';
                xlineMatrix=[x x x];
                ylineMatrix=[0 1 0 0 0;0 0 1 0 0; 0 0 0 1 0]';
                line(xlineMatrix,ylineMatrix,'Color','black');
                xoInset=(xMax-xMin)/10;
            else
                text(0,0.5,'f(u)', ...
                    'FontSize',8, ...
                    'Color','black', ...
                    'HorizontalAlignment','center');
            end
            
            % Lay down a patch that simplifies clicking on the region
            patchHndl=patch([xMin xMax xMax xMin],[0 0 1 1],'black');
            set(patchHndl, ...
                'EdgeColor','none', ...
                'FaceColor','none', ...
                'ButtonDownFcn','mfedit2 selectvar');
            
            xlabel(varName);
            labelName=[axName 'label'];
            set(get(axHndl,'XLabel'), ...
                'FontSize',8, ...
                'Color','black', ...
                'Tag',labelName);
        end
        
        hndlList=findobj(figNumber,'Units','pixels');
        set(hndlList,'Units','normalized')
        mfedit2 selectvar
    case 'selectvar'
        %====================================
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        fisType=fis.type;
        newCurrVarPatch=get(figNumber,'CurrentObject');
        %   sss=get(newCurrVarPatch)
        %   newCurrVarPatch = gcbo;
        %   if isempty(newCurrVarPatch)| ~strcmp(get(newCurrVarPatch, 'Type'), 'patch')
        %     newCurrVarPatch=findobj(figNumber, 'Tag', 'input1');
        %   end
        newCurrVar=get(newCurrVarPatch,'Parent');
        if isempty(newCurrVar)
            newCurrVar=findobj('tag','input');
            newCurrVar=newCurrVar(1);
            if isempty(newCurrVar)
                newCurrVar=findobj('tag','input1');
                newCurrVar=newCurrVar(1);
            end
        end
        varIndex=get(newCurrVar,'UserData');
        
        varType=get(newCurrVar,'Tag');
        
        % Deselect all others if necessary
        oldCurrVar=findobj(figNumber,'Type','axes','XColor',selectColor);
        if newCurrVar~=oldCurrVar,
            set(oldCurrVar,'XColor','k','YColor','k');
            set(oldCurrVar,'LineWidth',1);
        end
        
        % Now hilight the new selection
        set(newCurrVar,'XColor',selectColor,'YColor',selectColor);
        set(newCurrVar,'LineWidth',3);
        
        % Set all current variable display registers ...
        dispRangeHndl=findobj(figNumber,'Type','uicontrol','Tag','disprange');
        customHndl=findobj(figNumber,'Type','uimenu','Tag','addcustommf');
        
        if strcmp(fisType,'sugeno') & strcmp(varType,'output'),
            % Handle sugeno case
            dispRangeStr=' ';
            set(dispRangeHndl,'String',dispRangeStr,'UserData',dispRangeStr, ...
                'Enable','off');
            set(customHndl,'Enable','off');
        else
            dispRangeStr=[' ' mat2str(eval(['fis.' varType '(' num2str(varIndex) ').range']), 4)];
            set(dispRangeHndl,'String',dispRangeStr,'UserData',dispRangeStr, ...
                'Enable','on');
            set(customHndl,'Enable','on');
        end
        
        %         if strcmp(get(figNumber,'SelectionType'),'open'),
        % %             error('dikkat et!')
        %             fisgui #findgui
        %         end
        
        % The VARIABLE NAME text field
        name='varname';
        hndl=findobj(figNumber,'Type','uicontrol','Tag',name);
        
        varName=eval(['fis.' varType '(' num2str(varIndex),').name']);
        set(hndl,'String',varName);
        
        % The VARIABLE TYPE text field
        name='vartype';
        hndl=findobj(figNumber,'Type','uicontrol','Tag',name);
        set(hndl,'String',varType);
        
        % The VARIABLE RANGE text field
        name='varrange';
        hndl=findobj(figNumber,'Type','uicontrol','Tag',name);
        rangeStr=mat2str(eval(['fis.' varType '(' num2str(varIndex),').range']),4);
        labelStr=[' ' rangeStr];
        set(hndl,'String',labelStr);
        
        statmsg(figNumber,['Selected variable "' varName '"']);
        
        setValue_output(varType);
        
        
        mfedit2 plotmfs
        % Call localSelectmf to select first mf and populate mf text boxes
        try
            localSelectmf([], [], selectColor);
        catch ME
        end
        %         paint_intervals
    case 'deselectmf'
        %====================================
        figNumber=get(0,'CurrentFigure');
        
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varType=get(currVarAxes,'Tag');
        
        mainAxes=findobj(figNumber,'Type','axes','Tag','mainaxes');
        param=get(mainAxes,'UserData');
        currMF=param.CurrMF;
        for ii=1:2
            if ii==2 && isint(currMF/2)
                currMF = currMF-1;
            elseif ii==2
                currMF = currMF+1;
            end
            
            
            lineHndl=findobj(mainAxes,'Tag','mfline', 'UserData', currMF);
            %  for i=1:length(lineHndlList)
            %    thisparam=get(lineHndlList(i), 'UserData');
            %    if thisparam.CurrMF == currMF,
            %      lineHndl=lineHndlList(i);
            %      break;
            %    end
            %  end
            txtHndl=findobj(mainAxes,'Type','text','UserData',currMF);
            % Clear the current MF register
            param.CurrMF=-1;
            set(mainAxes,'UserData',param);
            
            if strcmp(varType,'input'),
                backgroundColor=inputColor;
            else
                backgroundColor=outputColor;
            end
            set(lineHndl,'Color',backgroundColor);
            set(lineHndl,'LineWidth',2);
            set(lineHndl,'Color',unselectColor);
            %    set(lineHndl, 'Tag', 'line');
            set(txtHndl,'Color',unselectColor,'FontWeight','normal');
            
            % Clean up the MF fields
            hndl=findobj(figNumber,'Type','uicontrol','Tag','mfname');
            if strcmp(get(hndl,'Enable'),'on'),
                set(hndl,'String',' ','Enable','off');
                hndl=findobj(figNumber,'Tag','mftype');
                set(hndl,'Value',1,'Enable','off');
                hndl=findobj(figNumber,'Type','uicontrol','Tag','mfparams');
                set(hndl,'String',' ','Enable','off');
                hndl=findobj(figNumber,'Type','uimenu','Tag','removemf');
                set(hndl,'Enable','off');
            end
        end
    case 'mftype'
        
        % Determine Upper or Lower Type selection
        if isequal(get(gcbo,'tag'),'mftype')
            isUpper=1;
        elseif isequal(get(gcbo,'tag'),'mftypelower')
            isUpper=0;
        end
        
        %====================================
        figNumber=gcf;
        HandlInterval = findobj('Tag', 'CheckboxInterval');
        isinterval=get(HandlInterval,'value');
        %   mfTypeHndl=get(figNumber,'CurrentObject');
        mfTypeHndl=gcbo;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        fisType=fis.type;
        numInputs=length(fis.input);
        
        % Is the current variable input or output?
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varIndex=get(currVarAxes,'UserData');
        varType=get(currVarAxes,'Tag');
        mainAxes=findobj(figNumber,'Type','axes','Tag','mainaxes');
        %  currMF=get(mainAxes,'UserData');
        param=get(mainAxes,'UserData');
        if isequal(varType,'output')
            currMF=param.CurrMF;
        else
            if isUpper % Type is upper
                if ~isint(param.CurrMF/2)
                    currMF=param.CurrMF;
                elseif isint(param.CurrMF/2)
                    currMF=param.CurrMF-1;
                end
                paramHndl=findobj(figNumber,'Tag','mfparams');
            else % Type is lower
                if ~isint(param.CurrMF/2)
                    currMF=param.CurrMF+1;
                elseif isint(param.CurrMF/2)
                    currMF=param.CurrMF;
                end
                paramHndl=findobj(figNumber,'Tag','mfparams2');
            end
        end
        if strcmp(varType,'input'),
            backgroundColor=inputColor;
        else
            backgroundColor=outputColor;
        end
        
        typeList=get(mfTypeHndl,'String');
        typeValue=get(mfTypeHndl,'Value');
        newType=deblank(typeList(typeValue,:));
        % Strip off the leading space
        newType=fliplr(deblank(fliplr(newType)));
        msgStr=['Changing type of "' fis.(varType)(varIndex).mf(currMF).name  '" to "' newType '"'];
        statmsg(figNumber,msgStr);
        
        % Now translate and insert the translated parameters
        if strcmp(fisType,'sugeno') & strcmp(varType,'output'),
            % Handle the sugeno case
            oldParams=fis.(varType)(varIndex).mf(currMF).params;
            if strcmp(newType,'constant'),
                % Pick off only the constant term
                if  isinterval
                    newParamsUpper=oldParams(length(oldParams));
                    fis.(varType)(varIndex).mf(currMF).type=newType;
                    fis.(varType)(varIndex).mf(currMF).params=newParamsUpper;
                    fis.(varType)(varIndex).mf(currMF).params(2,1)=newParamsUpper;
                else
                    newParamsUpper=oldParams(length(oldParams));
                    fis.(varType)(varIndex).mf(currMF).type=newType;
                    fis.(varType)(varIndex).mf(currMF).params=newParamsUpper;
                end
            else % linear to be improved
                fis.(varType)(varIndex).mf(currMF).type=newType;
                %if length(oldParams)==2
                    %if isinterval
                        fis.(varType)(varIndex).mf(currMF).params=[zeros(1,numInputs) oldParams(1)];
                        for k=1:numInputs
                            fis.(varType)(varIndex).mf(currMF).params(2,k)=0;
                        end
                        fis.(varType)(varIndex).mf(currMF).params(2,k+1)=1;
                    %else
                        %fis.(varType)(varIndex).mf(currMF).params=[zeros(1,numInputs) oldParams];
                    %end
                %end
            end
            newParams=fis.(varType)(varIndex).mf(currMF).params;
            if isint(numel(newParams)/2)
                for k=1:numel(newParams)/2
                    newParamsUpper(1,k)=newParams(1,k);
                    newParamsLower=newParamsUpper;
                end
            else
                for k=1:numel(newParams)
                    newParamsUpper(1,k)=newParams(1,k);
                    newParamsLower=newParamsUpper;
                end
            end
            mfParamHndl=findobj(figNumber,'Type','uicontrol','Tag','mfparams');
            set(mfParamHndl,'String',[' ' mat2str(newParamsUpper,4)]);
            mfParamHndl2=findobj(figNumber,'Type','uicontrol','Tag','mfparams2');
            set(mfParamHndl2,'String',[' ' mat2str(newParamsLower,4)]);
            
            pushundo(figNumber,fis);
            updtfis2(figNumber,fis,[4 5]);
        else
            oldParams=fis.(varType)(varIndex).mf(currMF).params;
            oldType=fis.(varType)(varIndex).mf(currMF).type;
            oldType=deblank(oldType);
            newType=deblank(newType);
            varRange=fis.(varType)(varIndex).range;
            tol=1e-3*(varRange(2)-varRange(1));
            [newParamsUpper,errorStr]=mf2mf(oldParams,oldType,newType,tol);
            if isint(currMF/2)
%                 newParamsUpper = t2f_lowermf(newParamsUpper,newType,varRange);
                newParamsUpper(end+1)=0.5;
            else
                newParamsUpper(end+1)=1;
            end
            if isempty(newParamsUpper),
                statmsg(figNumber,errorStr);
                set(paramHndl,'String',[' ' mat2str(oldParams,4)]);
                val=findrow(oldType,typeList);
                set(mfTypeHndl,'Value',val);
            else
                % Set the MF params to the right value
                set(paramHndl,'String',[' ' mat2str(newParamsUpper,4)]);
                
                % Replot the new curve
                lineHndl=findobj(mainAxes,'Tag','mfline','UserData',currMF);
                %       lineHndlList=findobj(mainAxes,'Type','mfline');
                %       for i=1:length(lineHndlList)
                %         thisparam=get(lineHndlList(i), 'UserData');
                %         if ~isempty(thisparam) & thisparam.CurrMF == currMF,
                %           lineHndl=lineHndlList(i);
                %          break;
                %         end
                %       end
                
                txtHndl=findobj(mainAxes,'Type','text','UserData',currMF);
                % First delete the old curve
                set(lineHndl,'Color',backgroundColor);
                set(txtHndl,'Color',backgroundColor);
                x=get(lineHndl,'XData');
                mfType=eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(currMF) ').type']);
                
                try
                    y=newParamsUpper(end)*evalmf(x,newParamsUpper(1:end-1),newType);
                catch ME
                    y=nan(size(x));
                end
                
                set(lineHndl,'YData',y,'Color',selectColor);
                centerIndex=find(y==max(y));
                centerIndex=round(mean(centerIndex));
                txtPos=get(txtHndl,'Position');
                if ~isnan(centerIndex)
                    txtPos(1)=x(centerIndex);
                end
                set(txtHndl,'Position',txtPos,'Color',selectColor);
                eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(currMF) ').type=''' newType ''';']);
                eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(currMF) ').params=' mat2str(newParamsUpper) ';']);
                pushundo(figNumber,fis);
                updtfis2(figNumber,fis,[4 5]);
            end            
        end
        t2f_fill;
    case 'addmfs'
        %% Remove all Membership functions before adding
        answer=questdlg({'Current Membership Functions will be deleted.',...
            ' ',...
            'Do you want to continue ?'},...
            'Adding Membership Functions','Yes','No','Yes');
        if isequal(answer,'No')
            disp('Adding MFs cancelled by user.')
            return
        end
             
        mfedit2 removeallmfs 
        
        %====================================
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        % Find the selected variable and MF
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varIndex=get(currVarAxes,'UserData');
        varType=get(currVarAxes,'Tag');
        
        t2f_mfdlg(fis,varType,varIndex,figNumber);
        mfdlgfig=findobj(0, 'Tag', 't2f_mfdlg');
        waitfor(mfdlgfig);
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        updtfis(figNumber,fis,[3]);
        % There is now atleast one mf therefore check the remove all mf menu item
        hndl=findobj(figNumber,'Type','uimenu','Tag','removeallmf');
        set(hndl,'Enable','on');
        mfedit2 plotmfs
        
    case 'removeallmfs'
        %====================================
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        % Find the selected variable
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varIndex=get(currVarAxes,'UserData');
        varType=get(currVarAxes,'Tag');
        mainAxes=findobj(figNumber,'Type','axes','Tag','mainaxes');
        
        lineHndlList=findobj(mainAxes,'Tag','mfline');
        txtHndlList=findobj(mainAxes,'Type','text');
        
        deleteFlag=1;
        count=eval(['length(fis.' varType '(' num2str(varIndex) ').mf)']);
        %     while count>=1,
        fis=t2f_removemfs(fis,varType,varIndex);
        %         count=count-1;
        if isempty(fis),
            % if any of these MFs are used in the rule base, we can't delete
            deleteFlag=0;
            statmsg(figNumber,errorStr);
            count=0;
        end
        %     end
        if deleteFlag
            delete(lineHndlList);
            delete(txtHndlList);
            pushundo(figNumber,fis);
            updtfis2(figNumber,fis,[]);
            mfedit2 plotmfs
            % Deselect the remove mf menu items
            hndl=findobj(figNumber,'Type','uimenu','Tag','removeallmf');
            set(hndl,'Enable','off');
            hndl=findobj(figNumber,'Type','uimenu','Tag','removemf');
            set(hndl,'Enable','off');
        end
        
        
    case 'varrange'
        %====================================
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varIndex=get(currVarAxes,'UserData');
        varType=get(currVarAxes,'Tag');
        
        % Get the range
        oldRange=eval(['fis.' varType '(' num2str(varIndex) ').range']);
        
        varRangeHndl=findobj(figNumber,'Type','uicontrol','Tag','varrange');
        dispRangeHndl=findobj(figNumber,'Type','uicontrol','Tag','disprange');
        newRangeStr=get(varRangeHndl,'String');
        
        % We'll put the brackets in later; no point in dealing with the hassle
        index=[find(newRangeStr=='[') find(newRangeStr==']')];
        newRangeStr(index)=32*ones(size(index));
        newRangeStr=['[' newRangeStr ']'];
        
        % Use eval try-catch to prevent really weird stuff...
        newRange=eval(newRangeStr,mat2str(oldRange,4));
        if length(newRange)~=2,
            statmsg(figNumber,'Range vector must have exactly two elements');
            newRange=oldRange;
        end
        if diff(newRange)<=0,
            statmsg(figNumber,'Range vector must be of the form [lowLimit highLimit]');
            newRange=oldRange;
        end
        
        rangeStr=mat2str(newRange,4);
        set(varRangeHndl,'String',[' ' rangeStr]);
        
        % The next section changes the parameters of the MFs so they span the
        % new range. This is appropriate for Mamdani systems, and for the inputs
        % of Sugeno systems, but not for the output of Sugeno systems
        if ~(strcmp(fis.type,'sugeno') & strcmp(varType,'output')),
            if ~all(newRange==oldRange),
                % Don't bother to do anything unless it's changed
                % Change all params here
                numMFs=eval(['length(fis.' varType '(' num2str(varIndex) ').mf)']);
                for count=1:numMFs*2,
                    if ~isint(count/2)
                        oldParams=eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(count) ').params']);
                        oldParams=oldParams(1:end-1);
                        mfType=eval(['fis.' varType '(' num2str(varIndex)  ').mf(' num2str(count) ').type']);
                        [newParams,errorStr]=strtchmf(oldParams,oldRange,newRange,mfType);
                        newParams(end+1)=1;
                        eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(count) ').params=' mat2str(newParams) ';']);
                    else
                        oldParams=eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(count) ').params']);
                        oldParams=oldParams(1:end-1);
                        mfType=eval(['fis.' varType '(' num2str(varIndex)  ').mf(' num2str(count) ').type']);
                        [newParams,errorStr]=strtchmf(oldParams,oldRange,newRange,mfType);
                        newParams(end+1)=0.5;
                        eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(count) ').params=' mat2str(newParams) ';']);
                    
                    end
                end
                eval(['fis.' varType '(' num2str(varIndex) ').range=' mat2str(newRange) ';']);
                
                updtfis2(figNumber,fis,[4 5]);
                pushundo(figNumber,fis);
                
                % ... and plot
                set(dispRangeHndl,'String',[' ' rangeStr]);
                mfedit2 plotmfs
            end
        end
        case 'mfname'
        %====================================
        mfParamHndl = gcbo;
        figNumber = gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        
        % Name Upper Edit
        hndlupper=findobj(figNumber,'Type','uicontrol','Tag','mfname');
        % Name Lower Edit
        hndllower=findobj(figNumber,'Type','uicontrol','Tag','mfname Lower');
        
        fisType=fis.type;
        
        % Is the current variable input or output?
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varIndex=get(currVarAxes,'UserData');
        varType=get(currVarAxes,'Tag');
        
        mainAxes=findobj(figNumber,'Type','axes','Tag','mainaxes');
        param=get(mainAxes,'UserData');
        currMF=param.CurrMF;

        
        if strcmp(varType,'input'),
            backgroundColor=inputColor;
            if isequal(hndlupper,mfParamHndl)
                if isint(currMF/2)
                    currMF-1;
                end
                oldName=eval(['fis.' varType '(' num2str(varIndex),').mf(' num2str(currMF),').name']);
                newName=deblank(get(hndlupper,'String'));
                % Strip off the leading space
                newName=fliplr(deblank(fliplr(newName)));
                % Replace any remaining blanks with underscores
                newName(find(newName==32))=setstr(95*ones(size(find(newName==32))));
                txtHndl=findobj(figNumber,'Type','text','UserData',currMF);
                set(txtHndl,'Color',backgroundColor);
                set(txtHndl,'String',newName);
                set(txtHndl,'Color',selectColor);
                set(hndlupper,'String',[' ' newName]);
                eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(currMF) ').name=''' newName  '''' '; ']);
                
                
                
            else
                if isint(currMF/2)
                    currMF+1;
                end
                oldName=eval(['fis.' varType '(' num2str(varIndex),').mf(' num2str(currMF),').name']);
                newName=deblank(get(hndllower,'String'));
                % Strip off the leading space
                newName=fliplr(deblank(fliplr(newName)));
                % Replace any remaining blanks with underscores
                newName(find(newName==32))=setstr(95*ones(size(find(newName==32))));
                txtHndl=findobj(figNumber,'Type','text','UserData',currMF);
                set(txtHndl,'Color',backgroundColor);
                set(txtHndl,'String',newName);
                set(txtHndl,'Color',selectColor);
                set(hndllower,'String',[' ' newName]);
                eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(currMF) ').name=''' newName  '''' '; ']);                
            end

        else % output
            backgroundColor=outputColor;
            oldName=eval(['fis.' varType '(' num2str(varIndex),').mf(' num2str(currMF),').name']);
            newName=deblank(get(hndlupper,'String'));
            % Strip off the leading space
            newName=fliplr(deblank(fliplr(newName)));
            % Replace any remaining blanks with underscores
            newName(find(newName==32))=setstr(95*ones(size(find(newName==32))));
            txtHndl=findobj(figNumber,'Type','text','UserData',currMF);
            set(txtHndl,'Color',backgroundColor);
            set(txtHndl,'String',newName);
            set(txtHndl,'Color',selectColor);
            set(hndlupper,'String',[' ' newName]);
            eval(['fis.' varType '(' num2str(varIndex) ').mf(' num2str(currMF) ').name=''' newName  '''' '; ']);
        end      
        pushundo(figNumber,fis);
        updtfis2(figNumber,fis,[3 4]);
end



%%   localSelectmf2
function localSelectmf2(eventSrc, ~, selectColor)
% Called when a user btn downs on an mf and selects the first mf
% to be selected when a new input or output is plotted.

figNumber=gcf;
oldfis=get(figNumber,'UserData');
fis=oldfis{1};
fisType=fis.type;

% Is the current variable input or output?
currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
varIndex=get(currVarAxes,'UserData');
% varIndex=1;
varType=get(currVarAxes,'Tag');
% varType='input';

if ~isempty(eventSrc)
    % The function was called from a btn down action on an object
    mainAxes=get(eventSrc,'Parent');
    % Find the new current MF
    param=get(mainAxes,'UserData');
    oldCurrMF=param.CurrMF;
    newCurrMF=get(eventSrc,'UserData');
    param.CurrMF=newCurrMF;
    plot_mfs = 1;
else
    % The function was called directly and should initialize the first mf
    oldCurrMF = -1;
    % Check there is an mf to plot
    if ~isempty(currVarAxes)
        % Check there is an mf to plot
        if length(eval(['fis.' varType '(' num2str(varIndex) ').mf'])) >= 1
            plot_mfs = 1;
            % Set the first mf to be selected
            newCurrMF = 1;
            kids = get(figNumber,'Children');
            mainAxes = kids(find(strcmp(get(kids,'tag'),'mainaxes')));
            param.CurrMF=1;
        else
            % There are no mfs therefore dont plot anything
            plot_mfs = 0;
            % Set the remove mf menuitems
            h1 = findobj(figNumber,'Type','uimenu','Tag','removemf');
            h2 = findobj(figNumber,'Type','uimenu','Tag','removeallmf');
            set([h1, h2],'Enable','off');
        end
    else
        % There is no selected input or output therefore dont plot anything
        plot_mfs = 0;
    end
end

% Plot an mf
if plot_mfs == 1
    % Deselect other currently selected MF curves
    if oldCurrMF~=newCurrMF,
        if oldCurrMF~=-1
            mfedit2 deselectmf
        end
        set(mainAxes,'UserData',param);
        
        % Find the info for the new MF        
        mfParams=localgetmfparam(fis, varType, varIndex, newCurrMF, 'params');
        if  isequal(varType,'output')
            mfTypeUpper=localgetmfparam(fis, varType, varIndex, newCurrMF, 'type');
            if isequal(mfTypeUpper,'linear')
                for k=1:max(size(mfParams))
                    mfParamsUpper(1,k)= mfParams(1,k);
                    % mfParamsLower=mfParamsUpper;
                end
                for k=max(size(mfParams))+1:max(size(mfParams))*2
                    mfParamsUpper(1,k)= mfParams(2,k-max(size(mfParams)));
                    % mfParamsLower=mfParamsUpper;
                end
            else
                for k=1:numel(mfParams)
                    mfParamsUpper(1,k)= mfParams(k);
                    % mfParamsLower=mfParamsUpper;
                end                
            end
        elseif ~isint(newCurrMF/2) % selected is upper
            mfTypeUpper=localgetmfparam(fis, varType, varIndex, newCurrMF, 'type');
            mfTypeLower=localgetmfparam(fis, varType, varIndex, newCurrMF+1, 'type');
            %for k=1:numel(mfParams)
            mfParamsUpper= mfParams;
            mfParamsLower=localgetmfparam(fis, varType, varIndex, newCurrMF+1, 'params');
            %end
        elseif isint(newCurrMF/2) % selected is lower
            mfTypeUpper=localgetmfparam(fis, varType, varIndex, newCurrMF-1, 'type');
            mfTypeLower=localgetmfparam(fis, varType, varIndex, newCurrMF, 'type');
            mfParamsUpper= localgetmfparam(fis, varType, varIndex, newCurrMF-1, 'params');
            mfParamsLower=mfParams;
        end
        
        mfTypeHndl=findobj(figNumber,'Type','uicontrol','Tag','mftype');
        
        mfTypeList=get(mfTypeHndl,'String');
        if strcmp(fisType,'sugeno') & strcmp(varType,'output'),
            % Prepare sugeno mf type popup menu
            if size(mfTypeList,1)>2,
                set(mfTypeHndl,'String',get(mfTypeHndl,'UserData'));
                set(mfTypeHndl,'UserData',mfTypeList);
            end
               mfNameHndl=findobj(figNumber,'Type','uicontrol','Tag','mfname');
            mfName=localgetmfparam(fis, varType, varIndex, newCurrMF, 'name');
          
            set(mfNameHndl,'String',[' ' mfName],'Enable','on');
              
        else
            % Prepare mamdani mf type popup menu
            if size(mfTypeList,1)==2,
                set(mfTypeHndl,'String',get(mfTypeHndl,'UserData'));
                set(mfTypeHndl,'UserData',mfTypeList);
            end
            % Make the selected line bold
            currLineHndl=findobj(mainAxes,'Tag','mfline','UserData',newCurrMF);
            
            set(currLineHndl,'Color',selectColor);
            set(currLineHndl,'LineWidth',3);
            if isint(newCurrMF/2) % selected is Lower
                currLineHndlUpper=findobj(mainAxes,'Tag','mfline','UserData',newCurrMF-1);
                set(currLineHndlUpper,'LineWidth',3);
                set(currLineHndlUpper,'Color','r');
                currTxtHndlUpper=findobj(mainAxes,'Type','text','UserData',newCurrMF-1);
                set(currTxtHndlUpper,'Color','r','FontWeight','bold');
                mfName=localgetmfparam(fis, varType, varIndex, newCurrMF-1, 'name');
                % Set the MF name, type and params to the right value
                mfNameHndl=findobj(figNumber,'Type','uicontrol','Tag','mfname');
                set(mfNameHndl,'String',[' ' mfName],'Enable','on');
                % Set the MF name Lower
                mfName=localgetmfparam(fis, varType, varIndex, newCurrMF, 'name');
                mfNameHndl=findobj(figNumber,'Type','uicontrol','Tag','mfname Lower');
                set(mfNameHndl,'String',[' ' mfName],'Enable','on');
                
            else % selected is Upper
                currLineHndlLower=findobj(mainAxes,'Tag','mfline','UserData',newCurrMF+1);
                set(currLineHndlLower,'LineWidth',3);
                set(currLineHndlLower,'Color','r');
                currTxtHndlLower=findobj(mainAxes,'Type','text','UserData',newCurrMF+1);
                set(currTxtHndlLower,'Color','r','FontWeight','bold');
                mfName=localgetmfparam(fis, varType, varIndex, newCurrMF, 'name');
                % Set the MF name, type and params to the right value
                mfNameHndl=findobj(figNumber,'Type','uicontrol','Tag','mfname');
                set(mfNameHndl,'String',[' ' mfName],'Enable','on');
                % Set the MF name Lower
                mfName=localgetmfparam(fis, varType, varIndex, newCurrMF+1, 'name');
                mfNameHndl=findobj(figNumber,'Type','uicontrol','Tag','mfname Lower');
                set(mfNameHndl,'String',[' ' mfName],'Enable','on');
            end
        end
        
        % Make the selected text bold
        currTxtHndl=findobj(mainAxes,'Type','text','UserData',newCurrMF);
        set(currTxtHndl,'Color',selectColor,'FontWeight','bold');
        
        mfTypeList=get(mfTypeHndl,'String');
        mfTypeValue=findrow(mfTypeUpper,mfTypeList);
        if isempty(mfTypeValue),
            mfTypeList=str2mat(mfTypeList, [' ' mfTypeUpper]);
            mfTypeValue=findrow(mfTypeUpper,mfTypeList);
            set(mfTypeHndl,'String',mfTypeList,'Value',mfTypeValue);
            msgStr=['Installing custom membership function "' mfTypeUpper '"'];
            statmsg(figNumber,msgStr);
        end
        set(mfTypeHndl,'Value',mfTypeValue,'Enable','on');
        
        % For Lower Membership Function
        if ~isequal(varType,'output')
            mfTypeHndlLower=findobj(figNumber,'Type','uicontrol','Tag','mftypelower');
            mfTypeList=get(mfTypeHndlLower,'String');
            mfTypeValue=findrow(mfTypeLower,mfTypeList);
            if isempty(mfTypeValue),
                mfTypeList=str2mat(mfTypeList, [' ' mfTypeLower]);
                mfTypeValue=findrow(mfTypeLower,mfTypeList);
                set(mfTypeHndlLower,'String',mfTypeList,'Value',mfTypeValue);
                msgStr=['Installing custom membership function "' mfTypeLower '"'];
                statmsg(figNumber,msgStr);
            end
            set(mfTypeHndlLower,'Value',mfTypeValue,'Enable','on');
        end
        
        
        curr_info = get(gca, 'CurrentPoint');
        % Input
        if ~isequal(varType,'output')
            hndl=findobj(figNumber, 'Tag','mfparams');
            set(hndl,'String',[' ' mat2str(mfParamsUpper,4)],'Enable','on', ...
                'Userdata', [curr_info(1,1) mfParamsUpper]);
            
            hndl=findobj(figNumber, 'Tag','mfparams2');
            set(hndl,'String',[' ' mat2str(mfParamsLower,4)],'Enable','on', ...
                'Userdata', [curr_info(1,1) mfParamsLower]);
            
            hndl=findobj(figNumber,'Type','uimenu','Tag','removemf');
            set(hndl,'Enable','on');
        else % Output
            hndl=findobj(figNumber, 'Tag','mfparams');
            if isequal(mfTypeUpper,'linear')
                set(hndl,'String',[' ' mat2str(mfParamsUpper(1:end/2),4)],'Enable','on', ...
                    'Userdata', [curr_info(1,1) mfParamsUpper(1:end/2)]);
                
                hndl=findobj(figNumber, 'Tag','mfparams2');
                set(hndl,'String',[' ' mat2str(mfParamsUpper(end/2+1:end),4)],'Enable','on', ...
                    'Userdata', [curr_info(1,1) mfParamsUpper(end/2+1:end)]);
            else
                set(hndl,'String',[' ' mat2str(mfParamsUpper(1),4)],'Enable','on', ...
                    'Userdata', [curr_info(1,1) mfParamsUpper(1)]);
                
                hndl=findobj(figNumber, 'Tag','mfparams2');
                set(hndl,'String',[' ' mat2str(mfParamsUpper(2),4)],'Enable','on', ...
                    'Userdata', [curr_info(1,1) mfParamsUpper(2)]);
            end
            
            hndl=findobj(figNumber,'Type','uimenu','Tag','removemf');
            set(hndl,'Enable','on');
            
            HandlParamsUpper = findobj('Tag', 'mfparams');
            % Read user input
            newParamStr=get(HandlParamsUpper,'String');
            % Params Edit Lower
            HandlParamsLower = findobj('Tag', 'mfparams2');
            newParamStrLower=get(HandlParamsLower,'String');
            
            if isequal(newParamStr,newParamStrLower)
                setValue_output('crisp');
            else
                setValue_output('interval');                
            end         
        end
        
    end
    % Reset the remove all mfs menuitem
    hndl=findobj(figNumber,'Type','uimenu','Tag','removeallmf');
    set(hndl,'Enable','on');
end


%%% localgetmfparam %%%

function out = localgetmfparam(fis, varType, varNum, mfNum, param)
switch varType
    case 'input'
        switch param
            case 'name'
                out=fis.input(varNum).mf(mfNum).name;
            case 'type'
                out=fis.input(varNum).mf(mfNum).type;
            case 'params'
                out=fis.input(varNum).mf(mfNum).params;
        end
    case 'output'
        switch param
            case 'name'
                out=fis.output(varNum).mf(mfNum).name;
            case 'type'
                out=fis.output(varNum).mf(mfNum).type;
            case 'params'
                out=fis.output(varNum).mf(mfNum).params;
        end
end