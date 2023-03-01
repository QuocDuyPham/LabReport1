const int PIN_RED   = 5;
const int PIN_GREEN = 6;
const int PIN_BLUE  = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 // color code #ff0000 (255, 0, 0)
  analogWrite(PIN_RED,   255);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE,  0);

  delay(1500); // keep the color 1 second

  // color code #009933 (0, 153, 51)
  analogWrite(PIN_RED,   0);
  analogWrite(PIN_GREEN, 153);
  analogWrite(PIN_BLUE, 51);

  delay(1500); // keep the color 1 second

  // color code #0000ff(0, 0, 255)
  analogWrite(PIN_RED,   0);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE,  255);
  delay(1500); // keep the color 1 second
 
  // color code #cc00ff (204, 0, 255)
  analogWrite(PIN_RED,   204);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE,  255);


  delay(1500); // keep the color 1 second
}
