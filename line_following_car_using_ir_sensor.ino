int LS=1;       // left sensor
int RS=11;       // right sensor
int LM1=9;      // left motor 1
int RM1=10;       // right motor 1

void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(RM1, OUTPUT);
}

void loop()
{
  if(digitalRead(LS)==LOW && digitalRead(RS)==LOW)     // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(RM1, HIGH);
  }
  
  else if(digitalRead(LS)==HIGH && digitalRead(RS)==LOW)    // Turn right
  {
    digitalWrite(LM1, LOW);
    digitalWrite(RM1, HIGH);
  }
  
  else if(digitalRead(LS)==LOW && digitalRead(RS)== HIGH)     // turn left
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(RM1, LOW);
  }
  
  else                                              
  {
    digitalWrite(LM1, LOW);
    digitalWrite(RM1, LOW);
  }
}
