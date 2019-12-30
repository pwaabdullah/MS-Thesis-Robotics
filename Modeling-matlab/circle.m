clc;
close all;
clear;



%circle
% t=0:100;
% % t = linspace(0, 2*pi, 360);
% x=sin(t*.2);
% y=cos(t*.2);
% plot(x)
% plot(y)
% plot(x,y)

%rectangle
% x1=0;
% x2=1;
% y1=0;
% y2=1;
% x = [x1, x2, x2, x1, x1];
% y = [y1, y1, y2, y2, y1];
% plot(x, y);
% 
% xlim([-1, 2]);
% ylim([-1, 2]);

%create a movie and rectangle
% x = [0 1];
% y = [1 1];
% numSteps = 100;
% % Calculate the trajectory by linear interpolation of the x and y coordinate.
% trajectory = [ linspace(x(1),x(2),numSteps); linspace(y(1),y(2),numSteps) ];
% % Make figure with axes.
% figure; axis square; hold on;
% set(gca,'XLim',[-2 2], 'YLim', [-2 2]);
% % Make the frames for the movie.
% for frameNr = 1 : numSteps
% 	cla;
% 	
% 	% Plot the point.
% 	plot( trajectory(1,frameNr), trajectory(2,frameNr), 'o' );
% 	
% 	% Plot the path line.
% 	line( 'XData', [trajectory(1,1) trajectory(1,frameNr)], ...
%           'YData', [trajectory(2,1) trajectory(2,frameNr)] );
% 	
% 	% Get the frame for the animation.
% 	frames(frameNr) = getframe;
% end
% movie(frames);