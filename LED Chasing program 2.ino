void setup() {
  pinMode(13, OUTPUT);  // initialize pin 13 as output.
  pinMode(12, OUTPUT);  // initialize pin 12 as output.
  pinMode(11, OUTPUT);  // initialize pin 11 as output.
  pinMode(10, OUTPUT);  // initialize pin 10 as output.
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, 1); // Turn on the LED 13 
delay (100);   // wait for a second
digitalWrite(13,0); // Turn off the LED 13
delay (100);  // wait for a second
digitalWrite(12, 1); // Turn on the LED 12
delay (100);  // wait for a second
digitalWrite(12,0); // Turn off the LED 12
delay (100);   // wait for a second
digitalWrite(11, 1); // Turn on the LED 11
delay (100);  // wait for a second
digitalWrite(11,0); // Turn off the LED 11
delay (100);  // wait for a second
digitalWrite(10, 1); // Turn on the LED 10
delay (100);  // wait for a second
digitalWrite(10,0); // Turn off the LED 10
delay (100);  // wait for a second
}
