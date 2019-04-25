void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(9,OUTPUT);      //left clockwise
pinMode(10,OUTPUT);     //left anti
pinMode(11,OUTPUT);     //right clockwise
pinMode(12,OUTPUT);     //right anti
}

int l,r;
void loop() {
  // put your main code here, to run repeatedly:
l=digitalRead(4);
r=digitalRead(5);
if(l==0 && r==0) //to stop
{
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  }
  if(l==1 && r==0) //turn right
{
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}
 if(l==0 && r==1) //turn left
{
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  
}
 if(l==1 && r==1) //move forward
{
  digitalWrite(9,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }

}
