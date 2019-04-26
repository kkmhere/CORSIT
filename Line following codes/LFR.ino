void setup() 
{
  // put your setup code here, to run once:                         //BLACK==0
                                                                    //WHITE==1
    pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(3,INPUT);
    pinMode(5,INPUT);
    pinMode(7,INPUT);
    pinMode(9,OUTPUT);
    digitalWrite(9,HIGH);
    pinMode(6,OUTPUT);
    digitalWrite(6,HIGH);
    pinMode(4,OUTPUT);
    digitalWrite(4,HIGH);
    pinMode(8,OUTPUT);
    digitalWrite(8,HIGH);
}

void loop()
  // put your main code here, to run repeatedly:
  { 
    if((digitalRead(7)==0)&&(digitalRead(5)==0)&&(digitalRead(3)==0)||((digitalRead(7)==1)&&(digitalRead(5)==0)&&(digitalRead(3)==1)||(digitalRead(7)==1)&&(digitalRead(5)==1)&&(digitalRead(3)==1)))
    {
    digitalWrite(13,HIGH);//FORWARD
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    }

    if((digitalRead(7)==0)&&(digitalRead(5)==0)&&(digitalRead(3)==1))
    {
    digitalWrite(13,HIGH);//RIGHT TURN
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    }
  //delay(2000);
    if((digitalRead(7)==1)&&(digitalRead(5)==0)&&(digitalRead(3)==0))
    {
    digitalWrite(13,LOW);//RIGHT TURN
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    delay(2000);
    digitalWrite(13,HIGH);//LEFT TURN
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    delay(2000);
    }
 // delay(2000);
   // if((digitalRead(7)==1)&&(dgitalRead(5)==0)&&(digitalRead(3)==1))
    //{
    //digitalWrite(13,HIGH);//STEEP LEFT
    //digitalWrite(12,LOW);
    //digitalWrite(11,LOW);
    //digitalWrite(10,HIGH);
    //}
   //delay(2000);
      if((digitalRead(7)==0)&&(digitalRead(5)==1)&&(digitalRead(3)==0))
     {
    digitalWrite(13,LOW);//STEEP RIGHT
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
     }
   //delay(2000);
  } 
