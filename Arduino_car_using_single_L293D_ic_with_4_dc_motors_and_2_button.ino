int bS1=7;      
int bS2=1;      
int LM=6;       // left motor 1      
int RM=0;       // right motor 

void setup()
{
  pinMode(bS1, INPUT);
  pinMode(bS2, INPUT);
  pinMode(LM, OUTPUT);
  pinMode(RM, OUTPUT);
}

void loop()
{
  if(digitalRead(bS1) && digitalRead(bS2))     // Move Forward
  {
    digitalWrite(LM, HIGH);
    digitalWrite(RM, HIGH);
  }
  
  else if(!(digitalRead(bS1)) && digitalRead(bS2))     // Turn right
  {
    digitalWrite(LM, LOW);
    digitalWrite(RM, HIGH);
  }
  
  else if(digitalRead(bS1) && !(digitalRead(bS2)))     // turn left
  {
    digitalWrite(LM, HIGH);
    digitalWrite(RM, LOW);
  }
  
  else                                              
  {
    digitalWrite(LM, LOW);
    digitalWrite(RM, LOW);
  }
}
