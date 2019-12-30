#include "mbed.h"
#include "Motor.h"
 
Serial pc(USBTX, USBRX); // tx, rx
DigitalIn readyIn(D0);
Motor m(D2,D12,D11);
char command[3];
 
int main() {
    int isMotorReady;
    isMotorReady = readyIn; 
    pc.printf("\nisMotorReady? = %d", isMotorReady);
    pc.printf("\nEnter Speed in the range 1-10 with direction: Example +5 or -3");
    
    while(isMotorReady) { 
        if(pc.readable()){
            pc.gets(command, 3);
            printf("%s\n", command);
            char direction = command[0];
            char speed = command[1];
            pc.putc(direction);
            pc.putc(speed);
            if(direction == '+'){
                switch(speed){
                case '1': m.speed(0.1); break;
                case '2': m.speed(0.2); break;
                case '3': m.speed(0.3); break;
                case '4': m.speed(0.4); break;
                case '5': m.speed(0.5); break;
                case '6': m.speed(0.6); break;
                case '7': m.speed(0.7); break;
                case '8': m.speed(0.8); break;
                case '9': m.speed(0.9); break;
                default : m.speed(0.0);
                }
            }
            else if (direction == '-')
            {
                switch(speed){
                case '1': m.speed(-0.1); break;
                case '2': m.speed(-0.2); break;
                case '3': m.speed(-0.3); break;
                case '4': m.speed(-0.4); break;
                case '5': m.speed(-0.5); break;
                case '6': m.speed(-0.6); break;
                case '7': m.speed(-0.7); break;
                case '8': m.speed(-0.8); break;
                case '9': m.speed(-0.9); break;
                default : m.speed(0.0);
                }
            }
            else{
                m.speed(0.0);
            }
            wait(0.01);
        }
    }
}