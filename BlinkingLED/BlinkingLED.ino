int LEDpin = 2; 
int count = 0;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600); 
}

void loop() 
{
  // put your main code here, to run repeatedly:

  if (count <= 5) 
  { 
    digitalWrite(LEDpin, HIGH); 
    delay(1000); 
    digitalWrite(LEDpin, LOW); 
    delay(1000); 
  }

  Serial.print("Hi"); 
  count = count + 1; 
}
