int PushButton = 2; 
int LED = 13;
void setup() {
  Serial.begin(9600);   //start serial connection
  pinMode(PushButton, INPUT_PULLUP);  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(LED, OUTPUT);
}

void loop() {
  int BinValue = digitalRead(PushButton);   //read the pushbutton value into a variable
  Serial.print(" BinValue = " ); // print out the line "BinValue = "
  Serial.println(BinValue);  //print out the value of the pushbutton
if (BinValue==1){
  digitalWrite (LED, HIGH);
}
else {
  digitalWrite (LED, LOW);
}
}
