#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
 
void setup()
{
lcd.begin(16, 2);
lcd.clear();
pinMode(8, INPUT);
digitalWrite(8, HIGH);
pinMode(9, INPUT);
digitalWrite(9, HIGH);
}
double i = 0;
double a = millis();
double c ;
 
void loop()
{
lcd.clear();
lcd.print("press start");
delay(100);
 
if(digitalRead(8) == LOW)
{
 
lcd.clear();
a = millis();
while(digitalRead(9) == HIGH)
{
 
c = millis();
i = (c - a) / 1000;
lcd.print(i);
lcd.setCursor(7,0);
lcd.print("Second");
lcd.setCursor(0,0);
Serial.println(c);
Serial.println(a);
Serial.println(i);
Serial.print(".....");
delay(100);
}
 
if(digitalRead(9) == LOW)
{
while(digitalRead(8) == HIGH)
{
lcd.setCursor(0,0);
lcd.print(i);
lcd.setCursor(11,0);
lcd.print("");
lcd.setCursor(0,0);
delay(100);
}
}
}
}
