int ledPin1 = 2; 
int ledPin2 = 3; 
int ledPin3 = 4; 
int ledPin4 = 5; 
int ledPin5 = 6; 
int ledPin6 = 7; 
int ledPin7 = 8; 
int ledPin8 = 9; 
int ledPin9 = 10; 
int ledPin10 = 11; 
int ledPin11 = 12; 
int ledPin12 = 13; 

int buttonPin1 = A0;  //still gets a 0 and 1 value even if analog

int state1 = HIGH; 
int reading1; 
int prev1 = LOW; 

int count = 0; 

int buttonPin2 = A1; 

int state2 = HIGH; 
int reading2; 
int prev2 = LOW; 

int buttonPin3 = A2; 

int reading3; 

void setup() 
{
  pinMode(buttonPin1, INPUT_PULLUP); 
  pinMode(buttonPin2, INPUT_PULLUP); 
  pinMode(buttonPin3, INPUT_PULLUP); 
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT); 
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT); 
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT); 
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin11, OUTPUT); 
  pinMode(ledPin12, OUTPUT);

  Serial.begin(9600); 
}

void loop() 
{
  reading1 = digitalRead(buttonPin1); 
  
if (reading1 == HIGH && prev1 == LOW)
{  
  if (state1 == HIGH && count == 0)
  {
    count++;
    digitalWrite(ledPin1, HIGH); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 1)
  {
    count++;
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW); 
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2);

     if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 2)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
     
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 3)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW); 
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 4)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 5)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    state1 = LOW;
    reading2 = digitalRead(buttonPin2);  

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 6)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, HIGH); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);

    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 7)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, HIGH);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
  
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 8)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, HIGH); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 9)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, HIGH);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, LOW);
    
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 10)
  {
    count++; 
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, HIGH); 
    digitalWrite(ledPin12, LOW);
    
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
    }
  }
  else if (state1 == HIGH && count == 11) 
  {
    count = 0;
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW); 
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin9, LOW); 
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin11, LOW); 
    digitalWrite(ledPin12, HIGH);
    
    state1 = LOW; 
    reading2 = digitalRead(buttonPin2); 

    if (reading2 == HIGH && prev2 == LOW)
    { 
      if (state2 == HIGH)
      {
        for (int timeCount = 0; timeCount < 3600000; timeCount++)
        {
           delay(1);
           reading3 = digitalRead(buttonPin3); 

           if (reading3 == 0)
           {
            timeCount = 3600000; 
           }
        }
        state2 = LOW; 
      }
      else
      {
        state2 = HIGH; 
      }
  }
   state1 = HIGH;
 }

 prev1 = reading1;
 prev2 = reading2;  
}
}
