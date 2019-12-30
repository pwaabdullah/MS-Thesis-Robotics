function createaxes(Parent1, X1, Y1, X2, Y2)
%CREATEAXES(PARENT1, X1, Y1, X2, Y2)
%  PARENT1:  axes parent
%  X1:  vector of x data
%  Y1:  vector of y data
%  X2:  vector of x data
%  Y2:  vector of y data

%  Auto-generated by MATLAB on 06-Oct-2016 16:02:45

% Create axes
axes1 = axes('Parent',Parent1);
hold(axes1,'on');

% Create plot
plot(X1,Y1,'DisplayName','Trajectory','LineWidth',1);

% Create plot
plot(X2,Y2,'DisplayName','Tracked Path','LineWidth',1,'LineStyle','--');

box(axes1,'on');
grid(axes1,'on');
