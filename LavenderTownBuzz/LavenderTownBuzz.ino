int melodyPin = 3; 
int bassPin = 5;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(melodyPin, OUTPUT); 
  pinMode(bassPin, OUTPUT); 
}

void loop() 
{
  // put your main code here, to run repeatedly:

/* for (int count = 0; i <= 3; i++)
 {
  tone(buzzPin, 1046.5, 300); //C6
  delay(900); 
  tone(buzzPin, 1567.98, 300); //G6
  delay(900); 
  tone(buzzPin, 2093.00, 300); //C7
  delay(900); 
  tone(buzzPin, 1479.98, 300); //F#6
  delay(800);
 }*/

  tone(melodyPin, 1046.5, 200); //C6
  //G5
  //E5
  delay(500); 
  tone(melodyPin, 1567.98, 200); //G6
  delay(500); 
  tone(melodyPin, 2093.00, 200); //C7
  delay(500); 
  tone(melodyPin, 1479.98, 200); //F#6
  delay(500);
}
