int B = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone (B, 783.99, 322);
  delay(322);
  
  noTone(B);
  tone (B, 698.46, 161);
  delay(161);
  noTone(B);
  tone (B, 622.25, 161);
  delay(161);
  noTone(B);
  tone (B, 587.37, 161);
  delay(161);
  noTone(B);
  tone (B, 466.61, 161);
  delay(161);
  noTone(B);
  tone (B, 392, 322);
  delay(322);
  noTone(B);
  tone (B, 523.25, 161);
  delay(161);
  noTone(B);
  tone (B, 587.33, 161);
  delay(161);
  noTone(B);
  tone (B, 622.25, 161);
  delay(162);
  noTone(B);
  tone (B, 698.46, 161);
  delay(161);
  noTone(B);
  tone (B, 587.33, 645);
  delay(645);
   tone (B, 1046.50, 645);
  delay(645);
  noTone(B);
   tone (B, 783.99, 645);
  delay(645);
  noTone(B);
  
}
