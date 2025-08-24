int l=5;
int box=10;
void setup()
{
 
  pinMode(l,OUTPUT);
  pinMode(box,INPUT);
  Serial.begin(9600);
}
void loop()
{
  
  int dig=digitalRead(box);
  Serial.println(dig);
  if(dig==HIGH)
  {
    digitalWrite(l,HIGH);
  }
  else{
    digitalWrite(l,LOW);
  
  }

}
