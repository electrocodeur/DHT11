#include <DHT.h>;

#define DHT11_PIN 2
#define DHTTYPE DHT11
DHT dht(DHT11_PIN, DHTTYPE);

float temp, hum;

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  temp = dht.readTemperature();
  hum = dht.readHumidity();
  Serial.print(temp);
  Serial.println(" °C");
  Serial.print(hum);
  Serial.println(" %");
  delay(1000);
}
