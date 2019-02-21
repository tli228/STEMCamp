/*
 * Toggle of Three Way Button Works 
 */

int ledPin = 5; 
int ledPin2 = 7; 

int buttonPin = 12; 
int state = HIGH; 
int reading; 
int prev = LOW; 

int count = 0; 

void setup() 
{
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 

  Serial.begin(9600); 
}

void loop() 
{
  reading = digitalRead(buttonPin); 

  Serial.println(reading); 
  
if (reading == HIGH && prev == LOW)
{
  if (state == HIGH && count == 0)
  {
    count++;
    digitalWrite(ledPin, HIGH); 
    digitalWrite(ledPin2, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 1)
  {
    count++;
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, HIGH); 
    state = LOW; 
  }
  else if (state == HIGH && count == 2)
  {
    count++; 
    digitalWrite(ledPin, HIGH); 
    digitalWrite(ledPin2, HIGH);
    state = LOW; 
  }
  else if (state == HIGH && count == 3) 
  {
    count = 0;
    digitalWrite(ledPin, LOW); 
    digitalWrite(ledPin2, LOW);
    state = LOW; 
  }
   state = HIGH;
 }

 prev = reading; 
}
