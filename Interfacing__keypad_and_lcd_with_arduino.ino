#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);                              //RS,EN,D4,D5,D6,D7
#include <Keypad.h>
const byte ROWS = 4; 
const byte COLS = 4; 
char keys[ROWS][COLS] = {

  {'7','8','9','/'},

  {'4','5','6','*'},

  {'1','2','3','-'},

  {'C','0','=','+'}

};
byte rowPins[ROWS] = { 0, 1, 2, 3 };                 // Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte colPins[COLS] = { 4, 5, 6, 7 };                 // Connect keypad COL0, COL1 and COL2 to these Arduino pins.

Keypad customKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );      //  Create the Keypad

void setup()

{

  for(int i=8;i<14;i++)

  {

    pinMode(i,OUTPUT);                      //pins 8-14 are enabled as output

  }

  lcd.begin(16, 2);                        //initializing LCD

}

void loop()

{

  char key = customKeypad.getKey();                 //storing pressed key value in a char

  if(key)
  {
  lcd.setCursor(0,0);
  lcd.print(key);                                  
  }
}
  
