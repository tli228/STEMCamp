int buzzerPin = 9; 

//700 is 1, 200 is 0
//0.5 seconds between digits 
//1 second between letters
//3 seconds between words 

void setup() 
{
  pinMode(buzzerPin, OUTPUT); 

  tone(buzzerPin, 700, 500); //F
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  
  delay(3000); 
  
  tone(buzzerPin, 700, 500); //A
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  
  delay(3000);
  
  tone(buzzerPin, 700, 500); //V
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  
  delay(3000);
  
  tone(buzzerPin, 700, 500); //S
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  
  delay(3000);

  tone(buzzerPin, 700, 500); //H
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  
  delay(3000);

  tone(buzzerPin, 700, 500); //O
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(3000);

  tone(buzzerPin, 700, 500); //W
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500);  
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 200, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 
  tone(buzzerPin, 700, 500);
  delay(500); 
  noTone(buzzerPin); 
  delay(500); 

  //end
  tone(buzzerPin, 800, 500); 
  delay(500);
  tone(buzzerPin, 900, 500); 
  delay(500); 
  tone(buzzerPin, 1000, 500); 
  delay(500); 
  noTone(buzzerPin); 
}

void loop() 
{
//  tone(buzzerPin, 700, 500); //F
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  
//  delay(3000); 
//  
//  tone(buzzerPin, 700, 500); //A
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  
//  delay(3000);
//  
//  tone(buzzerPin, 700, 500); //V
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  
//  delay(3000);
//  
//  tone(buzzerPin, 700, 500); //S
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  
//  delay(3000);
//
//  tone(buzzerPin, 700, 500); //H
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  
//  delay(3000);
//
//  tone(buzzerPin, 700, 500); //O
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(3000);
//
//  tone(buzzerPin, 700, 500); //W
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500);  
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 200, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(500); 
//  tone(buzzerPin, 700, 500);
//  delay(500); 
//  noTone(buzzerPin); 
//  delay(3000); 
}
