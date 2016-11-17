function fuzzyt2()
%FUZZYT2 starts the IT2-FLSs toolbox
%
% SYNTAX: 
%     fuzzyt2() 

%% add path 
hpath=fileparts(mfilename('fullpath'));
addpath(hpath)
addpath([hpath,'\IT2FLSs_Toolbox_Funcs'])
addpath([hpath,'\TR_Methods_Funcs'])
addpath([hpath,'\Simulink_Lib'])
addpath([hpath,'\Images'])

%% add the shortcut
t2f_addshortcut

%% Open Type2 Fuzzy Toolbox
fuzzytype2;