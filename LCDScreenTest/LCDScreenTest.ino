#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16, 2); //16 pixels in a row and 2 pixels in a column 
  lcd.clear(); 
  lcd.print("  HELLO WORLD!"); 
  delay(1500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("    I GAINED ");
  lcd.setCursor(0, 1);
  lcd.print("  CONSCIOUSNESS");
  delay(2000);
  lcd.clear();
}

void loop() 
{
  lcd.setCursor(0, 1); 
}
