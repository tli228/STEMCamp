/*
 * Testing GIANT RGB LED
 */

int red = 9; 
int green = 10; 
int blue = 11; 

void setup() 
{
  pinMode(red, OUTPUT); 
  pinMode(green, OUTPUT); 
  pinMode(blue, OUTPUT); 
}

void loop() 
{
  analogWrite(red, 255);
  analogWrite(green, 0); 
  analogWrite(blue, 0);

  delay(1000); 

  analogWrite(red, 0);
  analogWrite(green, 0); 
  analogWrite(blue, 0);

  delay(1000); 

  analogWrite(red, 0);
  analogWrite(green, 255); 
  analogWrite(blue, 0);

  delay(1000); 

  analogWrite(red, 0);
  analogWrite(green, 0); 
  analogWrite(blue, 0);

  delay(1000); 

  analogWrite(red, 0);
  analogWrite(green, 0); 
  analogWrite(blue, 255);

  delay(1000); 
}
