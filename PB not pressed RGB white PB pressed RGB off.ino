int PushButton = 2; 
const int PIN_RED   = 5;
const int PIN_GREEN = 6;
const int PIN_BLUE  = 7;
void setup() {
  Serial.begin(9600);   //start serial connection
  pinMode(PushButton, INPUT_PULLUP);  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(PIN_RED,   OUTPUT); //configure PIN_RED as an Output 
  pinMode(PIN_GREEN, OUTPUT); //configure PIN_GREEN as an input 
  pinMode(PIN_BLUE,  OUTPUT); //configure PIN_BLUE as an input 
}

void loop() {
  int BinValue = digitalRead(PushButton);   //read the pushbutton value into a variable
  Serial.print(" BinValue = " ); // print out the line "BinValue = "
  Serial.println(BinValue);  //print out the value of the pushbutton
  if (BinValue == 1) // Condition for the if fuction 
  { digitalWrite(PIN_RED,   1); // the condition is true the RGB turn White 
  digitalWrite(PIN_GREEN, 1);
  digitalWrite(PIN_BLUE,  1);
  }
  else{ // if the condition is not true the RGB turn black 
  digitalWrite(PIN_RED,   0);
  digitalWrite(PIN_GREEN, 0);
  digitalWrite(PIN_BLUE,  0);  
  }
}
