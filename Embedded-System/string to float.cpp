#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mbed.h"
#include "Motor.h"

Serial xbee1(D1, D0);
Motor m1(D2,D12,D11);
Motor m2(D4,D9,D8);

int main()
{
  char command[20];

  char *speed1, *speed2;

  float s1 = 0.0;
  float s2 = 0.0;

   while (1) {
        if(xbee1.readable()){
            // xbee1.printf("Connected!");

            xbee1.gets(command,10);
            wait(0.1);
            
            xbee1.printf("\ncommand%s", command);
            wait(0.1);

            speed1 = strtok (command,",");
            speed2 = strtok (NULL,",");
            wait(0.1);

            xbee1.printf("\nspeed1%s", speed1);
            wait(0.1);
            xbee1.printf("\nspeed2%s", speed2);
            wait(0.1);

            s1 = atof(speed1);
            s2 = atof(speed2);

            xbee1.printf("s1%+f", s1);
            wait(0.1);
            xbee1.printf("s2%+f", s2);
            wait(0.1);
            
            m1.speed(s1);
            m2.speed(s2);

            fflush(stdout);
            }

        }  
}
