int buttonPin = 12; 
int buzzerPin = 11; 

int buttonState = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT); 
  pinMode(buzzerPin, OUTPUT); 

  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(buttonPin); 

  Serial.println(buttonState); 

  if (buttonState == 1) 
  {
    tone(buzzerPin, 700, 500); 
  }
  else
  {
    noTone(buzzerPin); 
  }
}
