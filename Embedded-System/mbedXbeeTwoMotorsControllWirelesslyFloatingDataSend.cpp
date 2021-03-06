#include "mbed.h"
#include "Motor.h"

Serial xbee1(D1, D0);
Motor m1(D2,D12,D11);
Motor m2(D4,D9,D8);

int main() {
    float y = 0;
    
    while (1) {
        if(xbee1.readable()){
            xbee1.printf("Connected!");
            xbee1.scanf("%f", &y);
            xbee1.printf("\r\nSpeed %+f", y);
            m1.speed(y);
            m2.speed(y);
            }
            else{
                m1.speed(0.0);
                m2.speed(0.0);               
            }

        }  
    }