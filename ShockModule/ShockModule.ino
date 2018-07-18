int shockPin = 10; // Use Pin 10 as our Input
int buzzerPin = 3; 

int shockVal = HIGH; // This is where we record our shock measurement
boolean bAlarm = false;

unsigned long lastShockTime; // Record the time that we measured a shock

int shockAlarmTime = 250; // Number of milli seconds to keep the shock alarm high

void setup ()
{
  Serial.begin(9600);  
  pinMode (shockPin, INPUT) ; // input from the KY-002
}
void loop ()
{
  shockVal = digitalRead (shockPin) ; // read the value from our sensor
  
  if (shockVal == LOW) // If we're in an alarm state
  {
    lastShockTime = millis(); // record the time of the shock
    // The following is so you don't scroll on the output screen
    if (!bAlarm){
      Serial.println("Shock Alarm");
      tone(buzzerPin, 500, 500); 
      bAlarm = true;
    }
  }
  else
  {
    if( (millis()-lastShockTime) > shockAlarmTime  &&  bAlarm){
      Serial.println("no alarm");
      bAlarm = false;
    }
  }
}
