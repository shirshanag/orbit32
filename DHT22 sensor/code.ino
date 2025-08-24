#include <DHT.h>
#define dataPin  4
#define DHTTYPE DHT22
DHT dht(dataPin , DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  float t= dht.readTemperature();
  float h= dht.readHumidity();
  Serial.print("Temperature:");
  Serial.println(t);
  Serial.print("Humidity:");
  Serial.println(h);
  delay(2000);

}
