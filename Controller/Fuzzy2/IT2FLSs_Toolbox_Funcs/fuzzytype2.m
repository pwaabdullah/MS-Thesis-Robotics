function fuzzytype2(command,varargin)
% Calls:
if nargin==0,
    command='new';
    %% Create it2fls
    newIt2fls=newit2fls;
    newIt2fls=addvar2_type2(newIt2fls,'input','input1',[-1 1],'init');
    newIt2fls=addvar2_type2(newIt2fls,'output','output1',[-1 1],'init');
end

if isequal(command,'loadworkspace')
    prompt={'Workspace file:'};
    name='T2FIS';
    numlines=1;
    defaultanswer={''};
    answer=inputdlg(prompt,name,numlines,defaultanswer);
    drawnow;
    if isempty(answer)
        return
    end
    newIt2fls=evalin('base',answer{1,1});
    hFuzzy=findall(0,'Tag','fuzzyt2');
    close(hFuzzy)
    command='new';
end

if isequal(command,'loadfile')
    [loadfis,path]=uigetfile('*.t2fis','Select your t2fis file');
    if isequal(loadfis,0)
        return
    end
    newIt2fls=readt2fis(loadfis,path);
    hFuzzy=findall(0,'Tag','fuzzyt2');
    close(hFuzzy)
    command='new';
end


hfuzzyt2 = findall(0,'type','figure','Tag','fuzzyt2');
if ~isempty(hfuzzyt2) && isequal(command,'new')
    figure(hfuzzyt2)
    return
end

selectColor=[1 0.3 0.3];
it2fls=newit2fls;
thisit2fls{1}=it2fls;

switch command
    case 'new'
        
        thisit2fls{1}=newIt2fls;
        hFuzzy = figure('Color',[0.8 0.8 0.8], ...
            'MenuBar','none', ...
            'NumberTitle','off', ...
            'UserData',thisit2fls, ...
            'Tag','fuzzyt2', ...
            'ToolBar','none',...
            'Visible','on',...
            'CloseRequestFcn','t2f_save(''close'')',...
            'Name','Main Editor');
        set(hFuzzy,'Units','Normalized','Position',[0.05, 0.1, 0.4, 0.65]);
