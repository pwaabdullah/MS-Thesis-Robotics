%% robot characteristic
maxspeed = 3.5; % m/sec
max_Accel = 3.5; % m/sec^2
Mass = 5; % kg
wheel_radius = 2.75e-2; % meters
Actual_Motor_torque = 0.059; %N.m
Motor_max_speed = 1047.1975499999999 ;% rad/sec == 10000 RPM
 
%% Dynamic calculations
Ftotal =  max_Accel*Mass;
% ftotal=2*fwheel*(cos(pi/4)+cos(pi/3))
Fwheel = Ftotal/2/((cos(pi/4)+cos(pi/3)))
% Fwheel = Ftotal/4*sqrt(2);
Motor_Max_torque = Fwheel*wheel_radius %
Gear_ratio_t = Motor_Max_torque/Actual_Motor_torque
if Gear_ratio_t<1
   error('Check the calculation, it shows that No need for the Gear')
end

%% kinematic calculations
Wheel_maxspeed = 3.5/sin(pi/4)/wheel_radius; %rad/Sec
Gear_ratio_s = Motor_max_speed/Wheel_maxspeed
 
%%
Prefered_Gear_ratio = (Gear_ratio_s + Gear_ratio_t)/2
 