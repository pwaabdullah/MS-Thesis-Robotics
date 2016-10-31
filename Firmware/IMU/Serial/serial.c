/*
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

float ax=0;
float ay=0;
float vx=0;
float vy=0;

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
    
    if (timer > timer_old)
      G_Dt = (timer - timer_old) / 1000.0; // Real time of loop run. We use this on the DCM algorithm (gyro integration time)
    else
      G_Dt = 0;

    imu.read();

    snprintf(report, sizeof(report), "A: %6d %6d %6d ",
      imu.a.x, imu.a.y, imu.a.z);

    ax=(imu.a.x/16276)*9.81;
    ay=(imu.a.y/16276)*9.81;

    vx=vx+((ax))*G_Dt;
    vy=vy+(ay)*G_Dt;
    float vx1=vx*1000;

    Serial.println(vx1);
  }
}