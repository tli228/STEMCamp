/*
  SparkFun Inventor’s Kit
  Circuit 4A-HelloWorld

  The LCD will display the words "Hello World" and show how many seconds have passed since
  the RedBoard was last reset.

  This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
  This code is completely free for any use.

  View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v40
  Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPinNo = 7;     // the number of the pushbutton pin
const int buttonPinYes = 8;        // the number of the LED pin
int T = 3000;
int Third = 0;
int second = 0;
int special = 0;
// variables will change:
int buttonStateYes = 0;         // variable for reading the pushbutton status
int buttonStateNo = 0;

#include <LiquidCrystal.h>          //the liquid crystal libarry contains commands for printing to the display
int X = 1;
int First = 0;
int Second = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   // tell the RedBoard what pins are connected to the display

void setup() {

  lcd.begin(16,2);
  lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
  lcd.print("The Mysterous");       //print hello, world! starting at that position
            //mvoe the cursor to the first space of the bottom row
  // read the state of the pushbutton value:
  // initialize the LED pin as an output:
 lcd.setCursor(0, 1);
 lcd.print("House");
  // initialize the pushbutton pin as an input:
  pinMode(buttonPinYes, INPUT_PULLUP);
  pinMode(buttonPinNo, INPUT_PULLUP);
  delay(T);
}


void loop() {
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("The Mysterous");       //print hello, world! starting at that position
            //mvoe the cursor to the first space of the bottom row
  // read the state of the pushbutton value:
  // initialize the LED pin as an output:
  lcd.setCursor(0, 1);
  lcd.print("House");
  lcd.clear();
  delay(2000);
  lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
  lcd.print("Y:Enter Through");       //print hello, world! starting at that position
  lcd.setCursor(0, 1);
            //set the cursor to the 0,0 position (top left corner)
  lcd.print("The Door");       //print hello, world! starting at that position
  //mvoe the cursor to the first space of the bottom row
  // read the state of the pushbutton value:
  delay(T);
  lcd.clear();
  lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
  lcd.print("N:Climb On");       //print hello, world! starting at that position
  lcd.setCursor(0, 1);
                //set the cursor to the 0,0 position (top left corner)
  lcd.print("The Roof");
  delay(T); 
  buttonStateYes = digitalRead(buttonPinYes);
  buttonStateNo = digitalRead(buttonPinNo);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if(buttonStateYes == 0) {
    // turn LED on:
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("You Entered");       //print hello, world! starting at that position

    lcd.setCursor(0, 1);
    lcd.print("The Door");
    delay(T);
    First = 0;
  }
  else if (buttonStateNo == 0) 
  {
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("You Climbed");       //print hello, world! starting at that position
    lcd.setCursor(0, 1);
    lcd.print("And Died");
    delay(T);
    First = 1;

  }
  if(First == 1) 
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Game Over");
    delay(T);
  }
  else if (X = 1)
  {
  lcd.clear();
  lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
  lcd.print("Y:Climb The");       //print hello, world! starting at that position
  lcd.setCursor(0, 1);
            //set the cursor to the 0,0 position (top left corner)
  lcd.print("Stairs");       //print hello, world! starting at that position
  //mvoe the cursor to the first space of the bottom row
  // read the state of the pushbutton value:
  }
  delay(T);
  lcd.clear();
  lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
  lcd.print("N:Explore The");       //print hello, world! starting at that position
  lcd.setCursor(0, 1);
                //set the cursor to the 0,0 position (top left corner)
  lcd.print("1st Floor");
  delay(T); 
    buttonStateYes = digitalRead(buttonPinYes);
  buttonStateNo = digitalRead(buttonPinNo);
   if(buttonStateYes == 0) {
    // turn LED on:
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("You Fell Through");       //print hello, world! starting at that position

    lcd.setCursor(0, 1);
    lcd.print("The Stairs");
    delay(T);
    Second=1;
  }
  else if (buttonStateNo == 0) 
  {
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("You Chose");       //print hello, world! starting at that position

    lcd.setCursor(0, 1);
    lcd.print("To Explore");
    delay(T);
    

  }
  if(Second == 1)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Game Over");
    delay(T);
  }
  else if (X == 1)
  {
  
  lcd.clear();
  lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
  lcd.print("Y:Go to the");       //print hello, world! starting at that position
  lcd.setCursor(0, 1);
            //set the cursor to the 0,0 position (top left corner)
  lcd.print("Kitchen");       //print hello, world! starting at that position
  //mvoe the cursor to the first space of the bottom row
  // read the state of the pushbutton value:
  }
  delay(T);
  lcd.clear();
  lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
  lcd.print("N:Go To The ");       //print hello, world! starting at that position
  lcd.setCursor(0, 1);
                //set the cursor to the 0,0 position (top left corner)
  lcd.print("Living Room");
  delay(T); 
    buttonStateYes = digitalRead(buttonPinYes);
  buttonStateNo = digitalRead(buttonPinNo);
   if(buttonStateYes == 0) {
    // turn LED on:
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("You Entered Kitchen");       //print hello, world! starting at that position

    lcd.setCursor(0, 1);
    lcd.print("And Fell Through");
    delay(2000);
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("The Floor Into"); 
    lcd.setCursor(0, 1);
    lcd.print("The Mouth of A");
    delay(2000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Toothed Beast");
    delay(T);
    Third=1;
  }
  else if (buttonStateNo == 0) 
  {
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("You Chose");       //print hello, world! starting at that position

    lcd.setCursor(0, 1);
    lcd.print("The Living Room");
    delay(T);}
     if(Third == 1) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Game Over");
    delay(T);
  }
  else if (X == 1) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("You found A lot");
    lcd.setCursor(0,1);
    lcd.print("Of Gold And");
    delay(2000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Escaped The");
    lcd.setCursor(0,1);
    lcd.print("House");
    delay(5000);
    buttonStateYes = digitalRead(buttonPinYes);
    X = 0;
    second = 0;
if(buttonStateYes == 0) {
    // turn LED on:
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("A towering");       //print hello, world! starting at that position

    lcd.setCursor(0, 1);
    lcd.print("squid creature");
    delay(2000);
    lcd.clear();
    //lcd.begin(16,2);
    lcd.setCursor(0, 0);              //set the cursor to the 0,0 position (top left corner)
    lcd.print("hisses at you"); 
    lcd.setCursor(0, 1);
    lcd.print("and vanishes");
    delay(T);
    if (special == 1) {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("A dark force");
      lcd.setCursor(0,1);
      lcd.print("summons you");
      delay(2000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("to a palace");
      lcd.setCursor(0,1);
      lcd.print("within the sea");
      delay(2000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Cthulu reveals");
      lcd.setCursor(0,1);
      lcd.print("himself to you");
      delay(2000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("He has decided");
      lcd.setCursor(0,1);
      lcd.print("to make you a");
      delay(2000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("prince/princess");
      lcd.setCursor(0,1);
      lcd.print("of twilight.");
      delay(2000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Even more");
      lcd.setCursor(0,1);
      lcd.print("secret ending");
      delay(2000);
    }
    special = 1;
    }
  }
}
