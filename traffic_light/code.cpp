// C++ code
//
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(12, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(5000); 
  digitalWrite(13, LOW);
}
