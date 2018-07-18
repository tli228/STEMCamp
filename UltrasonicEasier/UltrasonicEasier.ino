int trigPin = 9;  //pwm
int echoPin = 10; //pwm

long duration = 0; 
int distance = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 

  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, LOW);
  delay(1); 

  digitalWrite(trigPin, HIGH); 
  delay(1); 
  digitalWrite(trigPin, LOW); 

  duration = pulseIn(echoPin, HIGH); 

  distance = duration * 0.034/2; 

  Serial.print("Distance: "); 
  Serial.println(distance);
  
}
