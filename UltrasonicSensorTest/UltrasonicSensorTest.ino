const int trigPin = 9; //analog pin 
const int echoPin = 10; //analog pin 
const int ledPin = 7; //digital pin 
/* 
 *  buzzer is missing cause I couldn't play with it. 
 *  It would be hooked up to a digital pin cause digital pins are just high and low
 */

 long duration; 
 int distance; 

void setup() 
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT); 

  Serial.begin(9600); 
}

void loop() 
{
  //Clears the trigPin 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 

  //Sets the trigPin on HIGH state for 10 micro seconds for it to detect its surroundings 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);          
  digitalWrite(trigPin, LOW); 

  //Reads the echoPin, returns the sound wave travel time in microseconds 
  duration = pulseIn(echoPin, HIGH); 

  //Calculating the distance in cm 
  distance = duration * 0.034/2; 

  //This is for buzzer or LED to signal that the blind person is too close to something
  if (distance < 20) 
  {
    digitalWrite(ledPin, HIGH); 
  }
  else 
  {
    digitalWrite(ledPin, LOW); 
  }

  //Prints the distance on the Serial Monitor 
  Serial.print("Distance: "); 
  Serial.println(distance); 
}
