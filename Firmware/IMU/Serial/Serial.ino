/*
The sensor outputs provided by the library are the raw
16-bit values obtained by concatenating the 8-bit high and
low accelerometer and gyro data registers. They can be
converted to units of g and dps (degrees per second) using
the conversion factors specified in the datasheet for your
particular device and full scale setting (gain).

Example: An LSM6DS33 gives an accelerometer Z axis reading
of 16276 with its default full scale setting of +/- 2 g. The
LA_So specification in the LSM6DS33 datasheet (page 11)
states a conversion factor of 0.061 mg/LSB (least
significant bit) at this FS setting, so the raw reading of
16276 corresponds to 16276 * 0.061 = 992.8 mg = 0.9928 g.
*/

#include <Wire.h>
#include <LSM6.h>

LSM6 imu;

char report[80];
float sumvy=0;
  float sumvz=0;
  float sumdispX=0;
  float axold=0;
  float  ayold=0;
   float ax=0;
  float  ay=0;

   float  vxold=0;
   float  vyold=0;
   float  vx=0;
    float vy=0;
      
    float dxold=0;
    float dyold=0;
   float  dx=0;
   float  dy=0;
   long timer = 0; //general purpuse timer
long timer_old;
long timer24 = 0; //Second timer used to print values

float G_Dt = 0.02; 
unsigned int counter = 0;

void setup()
{
  Serial.begin(115200);
  Wire.begin();

  if (!imu.init())
  {
    Serial.println("Failed to detect and initialize IMU!");
    while (1);
  }
  imu.enableDefault();
}

void loop() //Main Loop
{
  
  if ((millis() - timer) >= 10) // Main loop runs at 50Hz

  {
    counter++;
    timer_old = timer;
    timer = millis();
//   timer =  micros();
    if (timer > timer_old)
      G_Dt = (timer - timer_old) / 1000.0; // Real time of loop run. We use this on the DCM algorithm (gyro integration time)
    else
      G_Dt = 0;

  
  imu.read();

  snprintf(report, sizeof(report), "A: %6d %6d %6d    G: %6d %6d %6d",
    imu.a.x, imu.a.y, imu.a.z,
    imu.g.x, imu.g.y, imu.g.z);
//  Serial.println(report);
axold=ax;
    ayold=ay;
    ax=(imu.a.x/16276)*9.81;
    ay=(imu.a.y/16276)*9.81;

     vxold=vx;
     vyold=vy;
     vx=vx+((ax))*G_Dt;
     vy=vy+(ay)*G_Dt;
     float vx1=vx*1000;
      Serial.println(vx1);
//     dxold=dx;
//     dyold=dy;
     dx=dx+(vx+vxold)/2*G_Dt;
     dy=dy+(vy+vyold)/2*G_Dt;
}}
