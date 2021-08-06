int led=2;
int b=1;
int bs=0;
void setup()
{
pinMode(led,OUTPUT);
pinMode(b,INPUT);
}

void loop() 
{
bs=digitalRead(b);
if(bs==1)
{
 digitalWrite(led,HIGH);
 }
 else
 {
 digitalWrite(led,HIGH);
 delay(100);
 digitalWrite(led,LOW);
 delay(100);
 digitalWrite(led,HIGH);
 delay(100);
 digitalWrite(led,LOW);
 delay(100);
 digitalWrite(led,HIGH);
 delay(100);
 digitalWrite(led,LOW);
 delay(100);
 digitalWrite(led,HIGH);
 delay(100);
 digitalWrite(led,LOW);
 delay(100);
 digitalWrite(led,HIGH);
 delay(100);
 digitalWrite(led,LOW);
  }
}
