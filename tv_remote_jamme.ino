int irled = 13; 
void setup() 
{
  pinMode(irled, OUTPUT);
}
void loop() 
{
  digitalWrite(irled, HIGH); 
  delayMicroseconds(12);     
  digitalWrite(irled, LOW);   
  delayMicroseconds(12);   
}
