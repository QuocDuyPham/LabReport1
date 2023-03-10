int PushButton = 13;
const int PIN_RED   = 10;
const int PIN_GREEN = 11;
const int PIN_BLUE  = 12;
void setup() {
  Serial.begin(9600);   //start serial connection
  pinMode(PushButton, INPUT_PULLUP);  //configure pin 13 as an input and enable the internal pull-up resistor
  pinMode(PIN_RED,   OUTPUT); //configure PIN_RED as an Output 
  pinMode(PIN_GREEN, OUTPUT); //configure PIN_GREEN as an input 
  pinMode(PIN_BLUE,  OUTPUT); //configure PIN_BLUE as an input 
}

void loop() {
  int BinValue = digitalRead(PushButton);   //read the pushbutton value into a variable
  Serial.print(" BinValue = " ); // print out the line "BinValue = "
  Serial.println(BinValue);  //print out the value of the pushbutton
  if (BinValue == 0) // condition for " if " fuction 
  // RGB turn yellow
  { analogWrite(PIN_RED,   255); // when  the condition is statisfied the PIN_RED turn on
  analogWrite(PIN_GREEN, 255); // when  the condition is statisfied the PIN_GREEN turn on
  analogWrite(PIN_BLUE,  0); // when  the condition is statisfied the PIN_BLUE turn OFF
  }
  else{ // when the condition for the if fuction is not statisfied (RGB turn PINK)
  analogWrite(PIN_RED,   255); // turn on PIN_RED
  analogWrite(PIN_GREEN, 0); // Turn off PIN_GREEN
  analogWrite(PIN_BLUE,  255); // Turn on PIN_BLUE
  }
}
