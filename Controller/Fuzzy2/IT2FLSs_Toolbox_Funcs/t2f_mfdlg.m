function t2f_mfdlg(fis,varType,varIndex,oldFigNumber)
% Calls:
% if ~ischar(action),
% For initialization, the fis matrix is passed in as the parameter
%     oldFigNumber=action;
if nargin==1
    cmd='okay';
else
    cmd='initialize';
end
% end;
switch cmd
    case 'initialize'
        fisType=fis.type;
        % Define colors
        frmColor=192/255*[1 1 1];
        btnColor=192/255*[1 1 1];
        popupColor=192/255*[1 1 1];
        editColor=255/255*[1 1 1];
        
        %% FIGURE
        figNumber=figure( ...
            'NumberTitle','off', ...
            'Color',[0.9 0.9 0.9], ...
            'Visible','on', ...
            'MenuBar','none', ...
            'UserData',fis, ...
            'Name',xlate('Membership Functions'),...
            'Units','Normalized', ...
            'Position',[0.3 0.3 0.22 0.2], ...
            'Tag', 't2f_mfdlg',...
            'DockControls', 'off');
        centerfig(figNumber, oldFigNumber);
        
        %% The MAIN frame
        
        frmPos=[0 0 1 1];
        uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        frmPos=[0.02 0.25 0.96 0.7];
        uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        % Configure for varType is output
        isoutput=isequal(varType,'output');
        
        
        
        %Pop-up menu Upper
        if strcmp(fisType,'sugeno') && strcmp(varType,'output'),
            menuTxt=str2mat(' constant',' linear');
        else
            menuTxt = str2mat(' trimf',' trapmf',' gbellmf',' gaussmf',' gauss2mf',' sigmf');
            menuTxt = str2mat(menuTxt,' dsigmf',' psigmf',' pimf',' smf',' zmf');
        end
        if isoutput
            pos=[0.12 0.7 0.25 0.08];
            pos2=[0.6 0.7 0.25 0.08];
            typename='Output MFs type';
        else
            typename='Upper MFs type';
            pos=[0.12 0.8 0.25 0.08];
            pos2=[0.6 0.8 0.25 0.08];
        end
        
        % Pop-up text Upper
        uicontrol( ...
            'Units','Normalized', ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'BackgroundColor',frmColor, ...
            'String',typename);
        
        uicontrol( ...
            'Units','Normalized', ...
            'Style','popupmenu', ...
            'String',menuTxt, ...
            'UserData',varType, ...
            'Tag','mftypeUpper', ...
            'HorizontalAlignment','left', ...
            'Position',pos2, ...
            'BackgroundColor',popupColor);
        
        if isoutput
            visible='off';
        else
            visible='on';
        end
        %Pop-up menu Lower
        pos=[0.6 0.6 0.25 0.08];
        uicontrol( ...
            'Units','Normalized', ...
            'Style','popupmenu', ...
            'String',menuTxt, ...
            'UserData',varType, ...
            'Tag','mftypeLower', ...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'BackgroundColor',popupColor,...
            'visible',visible);
        % Pop-up text Lower
        pos=[0.12 0.6 0.25 0.08];
        uicontrol( ...
            'Units','Normalized', ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'BackgroundColor',frmColor, ...
            'String','Lower MFs type',...
            'visible',visible);
        if isoutput
            pos=[0.12 0.5 0.25 0.08];
            pos2=[0.6 0.5 0.25 0.08];
        else
            pos=[0.12 0.4 0.25 0.08];
            pos2=[0.6 0.4 0.25 0.08];
        end
        
        % Pop-up Text for Number
        
        uicontrol( ...
            'Units','Normalized', ...
            'Style','text', ...
            'HorizontalAlignment','left', ...
            'Position',pos, ...
            'BackgroundColor',frmColor, ...
            'String','Number of MFs');
        
        %Pop-up menu for number
        menuTxt=str2mat(' 1',' 2',' 3',' 4',' 5',' 6',' 7',' 8',' 9');        
        uicontrol( ...
            'Units','Normalized', ...
            'Style','popupmenu', ...
            'String',menuTxt, ...
            'Tag','mfnumber', ...
            'UserData',varIndex, ...
            'Value',3, ...
            'HorizontalAlignment','left', ...
            'Position',pos2, ...
            'BackgroundColor',popupColor);
        
        %% Close Frame
        frmPos=[0.02 0.02 0.96 0.2];
        uicontrol( ...
            'Style','frame', ...
            'Units','Normalized', ...
            'Position',frmPos, ...
            'BackgroundColor',frmColor);
        
        % Cancel Button
        uicontrol( ...
            'Style','push', ...
            'Units','Normalized', ...
            'Position',[0.52 0.06 0.40 0.13], ...
            'BackgroundColor',btnColor, ...
            'String','Cancel', ...
            'Callback','close(gcf)');
        
        % Okay Button
        uicontrol( ...
            'Style','push', ...
            'Units','Normalized', ...
            'Position',[0.07 0.06 0.40 0.13], ...
            'BackgroundColor',btnColor, ...
            'String','OK', ...
            'UserData',oldFigNumber, ...
            'Callback','t2f_mfdlg okay');
        
        % Uncover the figure
        set(figNumber, ...
            'Visible','on');
        
    case 'okay'
        %% Check Type of Upper and Lower Function Types
        t2f_compareMFs('add')
        
        
        figNumber=findall(0,'Tag','t2f_mfdlg');
        figure(figNumber);
        fis=get(figNumber,'UserData');
        oldFigNumber=get(gco,'UserData');
        mfNumHndl=findobj(figNumber,'Tag','mfnumber');
        % ii=1 for upper parameters, ii=2 for Lower parameters
        for ii=1:2
            if ii==1 % Upper membership function
                isLower=0;
                mfTypeHndl=findobj(figNumber,'Tag','mftypeUpper');
            elseif ii==2 % Lower membership function
                isLower=1;
                mfTypeHndl=findobj(figNumber,'Tag','mftypeLower');
            end
            mfTypeList=get(mfTypeHndl,'String');
            mfTypeVal=get(mfTypeHndl,'Value');
            varType=get(mfTypeHndl,'UserData');
            mfType=deblank(mfTypeList(mfTypeVal,:));
            mfType=strtrim(mfType);
            mfNum=get(mfNumHndl,'Value');
            varIndex=get(mfNumHndl,'UserData');
            
            
            fisType=fis.type;
            varRange=eval(['fis.' varType '(' num2str(varIndex) ').range']);
            mfOldNum = length(eval(['fis.' varType '(' num2str(varIndex) ').mf']));
            
            if strcmp(fisType,'sugeno') && strcmp(varType,'output')
                if ii==1
                    % Handle sugeno case
                    if mfNum==1,
                        mfParam=mean(varRange);
                        mfName = ['mf' num2str(mfOldNum + 1)];
                        if strcmp(mfType, 'constant')
                            fis=t2f_addmf(fis,varType,varIndex,mfName,'constant',mfParam);
                        elseif strcmp(mfType,'linear'),
                            in_n=length(fis.input);
                            mfParams1(1:in_n)=0;
                            mfParams1(in_n+1)=mfParam;
                            fis=t2f_addmf(fis,varType,varIndex,mfName,'linear',mfParams1);
                        end
                    else
                        halfWidth=diff(varRange)/(mfNum-1);
                        for count=1:mfNum,
                            a=(count-1)*halfWidth+varRange(1);
                            mfParam=a;
                            mfName=['mf' num2str(mfOldNum + count)];
                            if strcmp(mfType, 'constant')
                                fis=t2f_addmf(fis,varType,varIndex,mfName,'constant',mfParam);
                            elseif strcmp(mfType,'linear'),
                                in_n=length(fis.input);
                                mfParams1(1:in_n)=0;
                                mfParams1(in_n+1)=mfParam;
                                fis=t2f_addmf(fis,varType,varIndex,mfName,'linear',mfParams1);
                            end
                        end
                    end
                end
            else
                % This is an input or a mamdani output
                tol=1e-3*(varRange(2)-varRange(1));
                if mfNum==1,
                    mfParam=mf2mf([varRange(1) mean(varRange) varRange(2)],'trimf',mfType,tol);
                    mfName = ['mf' num2str(mfOldNum + 1)];
                    fis=t2f_addmf(fis,varType,varIndex,mfName,mfType,mfParam,ii);
                else
                    halfWidth=diff(varRange)/(mfNum-1);
                    for count=1:mfNum,
                        b=(count-1)*halfWidth+varRange(1);
                        a=b-halfWidth;
                        c=b+halfWidth;
                        mfParam=mf2mf([a b c],'trimf',mfType,tol);
                        mfName=['mf' num2str(mfOldNum + count)];
                        if isLower
                            mfParam = t2f_lowermf(mfParam,mfType,varRange);
                        end
                        fis=t2f_addmf(fis,varType,varIndex,mfName,mfType,mfParam,ii);
                    end
                end
            end
            
        end
        close(figNumber);
        figure(oldFigNumber);
        % Push the change onto the undo stack and update all related GUI tools
        pushundo(oldFigNumber,fis);
        updtfis2(oldFigNumber,fis,[]);
        
        mfedit2('update')
end