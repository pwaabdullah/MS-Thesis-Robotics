function t2f_updatet2fis(t2fis)

thisfis{1}=t2fis;
newFigNumber=findall(0, 'Type', 'figure', 'tag','fuzzyt2');
set(newFigNumber,'UserData',thisfis);