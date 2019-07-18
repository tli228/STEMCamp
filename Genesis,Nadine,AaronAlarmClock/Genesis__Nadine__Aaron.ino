#include <LiquidCrystal.h>

int buzzerPin = 9;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
pinMode(buzzerPin, OUTPUT);  
lcd.begin(16, 2);
lcd.clear();
}


void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0, 0);
lcd.print(" TIME TO GET UP "); 
lcd.setCursor( 0, 1);
lcd.print("      NOW! ");
delay(1000);
lcd.clear();
delay(1000);
  tone(buzzerPin,27.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,29.135, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,30.868, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,32.703, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,34.65, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,36.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,38.89, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,41, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,43, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,46, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,49, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,52, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,55, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,58, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,62, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,65.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,69.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,73.4, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);
  
    tone(buzzerPin,77.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,82.4, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,87.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,92.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,98, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,103.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,110, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,116.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,123.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,130.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,138.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,146.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,155.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,164.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,174.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,185, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,196, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,207.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);
  
    tone(buzzerPin,220, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,233, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,247, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,261.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,277.1, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,293.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,311.1, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,329.62, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,349.23, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,370, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,392, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,415.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,440, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,466.2, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,493.9, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,523.25, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,554.4, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,587.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);
  
    tone(buzzerPin,622.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,659.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,698.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,740, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,784, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,830.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,880, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,932.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,987.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1046.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1108.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1174.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1244.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1318.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1396.9, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1479.89, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1567.9, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1661.2, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

  
    tone(buzzerPin,1760, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1864.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1975.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,2093, 1000);
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

        tone(buzzerPin,1975.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1864.4, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1760, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1661.2, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1568, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1480, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1397, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1318.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1244.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1174.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1108.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,1046.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,987.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,932.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,880, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,830.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,784, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,740, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);
  
    tone(buzzerPin,698.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,660.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,622.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,587.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,554.4, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,523.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,494, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,466.1, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,440, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,415.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,392, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,370, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,349.2, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,329.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,311.1, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,293.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,277.2, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,261.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);
  
    tone(buzzerPin,247, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,233, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,220, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,207.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,196, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,185, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,185, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,174.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,164.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,155.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,146.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,138.6, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,130.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,123.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,116.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,110, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,103.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,98, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);
  
    tone(buzzerPin,92.5, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,87.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,82.4, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,77.8, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,73.4, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,69.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,65.4, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,61.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,58.3, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,55, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,51.9, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,49, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,46.2, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,43.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,41.2, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,38.9, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,36.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,34.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

  
    tone(buzzerPin,32.7, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,30.9, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);

    tone(buzzerPin,29.1, 100);
  delay(100);
  noTone(buzzerPin);
  delay(100);
  
}
