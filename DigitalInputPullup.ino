int PushButton = 7; // initialize digital pin 7 as an Input
int LED = 13; // initialize digital pin 13 as the LED.
void setup() {
  Serial.begin(9600);   //start serial connection
  pinMode(PushButton, INPUT_PULLUP);  //configure pin 7 as an input and enable the internal pull-up resistor
  pinMode(LED, OUTPUT); // /configure LED as an output
}

void loop() {
  int BinValue = digitalRead(PushButton);   //read the pushbutton value into a variable
  Serial.print(" BinValue = " ); // print out the line "BinValue = "
  Serial.println(BinValue);  //print out the value of the pushbutton
if (BinValue==1){ // To set the condition for the "if" the condition is the BinValue equal to 1 
  digitalWrite (LED, HIGH); // Action when the value of the input is 1 the LED turn on 
}
else {
  digitalWrite (LED, LOW);// Action when the value of the input is not 1 LED turn off
}
  
}
