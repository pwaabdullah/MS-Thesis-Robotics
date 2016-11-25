clear;
clc;
load data_w;
% trajectory rect cmd
figure
a = plot(path_fpir(2,:),path_fpir(3,:),'-b'...    
    ,pos_fpir(2,:),pos_fpir(3,:),'-'...
    ,pos_pir(2,:),pos_pir(3,:),'--r'...
);
a(1).LineWidth = 1;
a(2).LineWidth = 1;
a(3).LineWidth = 1;
xlabel({'x (m)'});
ylabel({'y (m)'});
title({'Comparison of nonlinear and linear model responses'});
grid on;
legend('Nonlinear','Linear');

% trajectory cir cmd
figure
b = plot(path_pdc(2,:),path_pdc(3,:),'-b'...
    ,pos_nlcf(2,:),pos_nlcf(3,:),'--r');
%             ,pos_pdc(2,:),pos_pdc(3,:),'-'...
%     ,pos_lc(2,:),pos_lc(3,:),':'...
%     ,pos_pnlc68(2,:),pos_pnlc68(3,:),'--'...
% );
b(1).LineWidth = 1;
b(2).LineWidth = 1;
% b(3).LineWidth = 1;
% b(4).LineWidth = 1;
% b(5).LineWidth = 2;
xlabel({'x (m)'});
ylabel({'y (m)'});
title({'Comparison of nonlinear and linear model responses'});
grid on;
legend('Nonlinear','Linear');

% PSO tuning
% plot(path_nlr8(2,:),path_nlr8(3,:),'-'...
%     ,pos_olr(2,:),pos_olr(3,:)...
%     ,pos_nlr8(2,:),pos_nlr8(3,:)...
%     ,pos_nlr2(2,:),pos_nlr2(3,:)...
%     ,pos_nlr3(2,:),pos_nlr3(3,:)...
%     ,pos_nlr4(2,:),pos_nlr4(3,:)...
%     ,pos_nlr6(2,:),pos_nlr6(3,:)...
%     ,pos_nlr7(2,:),pos_nlr7(3,:)...
%     ,pos_nlr8(2,:),pos_nlr8(3,:)...
% )

% Velocity (x) comp cmd
figure
c = plot(path_vel_nlrf(1,:),path_vel_nlrf(3,:),'-b'...
    ,vel_nlrf(1,:),vel_nlrf(3,:),'--r');
%     ,vel_nlr(1,:),vel_nlr(2,:),'--'...
%     ,vel_pnlr68(1,:),vel_pnlr68(2,:),'r:.');
c(1).LineWidth = 1;
c(2).LineWidth = 1;
% c(3).LineWidth = 1;
% c(4).LineWidth = 2;
xlabel({'t (s)'});
ylabel({'y (m)'});
title({'Vertical Velocity y; Circular Trajectory'});
grid on;
legend('Desired','LQR');

% Velocity (y) comp cmd
figure
d = plot(path_vel_pdr(1,:),path_vel_pdr(3,:),'-'...
    ,vel_pdr(1,:),vel_pdr(3,:),':'...
    ,vel_nlr(1,:),vel_nlr(3,:),'--'...
    ,vel_pnlr68(1,:),vel_pnlr68(3,:),'r:.');
d(1).LineWidth = 1;
d(2).LineWidth = 1;
d(3).LineWidth = 1;
d(4).LineWidth = 2;
xlabel({'t (s)'});
ylabel({'y (m)'});
title({'Vertical Velocity y; Rectangular Trajectory'});
grid on;
legend('Desired','PID','LQR','PI-PSO LQR');

% Position x comp cmd
figure
e = plot(path_nlcphi(1,:),path_nlcphi(4,:),'-'...
    ,pos_nlcphi(1,:),pos_nlcphi(4,:),'--r');
%     ,pos_nlr(1,:),pos_nlr(2,:),'g:'...
%     ,pos_pnlr68(1,:),pos_pnlr68(2,:),'r--');
e(1).LineWidth = 1;
e(2).LineWidth = 1;
% e(3).LineWidth = 1;
% e(4).LineWidth = 1;
xlabel({'t (s)'});
ylabel({'\phi (rad)'});
title({'Angular Trajectory'});
grid on;
legend('Trajectory','Tracked path');

% Position y comp cmd
figure
e = plot(path_pdr(1,:),path_pdr(3,:),'-'...
    ,pos_pdr(1,:),pos_pdr(3,:),'black:'...
    ,pos_nlr(1,:),pos_nlr(3,:),'g:'...
    ,pos_pnlr68(1,:),pos_pnlr68(3,:),'r--');
e(1).LineWidth = 1;
e(2).LineWidth = 1;
e(3).LineWidth = 1;
e(4).LineWidth = 1;
xlabel({'t (s)'});
ylabel({'y (m)'});
title({'Position and Orientation; Rectangular Trajectory'});
grid on;
legend('Desired','PID','LQR','PI-PSO LQR');

% pos error x
figure
f = plot(pos_error_nlrf(1,:),pos_error_nlrf(2,:)...
    ,pos_error_nlrf(1,:),pos_error_nlrf(3,:))
f(1).LineWidth = 1;
f(2).LineWidth = 1;
% f(3).LineWidth = 1;
xlabel({'t (s)'});
ylabel({'Position Error (m)'});
title({'Position Error; Rectangular Trajectory'});
grid on;
legend('e_x','e_y');


% voltage m1
figure
m1 = plot(voltage_pdr(1,:),voltage_pdr(2,:),'black:'...
    ,voltage_nlr(1,:),voltage_nlr(2,:),'r--');
m1(1).LineWidth = 1;
m1(2).LineWidth = 1;
xlabel({'t (s)'});
ylabel({'M1 voltage (v)'});
title({'Motor voltage; Rectangular Trajectory'});
grid on;
legend('PID','LQR');

% voltage m2
figure
m2 = plot(voltage_pdr(1,:),voltage_pdr(3,:),'black:'...
    ,voltage_nlr(1,:),voltage_nlr(3,:),'r--');
m2(1).LineWidth = 1;
m2(2).LineWidth = 1;
xlabel({'t (s)'});
ylabel({'M2 voltage (v)'});
title({'Motor voltage; Rectangular Trajectory'});
grid on;
legend('PID','LQR');

% voltage m3
figure
m3 = plot(voltage_pdr(1,:),voltage_pdr(4,:),'black:'...
    ,voltage_nlr(1,:),voltage_nlr(4,:),'r--');
m3(1).LineWidth = 1;
m3(2).LineWidth = 1;
xlabel({'t (s)'});
ylabel({'M3 voltage (v)'});
title({'Motor voltage; Rectangular Trajectory'});
grid on;
legend('PID','LQR');

% voltage m4
figure
m4 = plot(voltage_pdr(1,:),voltage_pdr(5,:),'black:'...
    ,voltage_nlr(1,:),voltage_nlr(5,:),'r--');
m4(1).LineWidth = 1;
m4(2).LineWidth = 1;
xlabel({'t (s)'});
ylabel({'M4 voltage (v)'});
title({'Motor voltage; Rectangular Trajectory'});
grid on;
legend('PID','LQR');




