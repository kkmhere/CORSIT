#include <Servo.h>

Servo servo_test;
int degree=0;
const int variabe=0;
const int moisture_level=550;
const int moisture;
void setup() {
Serial.begin(9600);   // put your setup code here, to run once:
servo_test.attach(9);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  int moisture= analogRead(variabe);// put your main code here, to run repeatedly:
  Serial.println(moisture);
  if (moisture<moisture_level)
  {
   for(degree=0;degree<90;degree++)
   {
    servo_test.write(degree);
    delay(10);
   }
  }
  else
  {
    for(degree=90;degree>0;degree--)
    {
      servo_test.write(degree);
      delay(10);
      Serial.println(moisture);
    }
  }
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
}
