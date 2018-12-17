int speakerPin = 5;
int treeLED = 2; 
int redPin = 11; 
int greenPin = 10; 
int bluePin = 9; 
int length = 26;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int beats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

int tempo = 300;
void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}
void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1965, 1750, 1569, 1482, 1325, 1186, 1064, 1006 }; //int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}
void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode(treeLED, OUTPUT); 
}
void loop() {
  for (int i = 0; i < length; i++) 
  {
    if (notes[i] == ' ') 
    {
      delay(beats[i] * tempo); // rest
      
      analogWrite(redPin, 0);
      analogWrite(greenPin, 0); 
      analogWrite(bluePin, 0); 

      digitalWrite(treeLED, LOW); 
    } 
    else 
    {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 255); 
      analogWrite(bluePin, 255); 

      digitalWrite(treeLED, HIGH); 
      
      playNote(notes[i], beats[i] * tempo);
    }
    
    // pause between notes
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0); 
    analogWrite(bluePin, 0); 

    digitalWrite(treeLED, LOW); 
    delay(tempo / 2); 
  }
}
