int PushButton = 7; // initialize digital pin 7 as an Input
void setup() {
  Serial.begin(9600);   //start serial monitor
  pinMode(PushButton, INPUT_PULLUP);  //configure pin 7 as an input and enable the internal pull-up resistor
}

void loop() {
  int BinValue = digitalRead(PushButton);   //read the pushbutton value into a variable
  Serial.print(" BinValue = " ); // print out the line "BinValue = "
  Serial.println(BinValue);  //print out the value of the pushbutton
} 