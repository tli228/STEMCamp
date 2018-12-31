int buzzerPin = 9; 

void setup() 
{
  pinMode(buzzerPin, OUTPUT); 
}

void loop() 
{
  tone(buzzerPin, 700, 500); 
  delay(1000); 
  noTone(buzzerPin); 
  delay(1000); 
}
