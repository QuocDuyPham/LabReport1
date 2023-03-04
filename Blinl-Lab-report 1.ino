void setup() {
  pinMode(13, OUTPUT); // initialize digital pin 13 as an output.
}
void loop() {
  digitalWrite(13, 1);  // turn the LED on 
  delay(1000);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off
  delay(1000);                      // wait for a second
}
