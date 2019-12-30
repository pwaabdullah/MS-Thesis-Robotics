#include "mbed.h"
#include "Motor.h"
 
Serial pc(USBTX, USBRX); // tx, rx
DigitalIn readyIn(D0);
Motor m1(D2,D12,D11);
Motor m2(D4,D9,D8);
char command[6];
 
int main() {
    int isMotorReady;
    isMotorReady = readyIn; 
    pc.printf("\nisMotorReady? = %d", isMotorReady);
    pc.printf("\nEnter Speed of two motors in the range of 1-10 with direction by separating comma operator: e.g. (+3,-5)");
    
    while(isMotorReady) { 
        if(pc.readable()){
            pc.gets(command, 6);
            printf("%s\r\n", command);
            char direction1, speed1, direction2, speed2;
             direction1 = command[0];
             speed1 = command[1];
             direction2 = command[3];
             speed2 = command[4];

            wait(0.01);
            if(direction1 == '+'){
                pc.putc(direction1);
                pc.putc(speed1);
                switch(speed1){
                case '1': m1.speed(0.1); break;
                case '2': m1.speed(0.2); break;
                case '3': m1.speed(0.3); break;
                case '4': m1.speed(0.4); break;
                case '5': m1.speed(0.5); break;
                case '6': m1.speed(0.6); break;
                case '7': m1.speed(0.7); break;
                case '8': m1.speed(0.8); break;
                case '9': m1.speed(0.9); break;
                default : m1.speed(0.0);
                }
            }
            wait(0.01);
            if (direction1 == '-')
            {
                pc.putc(direction1);
                pc.putc(speed1);
                switch(speed1){
                case '1': m1.speed(-0.1); break;
                case '2': m1.speed(-0.2); break;
                case '3': m1.speed(-0.3); break;
                case '4': m1.speed(-0.4); break;
                case '5': m1.speed(-0.5); break;
                case '6': m1.speed(-0.6); break;
                case '7': m1.speed(-0.7); break;
                case '8': m1.speed(-0.8); break;
                case '9': m1.speed(-0.9); break;
                default : m1.speed(0.0);
                }
            }
            wait(0.01);

            if(direction2 == '+'){
                pc.putc(direction2);
                pc.putc(speed2);
                switch(speed2){
                case '1': m2.speed(0.1); break;
                case '2': m2.speed(0.2); break;
                case '3': m2.speed(0.3); break;
                case '4': m2.speed(0.4); break;
                case '5': m2.speed(0.5); break;
                case '6': m2.speed(0.6); break;
                case '7': m2.speed(0.7); break;
                case '8': m2.speed(0.8); break;
                case '9': m2.speed(0.9); break;
                default : m2.speed(0.0);
                }
            }
            wait(0.01);
            if (direction2 == '-')
            {
                pc.putc(direction2);
                pc.putc(speed2);
                switch(speed2){
                case '1': m2.speed(-0.1); break;
                case '2': m2.speed(-0.2); break;
                case '3': m2.speed(-0.3); break;
                case '4': m2.speed(-0.4); break;
                case '5': m2.speed(-0.5); break;
                case '6': m2.speed(-0.6); break;
                case '7': m2.speed(-0.7); break;
                case '8': m2.speed(-0.8); break;
                case '9': m2.speed(-0.9); break;
                default : m2.speed(0.0);
                }
            }
            else{
                m1.speed(0.0);
                m2.speed(0.0);
            }
            wait(0.01);
        }
    }
}