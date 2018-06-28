/*
 * Only one side needs to be breadboarded. The lower lead is for power of 5v and the upper lead is the signal pin for whatever
 * component it controls. 
 * 
 */

const int buttonPin = 3;
int buttonState = 0; 

void setup() 
{
  pinMode(buttonPin, INPUT); 

  Serial.begin(9600); 
}

void loop() 
{
  buttonState = digitalRead(buttonPin); 
  
  Serial.println(buttonState); 
}
