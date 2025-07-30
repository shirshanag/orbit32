int ldr0=A0,ldr1,ldr2;
int led=4;
void setup(){
  pinMode(ldr0,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  ldr1=analogRead(ldr0);
  ldr2=map(ldr1,1020,531,0,100);
  //Serial.println(ldr2);
  if(ldr2<=60){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(100);
}
