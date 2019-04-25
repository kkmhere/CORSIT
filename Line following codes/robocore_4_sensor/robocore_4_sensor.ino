void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);         //left sensor
pinMode(5,INPUT);        //left middle sensor
pinMode(6,INPUT);       //right middle sensor
pinMode(7,INPUT);      //right sensor
pinMode(10,OUTPUT);   //left clockwise
pinMode(11,OUTPUT);  //left anticlockwise
pinMode(12,OUTPUT); //right clockwise
pinMode(13,OUTPUT);//right anticlockwise

}
void sharpright()
{
  digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  }
  void sharpleft()
{
  digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  }
void softright()
{
 digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW); 
}
void softleft()
{
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
}
void forward()
{
  digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
}
int l,r,mr,ml;
void loop() 
{  // put your main code here, to run repeatedly:
l=digitalRead(4);
r=digitalRead(7);
ml=digitalRead(5);
mr=digitalRead(6);

if(l==0 && r==0 &&mr==0 && ml==0) //forward
{
 forward();
  }
else if(l==1 && ml==1 && mr==0 && r==0) //turn sharpright
{
 sharpright();
}
else if(l==0 && ml==0 && mr==1 && r==1) //turn sharpleft
{
 sharpright();
}
else if(l==1 && ml==0 && mr==1 && r==1) //turn left
{
  softleft(); 
}
else if(l==1 && ml==1 && mr==0 && r==1) //turn right
{
  softright(); 
}

}
