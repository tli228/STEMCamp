/*
 * Only one side needs to be breadboarded. The upper lead has to have a resistor going to 5v
 * and then a signal wire going to 3. Then the lower lead is grounded. 
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
