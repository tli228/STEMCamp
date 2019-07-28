int sensorPin = A0;    
int sensorValue = 0;  
int a=0;
int buttonPin=12;
int Highbuzzer = 9; 
int buttonPushCounter = 0;  
int buttonState = 0;     
int lastButtonState = 0; 
void setup() {
  Serial.begin(9600);
  pinMode(Highbuzzer, OUTPUT);
  pinMode(buttonPin, INPUT);
}
 
void loop() {
  Serial.println(sensorValue);
  Serial.print(" ");
  buttonState = digitalRead(buttonPin);
  sensorValue = analogRead(sensorPin);
  //Serial.println(buttonState);
  //Serial.println(buttonPushCounter);
  //Serial.println(lastButtonState);
if(buttonState==HIGH){
noTone(Highbuzzer);
  }
  if(buttonState==LOW){
    tone(Highbuzzer,sensorValue);
    buttonPushCounter=0;
  }
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      buttonPushCounter++;
      //Serial.println(buttonPushCounter);
    } else {

    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
lastButtonState = buttonState;
  if (buttonPushCounter % 2 == 0) {
    digitalWrite(Highbuzzer, HIGH);
  } else {
    digitalWrite(Highbuzzer, LOW);
  }
}
