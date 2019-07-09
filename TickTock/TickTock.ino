int ledPin1 = 2; 
int ledPin2 = 3; 
int ledPin3 = 4; 
int ledPin4 = 5; 
int ledPin5 = 6; 
int ledPin6 = 7; 
int ledPin7 = 8; 
int ledPin8 = 9; 
int ledPin9 = 10; 
int ledPin10 = 11; 
int ledPin11 = 12; 
int ledPin12 = 13; 

int buttonPin = A0;  //still gets a 0 and 1 value even if analog

int state = HIGH; 
int reading; 
int prev = LOW; 

int count = 0; 

int timeCount = 1000; 

void setup() 
{
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT); 
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT); 
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT); 
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin11, OUTPUT); 
  pinMode(ledPin12, OUTPUT);

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
    digitalWrite(ledPin1, HIGH); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 1)
  {
    count++;
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW); 
    state = LOW; 
  }
  else if (state == HIGH && count == 2)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 3)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 4)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 5)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 6)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, HIGH); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 7)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, HIGH);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 8)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, HIGH); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 9)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, HIGH);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 10)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, HIGH); 
    digitalWrite(ledPin12, LOW);
    state = LOW; 
  }
  else if (state == HIGH && count == 11) 
  {
    count = 0;
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, HIGH);
    state = LOW; 
  }
   state = HIGH;
 }

 prev = reading; 
}
