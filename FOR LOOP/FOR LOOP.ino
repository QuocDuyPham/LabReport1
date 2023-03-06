void setup()
{
Serial.begin(9600);
}

void loop(){
  for(int i = 0; i <= 13; i++){
 pinMode(i , OUTPUT);
    Serial.println(i);
    delay(50);}
  digitalWrite(10, HIGH);
  delay(500);
digitalWrite(10, LOW);
  delay(500);  
  digitalWrite(11, HIGH);
      delay(500);  
 digitalWrite(11, LOW); 
    delay(500);   
  digitalWrite(12, HIGH);
     delay(500); 
     digitalWrite(12, LOW);
      delay(500);  
    digitalWrite(13, HIGH);
     delay(500); 
    digitalWrite(13, LOW);
   delay(500);
  
}


