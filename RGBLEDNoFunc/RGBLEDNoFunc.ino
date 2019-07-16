/*
 * Remember to always have resistors in for the positive end. Much harder other way 
 */

int redPin = 9; 
int greenPin = 10; 
int bluePin = 11; 

void setup() 
{
  pinMode(redPin, OUTPUT); 
  pinMode(greenPin, OUTPUT); 
  pinMode(bluePin, OUTPUT); 
}

void loop() 
{
  //red
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0); 
  analogWrite(bluePin, 0); 

  delay(1000); 
  
  //orange 
  analogWrite(redPin, 255);
  analogWrite(greenPin, 20); 
  analogWrite(bluePin, 0); 

  delay(1000);

  //yellow 
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255); 
  analogWrite(bluePin, 0); 

  delay(1000);

  //green 
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255); 
  analogWrite(bluePin, 0); 

  delay(1000);

  //blue 
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0); 
  analogWrite(bluePin, 255); 

  delay(1000);

  //purple 
  analogWrite(redPin, 160);
  analogWrite(greenPin, 32); 
  analogWrite(bluePin, 240); 

  delay(1000);
}
