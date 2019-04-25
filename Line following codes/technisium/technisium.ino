void setup() {
pinMode(2,INPUT);       //leftmost sensor
pinMode(3,INPUT);       //2nd left sensor
pinMode(4,INPUT);       //middle sensor
pinMode(5,INPUT);       //2nd right sensor
pinMode(6,INPUT);       //rightmost sensor
pinMode(9,OUTPUT);      //left clockwise
pinMode(10,OUTPUT);     //left anticlockwise
pinMode(11,OUTPUT);     //right clockwise
pinMode(12,OUTPUT);     //right anticlockwise
}
int el,l,m,r,er;
void loop() 
{
el=digitalRead(2);
l=digitalRead(3);
m=digitalRead(4);
r=digitalRead(5);
er=digitalRead(6);
if(el==0 && l==0 && m==0 && r==0 && er==0)
{
      digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }
else if(el==1 && l==1 && m==1 && r==1 && er==1)
{
      digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }
 else if(el==1 && l==1 && m==0 && r==1 && er==1)
{
      digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }
 else if(el==1 && l==1 && m==0 && r==0 && er==0)//SHARP LEFT
{
      digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(500);
    }
 else if(el==0 && l==0 && m==0 && r==1 && er==1)//RIGHT
{
      digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    delay(500);
  }
 else if(el==1 && l==1 && m==0 && r==0 && er==1)//LEFT
{
      digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
  }
   else if(el==1 && l==0 && m==0 && r==1 && er==1)//SHARP RIGHT
{
      digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }
}
