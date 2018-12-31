int LEDpin = 2; 

void setup() 
{
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600); 
}

void loop() 
{
    digitalWrite(LEDpin, HIGH); 
    delay(1000); 
    digitalWrite(LEDpin, LOW); 
    delay(1000); 
}
