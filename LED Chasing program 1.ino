
void setup() {
  pinMode(13, OUTPUT); // initialize pin 13 as output.
  pinMode(12, OUTPUT); // initialize pin 12 as output.
  pinMode(11, OUTPUT); // initialize pin 11 as output.
  pinMode(10, OUTPUT); // initialize pin 10 as output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on by making the voltage High
  digitalWrite(12, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(11, LOW);   // turn the LED off
  digitalWrite(10, LOW);   // turn the LED off
  delay(50);                      // wait for 0.05 second
  digitalWrite(13, LOW);  // turn the LED off
  digitalWrite(12, HIGH);  // turn the LED on
  digitalWrite(11, LOW);   // turn the LED off 
  digitalWrite(10, LOW);   // turn the LED off 
  delay(50);                      // wait for 0.05 second
  digitalWrite(13, LOW);   // turn the LED off
  digitalWrite(12, LOW);   // turn the LED off 
  digitalWrite(11, HIGH);  // turn the LED on 
  digitalWrite(10, LOW);   // turn the LED off 
  delay(50);                      //  wait for 0.05 second
  digitalWrite(13, LOW);  // turn the LED off 
  digitalWrite(12, LOW);  // turn the LED off
  digitalWrite(11, LOW);  // turn the LED off 
  digitalWrite(10, HIGH); // turn the LED ON 
  delay(50);                      // wait for 0.05 second
}   
