int sensorValue = 0;
int Digin11 = 2;
int Digin12 = 3;
int Digin21 = 4;
int Digin22 = 5;
int ready1 = 8;
int ready2 = 9;
int enable1 = 10;
int enable2 = 11;
int dir1 = 12;
int dir2 = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(enable1, OUTPUT);
pinMode(enable2, OUTPUT);
pinMode(Digin11, OUTPUT);
pinMode(Digin12, OUTPUT);
pinMode(Digin21, OUTPUT);
pinMode(Digin22, OUTPUT);
pinMode(enable1, OUTPUT);
pinMode(enable2, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(ready1, INPUT);
pinMode(ready2, INPUT);
//set motor speed configurations
/*digitalWrite(Digin11, HIGH);
digitalWrite(Digin12, HIGH);
digitalWrite(Digin21, HIGH);
digitalWrite(Digin22, HIGH);
*/
digitalWrite(Digin11, HIGH);
digitalWrite(Digin12, LOW);
digitalWrite(Digin21, HIGH);
digitalWrite(Digin22, LOW);
//enable the motor driver
digitalWrite(enable1, HIGH);
digitalWrite(enable2, HIGH);
//analogWriteResolution(16);  
Serial.begin(38400);
}

void loop() {
 
//Serial.println("wait");

   if ((digitalRead(ready1)==HIGH)&(digitalRead(ready2)==HIGH))
  {
   // Serial.println("ready");
  }
 
  // put your main code here, to run repeatedly:
 //digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
 while (Serial.available() > 0) {
  // start reciving the data
  
 
    
     // Serial.println("go ");
    int d1 = Serial.parseInt();
    int v1 = Serial.parseInt();
    int d2 = Serial.parseInt();
    int v2 = Serial.parseInt();
    //int w = Serial.parseInt();
    Serial.println(d1);
    Serial.println(v1);
    Serial.println(d2);
    Serial.println(v2);

    if (Serial.read() == '\n')
    {
      
      if(d1 == 1)
      {
        digitalWrite(dir1, HIGH);
      }
      else
      {
        digitalWrite(dir1, LOW);
    }
    if(d2 == 1)
    {
        digitalWrite(dir2, HIGH);
    }
      else
      {
        digitalWrite(dir2, LOW);
    }

    if (v1<5)
    {
      digitalWrite(enable1, LOW);
    }
    else
    {
      digitalWrite(enable1, HIGH);
      }
    
    if (v2<5)
    {
      digitalWrite(enable2, LOW);
    }
    else
    {
      digitalWrite(enable2, HIGH);
      }
    
    analogWrite(DAC0, v1);
    analogWrite(DAC1, v2);
    }
   // sensorValue = analogRead(A2);
  //  Serial.println(sensorValue);
 }
// sensorValue = analogRead(A2);
 //Serial.println(sensorValue);
//analogWrite(1, v);
//delay(1000);
//analogWrite(1, 700);
//delay(1000);
//analogWrite(1, 100);
//delay(1000);
//digitalWrite(11, LOW);   // turn the LED on (HIGH is the voltage level)
//analogWrite(1, 100);
//delay(1000);
//analogWrite(1, 700);
//delay(1000);
//analogWrite(1, 100);
//delay(1000);
}
