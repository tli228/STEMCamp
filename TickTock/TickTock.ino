
#include <Servo.h> 

Servo motor; 
int motorPin = 9; 

void setup() 
{
  pinMode(motorPin, OUTPUT); 
  motor.attach(motorPin); 
}

void loop() 
{
  for (int i = 0; i < 60; i++)
  {
    motor.write(255); 
    delay(60000); 
  }
}
