int sensorValue = 0;

int ready1 = 1;
int ready2 = 2;
int ready3 = 3;
int ready4 = 4;

int enable1 = 5;
int enable2 = 6;
int enable3 = 7;
int enable4 = 8;

int dir1 = 9;
int dir2 = 10;
int dir3 = 11;
int dir4 = 12;

void setup() {
    pinMode(ready1, INPUT);
    pinMode(ready2, INPUT);
    pinMode(ready3, INPUT);
    pinMode(ready4, INPUT);

    pinMode(enable1, OUTPUT);
    pinMode(enable2, OUTPUT);
    pinMode(enable3, OUTPUT);
    pinMode(enable4, OUTPUT);

    pinMode(dir1, OUTPUT);
    pinMode(dir2, OUTPUT);
    pinMode(dir3, OUTPUT);
    pinMode(dir4, OUTPUT);

    digitalWrite(enable1, HIGH);
    digitalWrite(enable2, HIGH);
    digitalWrite(enable3, HIGH);
    digitalWrite(enable4, HIGH);

    delay(2000);
    Serial.begin(9600);
    while (!Serial) {
      ; 
    }
      establishContact();  
}

void loop() {
 
   if ((digitalRead(ready1)==HIGH)&(digitalRead(ready2)==HIGH)&(digitalRead(ready3)==HIGH)&(digitalRead(ready4)==HIGH))
  {
   Serial.println("ready");
  }
 
 while (Serial.available() > 0) {
     Serial.println("go ");
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
    
    analogWrite(A1, v1);
    analogWrite(A2, v2);
    analogWrite(A3, v3);
    analogWrite(A4, v4);
    }
 }
}
 void establishContact() {
    Serial.print('Connected!');
    delay(300);
}
    
