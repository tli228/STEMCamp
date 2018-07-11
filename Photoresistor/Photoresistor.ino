/* 
 *  Photoresistor Module: Starting from S, signal to A0, ground, power 
 *    (for some reason opposite with LED, light on when there is light, light off when there is no light 
 *  Photoresistor: Positive end by itself, negative end has signal to A0 and a resistor. Other end of 
 *    resistor goes to ground 
 *  
 *  Code works for both Module and no Module 
 *  
 *  Works without code too with an LED, change signal to LED pin 
 */

int sensorPin = A0;   // select the analog input pin for the photoresistor
int threshold = 300;  // analog input trigger level from photoresistor
int sensorValue = 0;  // photoresistor value read from analog input pin

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT); // built-in LED, usually on pin 13
}

void loop() 
{
  if (analogRead(sensorPin) < threshold) 
  {
    // low light, so switch the light (LED) on
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else 
  {
    // light level high enough, so switch the light (LED) off
    digitalWrite(LED_BUILTIN, LOW);
  }
  // wait for ADC to settle before next reading
  delay(20);
}
