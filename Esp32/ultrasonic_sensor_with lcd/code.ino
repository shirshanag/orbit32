#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int trig=33,echo=25;
long duration;
long distance;
void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.println("Distance:");
}
void loop(){
  lcd.setCursor(0,1);
  lcd.print("                 ");
  lcd.setCursor(0,1);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration*0.034)/2;
  lcd.print(distance);
  delay(200);

}
