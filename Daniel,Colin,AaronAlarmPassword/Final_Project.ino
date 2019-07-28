#include <LiquidCrystal.h>
const int pingPin = 6;
const int echoPin = 9;
int code1 = 6;
int code2 = 6;
int code3 = 6;
int code4 = 6;

int guess1; 
int guess2;
int guess3;
int guess4;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
int potPin = 1;
int value = 0;
int cursor1 = 6;
const int selectorButton = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int buzzer = 10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Running");
  pinMode(selectorButton, INPUT);
}
long oldCm = 0;
long cm = 0;
void loop() {
   value = analogRead(potPin);
  // put your main code here, to run repeatedly:
  long duration, inches;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(20);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(100);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   oldCm = cm;
   cm = microsecondsToCentimeters(duration);
   lcd.setCursor(cursor1, 0);
    Serial.println(value);
    if(digitalRead(selectorButton) == LOW) {
      delay(1000);
       for(int i = 0; i < 4; i) {
         if(digitalRead(selectorButton) == LOW) {
          
          if(i == 0) {
            guess1 = analogRead(potPin) / 100; 
            Serial.print(guess1);
            if(guess1 != code1) {
              tone(buzzer, 783.00, 800);
            } else {
             // tone(buzzer, 2000, 8000);
            }
          }
          if(i == 1) {
            guess2 = analogRead(potPin) / 100; 
            if(guess2 != code2) {
              tone(buzzer, 783.00, 800);
            } else {
             // exit(1);
            }
          }
          if(i == 2) {
            guess3 = analogRead(potPin) / 100; 
            if(guess3 != code3) {
              tone(buzzer, 783.00, 800);
            } else {
             // exit(1);
            }
          }
          if(i == 3) {
            guess4 = analogRead(potPin) / 100; 
            if(guess4 != code4) {
              tone(buzzer, 783.00, 800);
            } else {
              lcd.print(analogRead(potPin) / 100);
          lcd.display();
              exit(1);
            }
          }
          cursor1++;
          lcd.print(analogRead(potPin) / 100);
          lcd.display();
          lcd.setCursor(cursor1, 0);
          i++;
       }
       delay(100);
    }
   
    }
   cursor1 = 6;
   lcd.display();
   delay(100);
   if(oldCm - cm > 5) {
    lcd.clear();
    lcd.setCursor(4,0);
    lcd.print("Warning!");
    lcd.setCursor(0,2);
    lcd.print("Distance: ");
    lcd.print(cm);
    lcd.print(" cm. ");
    lcd.display();
    tone(buzzer, 783.00 , 800);
    delay(250);
    tone(buzzer, 500, 300);
    delay(250);
    tone(buzzer, 783.00, 800);
    delay(250);
    tone(buzzer, 500, 300);
    delay(1000);
   } else {
    lcd.clear();    
  }
   delay(100);
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
