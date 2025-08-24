#include <Servo.h>
Servo myServo;
static bool fanOn = false;
int temp0=A2,temp1,temp2;
int ldr=A0,ldr1,ldr2;

void setup(){
  pinMode(temp0,INPUT);
  myServo.attach(9);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
}
void loop(){
  temp1=analogRead(temp0);
  temp2=map(temp1,20,358,0,100);
  ldr1=analogRead(ldr);
  ldr2=map(ldr1,1017,344,0,100);
  Serial.println("Light Intensity:");
  Serial.println(ldr2);
  if(ldr2>=50 || temp2>=30){
    myServo.attach(9);
    myServo.write(90);
    delay(100);
    myServo.write(0);
    delay(100);
    
  }
  else{
    myServo.detach();
    
  
  }
  delay(100);
 
}
