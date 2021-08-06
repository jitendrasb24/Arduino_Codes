#define ENA 9        // ENA speed pin for left motor
#define IN1 8        // IN1 on Motor controller board
#define IN2 10       // IN2

#define ENB 11       // ENB speed pin for right motor
#define IN3 12       // IN3 on Motor controller board
#define IN4 13       // IN4

int LS=2;            // left sensor
int MS=4;            // middle sensor 
int RS=6;            // right sensor

int rightspeed = 180;
int leftspeed = 180;

void setup() 
{
  pinMode(ENA, OUTPUT);               //set up left motor
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);               //sets up right motor
  pinMode(IN3, OUTPUT); 
  pinMode(IN4, OUTPUT);

  pinMode(LS, INPUT);
  pinMode(MS, INPUT);
  pinMode(RS, INPUT);

  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);

  analogWrite(ENA, rightspeed);            //set speed to mid
  analogWrite(ENB, leftspeed);           //set speed to mid

}

void loop()  
{
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
 {
  if(digitalRead(LS)==LOW && digitalRead(MS)==LOW && digitalRead(RS)==LOW)     // Move Forward
   {
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
   }
  else if(digitalRead(LS)==HIGH && digitalRead(MS)==LOW && digitalRead(RS)==LOW)    // Turn right
    {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
    }
   else if(digitalRead(LS)==LOW && digitalRead(MS)==LOW && digitalRead(RS)==HIGH)     // turn left
    {
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, LOW);
    }
   else if(digitalRead(LS)==LOW && digitalRead(MS)==HIGH && digitalRead(RS)==LOW)     // Move back
    {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
    } 
    else if(digitalRead(LS)==HIGH && digitalRead(MS)==HIGH && digitalRead(RS)==LOW)    // Turn right
    {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
    }
   else if(digitalRead(LS)==LOW && digitalRead(MS)==HIGH && digitalRead(RS)==HIGH)     // turn left
     {
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, LOW);
    }
   else if(digitalRead(LS)==HIGH && digitalRead(MS)==HIGH && digitalRead(RS)==HIGH)     // Move back
    {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
    }   
  }
}
