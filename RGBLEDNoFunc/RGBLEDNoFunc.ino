/*
 * Remember to always have resistors in for the positive end. Much harder other way 
 */

int redPin = 9; 
int greenPin = 10; 
int bluePin = 11; 

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT); 
  pinMode(greenPin, OUTPUT); 
  pinMode(bluePin, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:

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
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0); 
  analogWrite(bluePin, 255); 

}
