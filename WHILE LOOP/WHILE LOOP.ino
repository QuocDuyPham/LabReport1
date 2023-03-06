
// C++ code
//
void setup()
{
Serial.begin(9600); 
}

void loop()
{
  int x = 0;
  while (x <=13){
  x++; 
 Serial.print( "X = ");
 Serial.println(x);
 pinMode(x, OUTPUT); }
  analogWrite( 1, 255);
  analogWrite(2, 0);
  analogWrite(3, 255);
  delay(500);
 analogWrite( 1, 0);
  analogWrite(2, 0);
  analogWrite (3, 0);
  delay(500);
   analogWrite( 4, 255 );
  analogWrite(5, 255 );
  analogWrite (6, 0 );
  delay(500);
    analogWrite( 4, 0 );
  analogWrite(5, 0);
  analogWrite (6, 0 );
  delay(500);
 analogWrite( 7, 255);
  analogWrite(8, 0);
 analogWrite( 9, 0);
delay(500);
 analogWrite( 7, 0);
  analogWrite(8, 0);
 analogWrite( 9, 0);
delay(500);
 analogWrite( 10, 0 );
  analogWrite(11, 0);
  analogWrite (12,255);
 delay(500);
  analogWrite( 10, 0 );
  analogWrite(11, 0);
  analogWrite (12, 0);
 delay(500);
}