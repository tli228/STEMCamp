/*#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>

LiquidCrystal_PCF8574 lcd(0x3f);

void setup() 
{
  Wire.begin();
  Wire.beginTransmission(0x3f);
  
  lcd.begin(16, 2); 

  lcd.setBacklight(255);
  lcd.home(); 
  lcd.clear();
  delay(300);
  lcd.setCursor(0, 0);
  lcd.print(" FOOLISH MORTAL!");
  delay(1500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("   I AM YOUR");
  lcd.setCursor(0, 1);
  lcd.print("  CONTROLLER!!!");
  delay(2000);
  lcd.clear();
  
  lcd.setCursor(0, 0);
  lcd.print("   NIRV  2018");
  lcd.setCursor(0, 1);
  lcd.print("   Controller");
  delay(1000);
}

void loop()
{
  
}*/

//Didn't work the first time, needs a pot 
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16, 2);
  lcd.clear(); 
  lcd.print("Hello World!"); 
}

void loop() 
{
  lcd.setCursor(0, 1); 
  lcd.print(millis()/1000); 
}

