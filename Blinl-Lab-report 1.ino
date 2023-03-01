void setup() {
  pinMode(13, OUTPUT); // initialize digital pin 13 as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, 1);  // turn the LED on (1 is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off (0 is voltage level low)
  delay(1000);                      // wait for a second
}
