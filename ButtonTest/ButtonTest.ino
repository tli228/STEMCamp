/*
 * The button I tested wasn't that responsive for some reason. 
 * Also, the ground and power are on opposite sides of the button.
 * 
 */

const int buttonPin = 2;
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
