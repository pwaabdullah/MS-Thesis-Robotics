function output=newit2fls(it2flsName)

% Calls:
if nargin==0,it2flsName='it2fis';end
name=it2flsName;
it2flsType='sugeno';
aggMethod='sum';
andMethod='prod';
defuzzMethod='wtaver';
impMethod='prod';
orMethod='probor';
typeRedMethod='Karnik-Mendel';
outputType='crisp';



%% creat it2fls structure
output.name=name;
output.type=it2flsType;
output.andMethod=andMethod;
output.orMethod=orMethod;
output.defuzzMethod=defuzzMethod;
output.impMethod=impMethod;
output.aggMethod=aggMethod;
output.typeRedMethod=typeRedMethod;
output.outputType=outputType;

% Create default values for the it2fls structure input output and rule
output.input=[];
output.output=[];
output.rule=[];