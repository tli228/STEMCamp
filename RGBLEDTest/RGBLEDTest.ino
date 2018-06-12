/*
 * All of the LED pins have to be analog 
 * 
 * RGB LED were in the sparkfun kit 
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
  setColor(255, 0, 0); // red
  delay(500);
  setColor(255, 130, 0); // orange
  delay(500);
  setColor(255, 255, 0); // yellow
  delay(500);
  setColor(0, 255, 0); // green
  delay(500);
  setColor(0, 242, 255); // light blue 
  delay(500);
  setColor(0, 0, 255); // blue 
  delay(500);
  setColor(55, 0, 255); // indiago 
  delay(500); 
  setColor(113, 0, 255); // purple
  delay(500); 
  setColor(242, 0, 255); // pink
  delay(500); 
  setColor(255, 0, 83); // pinkish red
  delay(500); 
}
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

