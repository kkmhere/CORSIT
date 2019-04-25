void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(9,OUTPUT);      //left clockwise
pinMode(10,OUTPUT);     //left anti
pinMode(11,OUTPUT);     //right clockwise
pinMode(12,OUTPUT);     //right anti

}

void right()
{
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH); 
}
void left()
{
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
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
int l,r;
void loop() {
  // put your main code here, to run repeatedly:
l=digitalRead(4);
r=digitalRead(5);
if(l==0 && r==0) //to forward
{
 forward();
  }
  if(l==1 && r==0) //turn right
{
 right();
}
 if(l==0 && r==1) //turn left
{
  left();
  
}
 if(l==1 && r==1) //move forward
{
  forward();
  }


}
