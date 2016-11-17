function y = evalt2 (T2FIS,input,TRType,issimulink)

% UI for no input

if nargin==0
    prompt={'T2FIS file:','Inputs:'};
    name='EvalT2';
    numlines=1;
    t2fispath=cellstr(ls('*.t2fis'));
    if isempty(t2fispath)
        t2fispath='*.t2fis';
    else
        t2fispath=t2fispath{end,1};
    end
    defaultanswer={t2fispath,'[-0.3 0.6]'};
    answer=inputdlg(prompt,name,numlines,defaultanswer);
    drawnow;
    if isempty(answer)
        disp('User cancelled')
        return
    end
    inputui=evalin('base',answer{2},'[]');
    for i=1:numel(inputui)
        input(1,i)=inputui(i);
    end
    [path,~]=fileparts(which(answer{1}));
    T2FIS=readt2fis(answer{1},path);
    %     warning('function needs 2 input')
    %     return
end
% Run by simulink for 1 input
if nargin ==4 && isequal(issimulink,0)
    if TRType==0
        
    elseif TRType==1
        T2FIS.typeRedMethod='KM';
    elseif TRType==2
        T2FIS.typeRedMethod='EKM';
    elseif TRType==3
        T2FIS.typeRedMethod='IASC';
    elseif TRType==4
        T2FIS.typeRedMethod='EIASC';
    elseif TRType==5
        T2FIS.typeRedMethod='EODS';
    elseif TRType==6
        T2FIS.typeRedMethod='WM';
    elseif TRType==7
        T2FIS.typeRedMethod='NT';
    elseif TRType==8
        T2FIS.typeRedMethod='BMM';
    elseif TRType==9
        T2FIS.typeRedMethod='Custom';
    end
elseif nargin>2
    try
        t2fisstruct=evalin('base',input);
    catch me
        if ~isempty(which(input))
            [path,~]=fileparts(which(input));
            t2fisstruct=readt2fis(input,path);
        elseif ~isempty(which([input '.t2fis']))
            [path,~]=fileparts(which([input '.t2fis']));
            t2fisstruct=readt2fis([input '.t2fis'],path);
        else
            [fileName,pathName]=uigetfile('*.t2fis','Read FIS');
            t2fisstruct=readt2fis([pathName,fileName]);
            assignin('base', 't2fisSim', t2fisstruct);
        end
    end
    clear input;
    for i=1:length(T2FIS)
        input(1,i)=T2FIS(i);
    end
    if ischar(TRType)
        TRType=str2num(TRType);
    end
    T2FIS=t2fisstruct;
    if TRType==0
        
    elseif TRType==1
        T2FIS.typeRedMethod='KM';
    elseif TRType==2
        T2FIS.typeRedMethod='EKM';
    elseif TRType==3
        T2FIS.typeRedMethod='IASC';
    elseif TRType==4
        T2FIS.typeRedMethod='EIASC';
    elseif TRType==5
        T2FIS.typeRedMethod='EODS';
    elseif TRType==6
        T2FIS.typeRedMethod='WM';
    elseif TRType==7
        T2FIS.typeRedMethod='NT';
    elseif TRType==8
        T2FIS.typeRedMethod='BMM';
    elseif TRType==9
        T2FIS.typeRedMethod='Custom';
    end
end
rules = cat(1,T2FIS.rule.antecedent);
N = size(rules);
NofRule = N(1);
nInput = length(T2FIS.input);
[inputN, ~] = size(input);
y = zeros(inputN,1);
% for i = 1:inputN
F = zeros(NofRule,2);
C = zeros(NofRule,1);
x = input(1,:);
%% ruleN = rule sayisi
for n=1:NofRule
    % Ateslemelerin hesaplanmasi
    f1U=1;
    f1L=1;
    for i=1:nInput
        % Calculate Lower firing
        UpperParams = T2FIS.input(i).mf(1,rules(n,i)).params;
        LowerParams = T2FIS.input(i).mf(2,rules(n,i)).params;
        MemberUpper = UpperParams(end)*eval([T2FIS.input(i).mf(1,rules(n,i)).type '(x(i),UpperParams(1:end-1))']);
        MemberLower = LowerParams(end)*eval([T2FIS.input(i).mf(2,rules(n,i)).type '(x(i),LowerParams(1:end-1))']);
        f1U=f1U*MemberUpper;
        f1L=f1L*MemberLower;
    end
    
    F(n,:) = [f1L,f1U];
    
    outputType = T2FIS.output.mf(T2FIS.rule(n).consequent).type;
    if strcmpi(outputType,'constant')
        outMFPar = T2FIS.output.mf(T2FIS.rule(n).consequent).params;
        if isequal(T2FIS.outputType,'crisp')
            C(n,:) = outMFPar(1);
            C(n,2) = outMFPar(1);
        else
            %     C(n,:) = [x 1]*[outMFPar(1) outMFPar(1) outMFPar(1)]';
            C(n,:) = outMFPar(1);
            C(n,2) = outMFPar(2);
        end
    elseif strcmpi(outputType,'linear')
        outMFPar = T2FIS.output.mf(T2FIS.rule(n).consequent).params;
        if isequal(T2FIS.outputType,'crisp')
            outMFParUpper =  outMFPar(1,1:nInput);
            C(n,:)=outMFParUpper*input'+outMFPar(1,end);
            
            outMFParLower =  outMFPar(2,1:nInput);
            C(n,2)=outMFParLower*input'+outMFPar(2,end);
        else
            outMFParUpper =  outMFPar(1,1:nInput);
            C(n,:)=outMFParUpper*input'+outMFPar(1,end);
            
            outMFParLower =  outMFParUpper;
            C(n,2)=outMFParLower*input'+outMFPar(2,end);
        end
        
        
        
    end
end


TRMethod = T2FIS.typeRedMethod;
%% Read KM method from t2fis file

switch TRMethod
    case 'Karnik-Mendel'
        TRMethodfunc='t2f_TR_KM';
    case 'KM'
        TRMethodfunc='t2f_TR_KM';
    case 'EKM'
        TRMethodfunc='t2f_TR_EKM';
    case 'IASC'
        TRMethodfunc='t2f_TR_IASC';
    case 'EIASC'
        TRMethodfunc='t2f_TR_EIASC';
    case 'EODS'
        TRMethodfunc='t2f_TR_EODS';
    case 'WM'
        TRMethodfunc='t2f_TR_WM';
    case 'NT'
        TRMethodfunc='t2f_TR_NT';
    case 'BMM'
        TRMethodfunc='t2f_TR_BMM';
    case 'Custom'
    otherwise
        TRMethodfunc='t2f_TR_KM';
end


%% Calculate Output
if strncmp(TRMethod,'BMM',3)
    alfa=str2num(TRMethod(5:regexp(TRMethod,',')-1));
    beta=str2num(TRMethod(regexp(TRMethod,',')+1:end-1));
    [yL,yR,L,R] = feval(TRMethodfunc,F,C);
else
    %       TRMethodfunc='t2f_TR_EIASC';
    [yL,yR,L,R] = feval(TRMethodfunc,F,C);
end
y=(yL+yR)/2;
L;
yL;
yR;
R;

%
%
% elapsedTime=toc;
% assignin('base','ahmet',elapsedTime);
% evalin('base','elapsedTimeBMM(end+1) = ahmet;');
%

