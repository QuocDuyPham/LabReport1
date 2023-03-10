int AI = A1; 
int x= 0.0 ;
float volt = 0.0;
float IA= 0.0;
float RB = 0;
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
byte Ohms[8] = {
  B00000,
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01010,
  B11011
};
byte vo[8] = {
  B00000,
  B00000,
  B00000,
  B10001,
  B10001,
  B10001,
  B01010,
  B00100
};

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
lcd.createChar(0, Ohms);
lcd.createChar(1, vo);
}

void loop() {
lcd.setCursor(12,1);
 lcd.write(byte(0));
lcd.setCursor(12,0);
 lcd.write(byte(1));
float volt=( x /1023.0)*5.0; 
Serial.print("\t\t");
Serial.print("AI voltage = ");
Serial.print(volt);
delay(100);
 x= analogRead (AI);
Serial.print("\t");
Serial.print("AI value= ");
Serial.println(x);
float IA=(5.0 - volt )/993.0;
Serial.print("\t");
Serial.print("IA Value = ");
Serial.print(IA);
float RB= (volt/IA);
Serial.print("\t\t");
Serial.print("RB Value=");
Serial.print(RB);
lcd.setCursor(0,0); 
lcd.print(" volt = ");
lcd.println(volt);
trim(13,0);
lcd.setCursor (0,1);
lcd.print (" RB = ");
lcd.println(RB);
trim(13,1);
}