%          set(hFuzzy, 'WindowStyle', 'docked')
%         setFigDockGroup(hFuzzy, 'Interval Type-2 Fuzzy Logic Systems Toolbox');
        %movegui(hFuzzy,'north');
        %% Add Menus to the UI
        t2f_addMenus('main');
        
        %% Get figure position
        %         figpos =  get(hFuzzy,'Position');
        %         FigRight=figpos(3);
        %         FigTop=figpos(4);
        %         Space=6;
        %         Bottom=250;
        FigLeft = 0.02;
        FigLeft2 = 0.55;
        step = 0.06;
        LenghtH = 0.15;
        LenghtV = 0.03;
        top=0.46;
        
        %% Add axes frame
        
        %         axpos=[Space Bottom FigRight+Space FigTop-Bottom+2*Space];
        axpos=[0.01 0.55 0.98 0.4];
        axHndl=axes( ...
            'Box','on', ...
            'Units','pixels', ...
            'Units','Normalized',...
            'Position',axpos, ...
            'Tag','mainaxes', ...
            'Visible','off');
        
        %% Frames
        frmColor=192/255*[1 1 1];
        popupColor=192/255*[1 1 1];
        
        frmPos= [0.00 0.00 1 0.52];
        mainFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','pixel', ...
            'Units','Normalized',...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        frmPos= [0.01 0.145 0.49 0.36];
        leftFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','pixel', ...
            'Units','Normalized',...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        frmPos= [0.01 0.01 0.49 0.122];
        leftFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','pixel', ...
            'Units','Normalized',...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        frmPos= [0.51 0.265 0.48 0.24];
        rightFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','pixel', ...
            'Units','Normalized',...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        frmPos= [0.51 0.01 0.48 0.24];
        rightFrmHndl=uicontrol( ...
            'Style','frame', ...
            'Units','pixel', ...
            'Units','Normalized',...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        labelStr='Current Variable';
        pos=[FigLeft2 top LenghtH LenghtV];
        uicontrol( ...
            'Units','pixel', ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        labelStr='Name';
        pos=[FigLeft2 top-step LenghtH LenghtV];
        uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        callbackStr='fuzzytype2 varname';
        name='currvarname';
        pos=[FigLeft2+0.2 top-step LenghtH LenghtV];
        inputVarNameHndl=uicontrol( ...
            'Style','edit', ...
            'HorizontalAlignment','left', ...            
            'Enable','off', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'Tag',name, ...
            'Position',pos, ...
            'Callback',callbackStr);
        
        
        labelStr='Type';
        pos=[FigLeft2 top-2*step LenghtH LenghtV];
        uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        name='currvartype';
        pos=[FigLeft2+0.204 top-2*step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Tag',name);
        
        labelStr='Range';
        pos=[FigLeft2 top-3*step LenghtH LenghtV];
        uicontrol( ...
            'Units','pixel', ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        name='currvarrange';
        pos=[FigLeft2+0.204 top-3*step LenghtH LenghtV];
        outputVarNameHndl=uicontrol( ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'Units','Normalized',...
            'Position',pos, ...
            'BackgroundColor',frmColor, ...
            'Tag',name);
        
        
        %% sol taraf
        % AND Method
        labelStr='And method';
        pos=[FigLeft top LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        % AND Method pop-up
        labelStr=str2mat(' min',' prod',' Custom...');
        name='andMethod';
        callbackStr='';
        pos=[FigLeft+0.3 top LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','popupmenu', ...
            'BackgroundColor',popupColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Callback',callbackStr, ...
            'Tag',name, ...
            'String',labelStr);
        set(hndl,'Value',2);
        % OR Method
        labelStr='Or method';
        pos=[FigLeft top-step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        % OR Method pop-up
        labelStr=str2mat(' max',' probor',' Custom...');
        name='orMethod';
        callbackStr='';
        pos=[FigLeft+0.3 top-step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','popupmenu', ...
            'BackgroundColor',popupColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Callback',callbackStr, ...
            'Tag',name, ...
            'String',labelStr);
        set(hndl,'Value',2);
        % Implication
        labelStr='Implication';
        pos=[FigLeft top-2*step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        % Implication pop-up
        labelStr=str2mat(' min',' prod',' Custom...');
        name='impMethod';
        callbackStr='';
        pos=[FigLeft+0.3 top-2*step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','popupmenu', ...
            'BackgroundColor',popupColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Callback',callbackStr, ...
            'Tag',name, ...
            'String',labelStr);
        set(hndl,'Enable','off');
        
        % Aggretion
        labelStr='Aggregation';
        pos=[FigLeft top-3*step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        % Aggretion pop-up
        labelStr=str2mat(' max',' sum',' probor',' Custom...');
        name='aggMethod';
        callbackStr='';
        pos=[FigLeft+0.3 top-3*step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','popupmenu', ...
            'BackgroundColor',popupColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Callback',callbackStr, ...
            'Tag',name, ...
            'String',labelStr);
        set(hndl,'Enable','off');
        % Defuzzification
        labelStr='Defuzzification';
        pos=[FigLeft top-4*step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr,...
            'visible','off');
        
        % Defuzzification pop-up
        labelStr=str2mat(' wtaver',' wtsum');
        name='defuzzMethod';
        callbackStr='';
        pos=[FigLeft+0.3 top-4*step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','popupmenu', ...
            'BackgroundColor',popupColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Callback',callbackStr, ...
            'Tag',name, ...
            'String',labelStr,...
            'visible','off');
        
        
        % Type Reduction
        labelStr='Type Reduction and Defuzzification';
        pos=[FigLeft top-4.5*step LenghtH*2 LenghtV*2];
        hndl=uicontrol( ...
            'Style','text', ...
            'BackgroundColor',frmColor, ...
            'Units','Normalized',...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'String',labelStr);
        
        % Type Reduction pop-up
        labelStr=str2mat('KM','EKM','IASC','EIASC','EODS','WM','NT','BMM','custom');
        name='typeredMethod';
        callbackStr='fuzzytype2(''config'')';
        pos=[FigLeft+0.3 top-4*step LenghtH LenghtV];
        hndl=uicontrol( ...
            'Style','popupmenu', ...
            'BackgroundColor',popupColor, ...
            'HorizontalAlignment','left', ...
            'Units','Normalized', ...
            'Position',pos, ...
            'Callback',callbackStr, ...
            'Tag',name, ...
            'String',labelStr);
        
        %% save and export
        
        % Save
        %         img= imread('icon_ok.png');
        hndl = uicontrol( ...
            'Style','pushbutton',...
            'Units','Normalized',...
            'Position',[0.6 0.1 0.1 0.06],...
            'Callback','t2f_save',...
            'string','Save');
        %         jh = findjobj(pbh);
        % jh.setVerticalAlignment( javax.swing.AbstractButton.BOTTOM );
        
        % Export to simulink
        hndl = uicontrol( ...
            'Style','pushbutton',...
            'Units','Normalized',...
            'Position',[0.75 0.1 0.2 0.06],...
            'Callback','t2f_createsim',...
            'string','Export to Simulink');
        
        % Generate PLC Code
        hndl = uicontrol( ...
            'Style','pushbutton',...
            'Units','Normalized',...
            'Position',[0.65 0.06 0.2 0.06],...
            'Callback','',...
            'string','Generate PLC Code',...
            'visible','off');
        
        %% Plot it2fls
        fuzzytype2('plotfis')
    case 'plotfis'
        %====================================
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        set(figNumber,'Nextplot','replace')
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
        numInputMFs=0;
        for k=1:numInputs,
            numInputMFs=numInputMFs+length(fis.input(k));
        end;
        numOutputMFs=0;
        for k=1:numOutputs,
            numOutputMFs=numOutputMFs+length(fis.output(k));
        end;
        
        numRules=length(fis.rule);
        ruleList=getfis2(fis, 'ruleList');
        fisName=fis.name;
        fisType=fis.type;
        
        mainAxHndl=gca;
        set(mainAxHndl,'Units','pixel','Visible','off')
        mainAxPos=get(mainAxHndl,'Position');
        axis([mainAxPos(1) mainAxPos(1)+mainAxPos(3) ...
            mainAxPos(2) mainAxPos(2)+mainAxPos(4)]);
        xCenter=mainAxPos(1)+mainAxPos(3)/2;
        yCenter=mainAxPos(2)+mainAxPos(4)/2;
        axList=[];
        
        if get(0,'ScreenDepth')>2,
            inputColor=[1 1 0.5];
            outputColor=[0.5 1 1];
        else
            inputColor=[1 1 1];
            outputColor=[1 1 1];
            set(gcf,'Color',[1 1 1])
        end
        
        % For plotting three cartoon membership functions in the box
        xMin=-1; xMax=1;
        x=(-1:0.1:1)';
        y1=trimf(x,[-2 -1 0]); y2=trimf(x,[-1 0 1]); y3=trimf(x,[0 1 2]);
        xlineMatrix=[x x x x x x];
        ylineMatrix=[y1 y1*0.7 y2 y2*0.7 y3 y3*0.7];
        
        % Inputs first
        fontSize=8;
        boxWid=(1/3)*mainAxPos(3);
        xInset=boxWid/5;
        if numInputs>0,
            boxHt=(1/(numInputs))*mainAxPos(4);
            yInset=boxHt/5;
        end
        
        for varIndex=1:numInputs,
            boxLft=mainAxPos(1);
            boxBtm=mainAxPos(2)+mainAxPos(4)-boxHt*varIndex;
            
            axPos=[boxLft+xInset boxBtm+yInset boxWid-2*xInset boxHt-2*yInset];
            
            % Draw the line that connects the input to the main block
            axes(mainAxHndl);
            % Make it a dotted line if the variable is not used in the rule base
            if numRules==0,
                lineStyle='--';
            elseif ~any((ruleList(:,varIndex))),
                lineStyle='--';
            else
                lineStyle='-';
            end
            xInputCenter=axPos(1)+axPos(3);
            yInputCenter=axPos(2)+axPos(4)/2;
            line([xInputCenter xCenter],[yInputCenter yCenter], ...
                'LineStyle',lineStyle, ...
                'LineWidth',2, ...
                'Color','black');
            % Now draw the little arrowhead on the line
            %    perpSlope=(xInputCenter-xCenter)/(yCenter-yInputCenter);
            %    arrowPt=[(xCenter+xInputCenter)/2 (yCenter+yInputCenter)/2];
            %    delta=(xCenter-xInputCenter)/10;
            %    line([xArrowPt xArrowPt
            
            varName=fis.input(varIndex).name;
            axName=['input' num2str(varIndex)];
            axHndl=axes( ...
                'Units','pixel', ...
                'Box','on', ...
                'XTick',[],'YTick',[], ...
                'XLim',[xMin xMax],'YLim',[-0.1 1.1], ...
                'Color',inputColor, ...
                'Tag',axName, ...
                'UserData',varIndex, ...
                'Position',axPos);
            
            axList=[axList axHndl];
            
            line(xlineMatrix,ylineMatrix,'Color','black');
            hold on
            for k=1:2:5
                TestX=[xlineMatrix(:,k),flipud(xlineMatrix(:,k+1))];
                TestY=[ylineMatrix(:,k),flipud(ylineMatrix(:,k+1))];
                fill(TestX(1:end),TestY(1:end), [0.5 0.5 0.5],'facealpha',.5)
            end
            hold off
            %image(imread('MemberShipMask.jpg'))
            xiInset=(xMax-xMin)/10;
            axis([xMin-xiInset xMax+xiInset -0.1 1.1])
            %fill(x,y1, [0.5 0.5 0.5],'facealpha',.5)
            A = imread(which('InputMF.jpg'));
            %             % %              axes(axHndl);
            %                        imshow(A,[0 100],...
            %                              'Parent',axHndl);
            load spine
            %             figure
            %              image(X,...
            %              'Parent', axHndl,...
            %               'AlphaData',0.1)
            %             colormap(map)
            %             colormap(axHndl,map)
            %             set(figNumber, 'Colormap', A);
            
            % Lay down a patch that simplifies clicking on the region
            patchHndl=patch([xMin xMax xMax xMin],[0 0 1 1],'black');
            %             h = patchHndl;
            %             c = h.CData;
            %             h.CData = 'r';
            %image(imread('MemberShipMask.jpg'))
            set(patchHndl, ...
                'EdgeColor','none', ...
                'FaceColor','none', ...
                'UserData',struct('Index',varIndex,'Type','input','Handle',axHndl), ...
                'ButtonDownFcn', {@localSelectVar2 figNumber selectColor});
            %image(imread('MemberShipMask.jpg'))
            
            % Now put on the variable name as a label
            %        xlabel([varName ' (' num2str(numInputMFs(varIndex)) ')']);
            xlabel(varName,'FontSize',fontSize);
            labelName=[axName 'label'];
            set(get(axHndl,'XLabel'), ...
                'FontSize',fontSize, ...
                'Color','black', ...
                'Tag',labelName);
        end
        
        % Now for the outputs
        if numOutputs>0,
            boxHt=(1/(numOutputs))*mainAxPos(4);
            yInset=boxHt/5;
        end
        
        for varIndex=1:numOutputs,
            boxLft=mainAxPos(1)+2*boxWid;
            boxBtm=mainAxPos(2)+mainAxPos(4)-boxHt*varIndex;
            axPos=[boxLft+xInset boxBtm+yInset boxWid-2*xInset boxHt-2*yInset];
            
            % Draw the line connect the center block to the output
            axes(mainAxHndl);
            % Make it a dotted line if the variable is not used in the rule base
            if numRules==0,
                lineStyle='--';
            elseif ~any(ruleList(:,varIndex+numInputs)),
                lineStyle='--';
            else
                lineStyle='-';
            end
            line([axPos(1) xCenter],[axPos(2)+axPos(4)/2 yCenter], ...
                'LineWidth',2, ...
                'LineStyle',lineStyle, ...
                'Color','black');
            
            varName=fis.output(varIndex).name;
            axName=['output' num2str(varIndex)];
            axHndl=axes( ...
                'Units','pixel', ...
                'Box','on', ...
                'Color',outputColor, ...
                'XTick',[],'YTick',[], ...
                'Tag',axName, ...
                'UserData',varIndex, ...
                'Position',axPos);
            
            %set(axHndl,'UserData',struct('Index',varIndex,'Handle',axHndl);
            axList=[axList axHndl];
            if ~strcmp(fisType,'sugeno'),
                % Don't try to plot outputs it if it's a Sugeno-style system
                x=[-1 -0.5 0 0.5 1]';
                xlineMatrix=[x x x];
                ylineMatrix=[0 1 0 0 0;0 0 1 0 0; 0 0 0 1 0]';
                line(xlineMatrix,ylineMatrix,'Color','black');
                xoInset=(xMax-xMin)/10;
                axis([xMin-xoInset xMax+xoInset -0.1 1.1])
            else
                set(axHndl,'XLim',[xMin xMax],'YLim',[-0.1 1.1])
                text(0,0.5,'f(u)', ...
                    'FontSize',fontSize, ...
                    'Color','black', ...
                    'HorizontalAlignment','center');
            end
            
            % Lay down a patch that simplifies clicking on the region
            patchHndl=patch([xMin xMax xMax xMin],[0 0 1 1],'black');
            set(patchHndl, ...
                'EdgeColor','none', ...
                'FaceColor','none', ...
                'UserData',struct('Index',varIndex,'Type','output','Handle',axHndl), ...
                'ButtonDownFcn', {@localSelectVar2 figNumber selectColor});
            
            %        xlabel([varName ' (' num2str(numOutputMFs(varIndex)) ')']);
            xlabel(varName,'FontSize',fontSize);
            labelName=[axName 'label'];
            set(get(axHndl,'XLabel'), ...
                'FontSize',fontSize, ...
                'Color','black', ...
                'Tag',labelName);
        end
        
        % Now draw the box in the middle
        boxLft=mainAxPos(1)+boxWid;
        boxBtm=mainAxPos(2);
        boxHt=mainAxPos(4);
        yInset=boxHt/4;
        axPos=[boxLft+xInset boxBtm+yInset boxWid-2*xInset boxHt-2*yInset];
        axHndl=axes( ...
            'Units','pixel', ...
            'Box','on', ...
            'XTick',[],'YTick',[], ...
            'YLim',[-1 1],'XLim',[-1 1], ...
            'XColor','black','YColor','black', ...
            'LineWidth',2, ...
            'ButtonDownFcn','ruleedit2(''initilaize'')', ...
            'Color','white', ...
            'Position',axPos);
        axList=[axList axHndl];
        text(0,1/3,'Rule Editor', ...
            'Tag','fisname', ...
            'FontSize',fontSize, ...
            'Interpreter','none', ...
            'ButtonDownFcn','ruleedit2(''initilaize'')', ...
            'Color','black', ...
            'HorizontalAlignment','center');
        text(0,-1/3,['(' fisType ')'], ...
            'FontSize',fontSize, ...
            'ButtonDownFcn','ruleedit2(''initilaize'')', ...
            'Color','black', ...
            'HorizontalAlignment','center');
        %    text(0,-1/2,[num2str(numRules) ' rules'], ...
        %        'ButtonDownFcn','fuzzy #openruleedit', ...
        %               'FontSize',fontSize, ...
        %               'Color','black', ...
        %               'HorizontalAlignment','center');
        set(get(axHndl,'Title'),'FontSize',fontSize,'Color','black');
        
        for count=1:length(axList),
            axes(axList(count));
        end
        set(figNumber,'HandleVisibility','callback')
        
        hndlList=findobj(figNumber,'Units','pixels');
        set(hndlList,'Units','normalized')
        
        % Ensure plot has been redrawn correctly
        refresh(figNumber);
    case 'addvar'
        figNumber=gcf;
        %     currMenu=gcbo;
        %currMenu = eventSrc;
        %     varType=get(currMenu,'Tag');
        varType=varargin{1,1};
        
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        % "Add" has been selected, so add a variable
        fis=addvar2_type2(fis,varType,'',[-1 1],'init');
        if strcmp(varType,'input')
            numVars=length(fis.input);
        else
            numVars=length(fis.output);
        end
        newVarName=[varType num2str(numVars)];
        eval(['fis.' varType '(numVars).name = newVarName; '])
        msgStr=['Adding the ' varType ' variable "' newVarName '"'];
        statmsg(figNumber,msgStr);
        pushundo(figNumber,fis);
        %    set(figNumber,'UserData',fis);
        
        % Now replot the FIS diagram
        % First delete all axes except for the main one
        axHndlList=findobj(figNumber,'Type','axes');
        mainAxHndl=findobj(figNumber,'Type','axes','Tag','mainaxes');
        axHndlList(find(axHndlList==mainAxHndl))=[];
        delete(axHndlList);
        lineHndlList=findobj(figNumber,'Type','line');
        delete(lineHndlList);
        fuzzytype2 plotfis
        
        % Clear the VARIABLE NAME, TYPE, and RANGE fields
        hndl=findobj(figNumber,'Type','uicontrol','Tag','currvarname');
        set(hndl,'String',' ');
        hndl=findobj(figNumber,'Type','uicontrol','Tag','currvartype');
        set(hndl,'String',' ');
        hndl=findobj(figNumber,'Type','uicontrol','Tag','currvarrange');
        set(hndl,'String',' ');
        
        statmsg(figNumber,'Ready');
        
        % Call localSelectVar to select variable and populate text boxes
        localSelectVar2( lower(varType), num2str(numVars), figNumber, selectColor);
        % Update all the other editors
        updtfis(figNumber,fis,[2 3 4 5 6]);
        
        hmfedit2=findall(0,'type','figure','Tag','mfedit2');
        if ~isempty(hmfedit2)
            close(hmfedit2)
            mfedit2('initialize',fis)
        end
        
        figure(hfuzzyt2);
        
        
    case 'config'
        figNumber=gcf;
        
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        
        TRmethods = get(findobj('tag','typeredMethod'),'String');
        TRmethodsval = get(findobj('tag','typeredMethod'),'Value');
        
        newTRmethod = deblank(TRmethods(TRmethodsval,:));
        if strcmp(newTRmethod,'BMM')
            prompt={'alpha','beta'};
            name='Enter alfa and beta';
            numlines=1;
            defaultanswer={'0.5','0.5'};
            answer=inputdlg(prompt,name,numlines,defaultanswer);
            drawnow;
            
            fis.typeRedMethod=[newTRmethod '(' answer{1} ',' answer{2} ')'];
        else
            fis.typeRedMethod=newTRmethod;
        end
        updtfis(figNumber,fis,[2 3 4 5 6]);
        pushundo(figNumber,fis);
    case 'varname'
        %====================================
        figNumber=gcf;
        oldfis=get(figNumber,'UserData');
        fis=oldfis{1};
        currVarAxes=findobj(figNumber,'Type','axes','XColor',selectColor);
        varIndex=get(currVarAxes,'UserData');
        tag=get(currVarAxes,'Tag');
        if strcmp(tag(1:5),'input'),
            varType='input';
        else
            varType='output';
        end
        
        varNameHndl=findobj(figNumber,'Type','uicontrol','Tag','currvarname');
        newName=deblank(get(varNameHndl,'String'));
        % Strip off the leading space
        newName=fliplr(deblank(fliplr(newName)));
        % Replace any remaining blanks with underscores
        newName(find(newName==32))=setstr(95*ones(size(find(newName==32))));
        set(varNameHndl,'String',[' ' newName]);
        msgStr=['Renaming ' varType ' variable ' num2str(varIndex) ' to "' newName '"'];
        statmsg(figNumber,msgStr);
        
        % Change the name of the label in the input-output diagram
        txtHndl=get(currVarAxes,'XLabel');
        set(txtHndl,'String',newName);
        
        eval(['fis.' varType '(' num2str(varIndex) ').name=''' newName ''';']);
        pushundo(figNumber,fis);                     %%strcmp does not work for structures
        updtfis(figNumber,fis,[2 3 4 5]);
               
end


%%%%%%%%%%%%%%%%%%%%
%  localSelectVar  %
%%%%%%%%%%%%%%%%%%%%
function localSelectVar2(eventSrc, eventData, figNumber, selectColor)
% This used to be called using elseif strcmp(action,'#selectvar')
% Function is called on initialization of the fuzzy editor and
% when user btn's down on, or deletes an input or output variable.
figX=gcf;
oldfis=get(figNumber,'UserData');
fis=oldfis{1};

if ishghandle(eventSrc)
    % Function was called via callback from btn down on a variables patch
    info = get(eventSrc, 'UserData');
    newCurrVar = info.Handle;           % axes where patch is drawn
    varIndex   = info.Index;
    varType    = info.Type;
    % Reset any selected items
    kids = findobj(figNumber,'Type','Axes','XColor',selectColor);
    set(kids,'LineWidth',1,'XColor','k','YColor','k');
else
    % Function was called at initialization of a new GUI or variable, therefore
    varType  = eventSrc;   % A string of the variable type to select
    numVars  = eventData;  % A string of the variable index number to select
    kids = get(figNumber,'children');
    newCurrVar = findobj(kids,'tag', [varType numVars]);
    varIndex = str2num(numVars);
    % Plot will have already been redrawn therefore no need to reset
end

% Ensure plot has been redrawn correctly
refresh(figNumber);

% If there are no variables left to plot dont try to plot them
if varIndex ~= 0
    % Now highlight the new selection
    set(newCurrVar,'XColor',selectColor,'YColor',selectColor,'LineWidth',3);
    
    % Set all current variable display registers ...
    varNameHndl=findobj(figNumber,'Type','uicontrol','Tag','currvarname');
    varRangeHndl=findobj(figNumber,'Type','uicontrol','Tag','currvarrange');
    if strcmp(varType, 'input'),
        set(varNameHndl,'String',[' ' fis.input(varIndex).name],'Enable','on');
        set(varRangeHndl,'String',mat2str(fis.input(varIndex).range));
    else
        set(varNameHndl,'String',[' ' fis.output(varIndex).name],'Enable','on');
        set(varRangeHndl,'String',mat2str(fis.output(varIndex).range));
    end
    varTypeHndl=findobj(figNumber,'Type','uicontrol','Tag','currvartype');
    set(varTypeHndl,'String',varType);
    
    rmvarMenuHndl=findobj(figNumber,'Type','uimenu','Tag','removevar');
    set(rmvarMenuHndl,'Enable','on')
    
    if strcmp(get(figNumber,'SelectionType'),'open'),
        % Open the MF Editor with the right variable in view,
        % when user double clicks on variable.
        fisName=fis.name;
        guiName='Membership Function Editor';
        newFigNumber=findobj(0,'Name',[guiName ': ' fisName]);
        if ~isempty(newFigNumber),
            statmsg(figNumber,['Updating ' guiName]);
            figure(newFigNumber);
            % mfedit('#update',varType,varIndex);
            mfedit2('initialize',fis)
        else
            statmsg(figNumber,['Opening ' guiName]);
            % mfedit(fis,varType,varIndex);
            mfedit2('initialize',fis)
        end
        
    end
end
