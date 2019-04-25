void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT)
pinMode(9,OUTPUT);      //left clockwise
pinMode(10,OUTPUT);     //left anti
pinMode(11,OUTPUT);     //right clockwise
pinMode(12,OUTPUT);     //right anti
}
void nothing()
{
   digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  }

void right()
{
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW); 
}
void left()
{
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
}
void forward()
{
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
}
void sharpleft()
{
  digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
}
void sharpright()
{
  digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(1000);
}

int l,r,m;
void loop() {
  // put your main code here, to run repeatedly:
l=digitalRead(4);
r=digitalRead(5);
m=digitalRead(6);
if(l==0 && r==0 && m==0) //to stop
{
 nothing();
  }
  if(l==1 && r==0 && m==0) //turn right
{
 right();
}
 if(l==0 && r==1 && m==0) //turn left
{
  left();
  
}
 if(l==1 && r==1 && m==1) //move forward
{
  forward();
  }
  
 if(l==0 && r==0 && m==1) //move forward
{
  forward();
  }
  
 if(l==0 && r==1 && m==1) //move shapr left
{
  sharpleft();
  }

 if(l==1 && r==0 && m==1) //move sharp right
{
  forward();
  }
  
 if(l==1 && r==1 && m==0) //move forward
{
  forward();
  }
}
