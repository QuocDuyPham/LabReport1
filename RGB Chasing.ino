const int PIN_RED   = 10; // initialize digital pin 10 as PIN_RED.
const int PIN_GREEN = 11; // initialize digital pin 11 as PIN_GREEN.
const int PIN_BLUE  = 12; // initialize digital pin 12 as PIN_BLUE.
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_RED,   OUTPUT); // configure PIN_RED as an OUTPUT
  pinMode(PIN_GREEN, OUTPUT); //  configure PIN_RED as an OUTPUT
  pinMode(PIN_BLUE,  OUTPUT); // configure PIN_RED as an OUTPUT
}

void loop() {
  // Using analogWrite to have more chose of color becasue it can write value from 0-255
  analogWrite(PIN_RED,   255); // use analogWrite to turn on PIN_RED 
  analogWrite(PIN_GREEN, 0); // PIN_GREEN OFF
  analogWrite(PIN_BLUE,  0); // PIN_BLUE OFF (RGB TURN RED)
  delay(1500); // keep the color 1 second
  
  // RGB turn Green 
  analogWrite(PIN_RED,   0); // PIN_RED OFF
  analogWrite(PIN_GREEN, 255); // PIN_GREEN turn on 
  analogWrite(PIN_BLUE, 0); // PIN_BLUE OFF
  delay(1500); // keep the color 1 second
  
  // RGB turn Blue 
  analogWrite(PIN_RED,   0); 
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE,  255);
  delay(1500); // keep the color 1 second
 
  // RGB turn Yellow
  analogWrite(PIN_RED,   255); // 
  analogWrite(PIN_GREEN, 255);
  analogWrite(PIN_BLUE,  0);
  delay(1500); // keep the color 1 second
}
