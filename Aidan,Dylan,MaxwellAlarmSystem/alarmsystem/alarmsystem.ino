int buzzerPin = 9;
int lightPin1 = 4;
int lightPin2 = 5;
int lightPin3 = 6;
int lightPin4 = 7;
int buttonPin = 10;
int buttonState = 0;
int trigPin = 11;
int echoPin = 3;
long duration = 0;
long distance = 0;
bool alarm = false;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(lightPin1, OUTPUT);
  pinMode(lightPin2, OUTPUT);
  pinMode(lightPin3, OUTPUT);
  pinMode(lightPin4, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  digitalWrite(trigPin, HIGH);
  delay(1);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance=(duration * 0.034)/2;
  Serial.println(distance);
  if (distance < 100 ) {
    alarm = true;
    while (alarm = true) {
      digitalWrite(lightPin1, HIGH);
      digitalWrite(lightPin2, HIGH);
      digitalWrite(lightPin3, HIGH);
      digitalWrite(lightPin4, HIGH);
      tone(buzzerPin, 7902, 75);
      delay(75);
      digitalWrite(lightPin1, LOW);
      digitalWrite(lightPin2, LOW);
      digitalWrite(lightPin3, LOW);
      digitalWrite(lightPin4, LOW);
      noTone(buzzerPin);
      delay(75);
      tone(buzzerPin, 3951, 100);
      delay(100);
      noTone(buzzerPin);
      delay(100);
      digitalWrite(lightPin1, LOW);
      digitalWrite(lightPin2, LOW);
      digitalWrite(lightPin3, LOW);
      digitalWrite(lightPin4, LOW);
      noTone(buzzerPin);
    }
  }

}
