int sensorValue = 0;

int speed1 = 2;
int speed2 = 3;
int speed3 = 4;
int speed4 = 5;

int enable1 = 22;
int enable2 = 23;
int enable3 = 24;
int enable4 = 25;

int ready1 = 28;
int ready2 = 29;
int ready3 = 30;
int ready4 = 31;

int dir1 = 34;
int dir2 = 35;
int dir3 = 36;
int dir4 = 37;

void setup() {
    pinMode(speed1, OUTPUT);
    pinMode(speed2, OUTPUT);
    pinMode(speed3, OUTPUT);
    pinMode(speed4, OUTPUT);

    pinMode(dir1, OUTPUT);
    pinMode(dir2, OUTPUT);
    pinMode(dir3, OUTPUT);
    pinMode(dir4, OUTPUT);

    pinMode(enable1, OUTPUT);
    pinMode(enable2, OUTPUT);
    pinMode(enable3, OUTPUT);
    pinMode(enable4, OUTPUT);
  
    pinMode(ready1, INPUT);
    pinMode(ready2, INPUT);
    pinMode(ready3, INPUT);
    pinMode(ready4, INPUT);

    digitalWrite(enable1, HIGH);
    digitalWrite(enable2, HIGH);
    digitalWrite(enable3, HIGH);
    digitalWrite(enable4, HIGH);

    Serial.begin(38400);
}

void loop() {
 
   if ((digitalRead(ready1)==HIGH)&(digitalRead(ready2)==HIGH)&(digitalRead(ready3)==HIGH)&(digitalRead(ready4)==HIGH))
  {
   
 
 while (Serial.available() > 0) {
    int d1 = Serial.parseInt();
    int v1 = Serial.parseInt();
    int d2 = Serial.parseInt();
    int v2 = Serial.parseInt();
    int d3 = Serial.parseInt();
    int v3 = Serial.parseInt();
    int d4 = Serial.parseInt();
    int v4 = Serial.parseInt();

    Serial.println(d1);
    Serial.println(v1);
    Serial.println(d2);
    Serial.println(v2);

    if (Serial.read() == '\n')
    {
      
      if(d1 == 1) { digitalWrite(dir1, HIGH); } 
      else { digitalWrite(dir1, LOW); }
      if(d2 == 1) { digitalWrite(dir2, HIGH); }
      else { digitalWrite(dir2, LOW); }
      if(d3 == 1) { digitalWrite(dir3, HIGH); } 
      else { digitalWrite(dir3, LOW); }
      if(d4 == 1) { digitalWrite(dir4, HIGH); }
      else { digitalWrite(dir4, LOW); }

      if (v1<5) { digitalWrite(enable1, LOW); }
      else { digitalWrite(enable1, HIGH); }
      if (v2<5) { digitalWrite(enable2, LOW); }
      else { digitalWrite(enable2, HIGH); }
      if (v3<5) { digitalWrite(enable3, LOW); }
      else { digitalWrite(enable3, HIGH); }
      if (v4<5) { digitalWrite(enable4, LOW); }
      else { digitalWrite(enable4, HIGH); }
    
    analogWrite(speed1, v1);
    analogWrite(speed2, v2);
    analogWrite(speed3, v3);
    analogWrite(speed4, v4);
    }
 }
}
else {
  Serial.println("Not ready");
  }
}
