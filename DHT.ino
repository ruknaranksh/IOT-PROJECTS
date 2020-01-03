#include <DHT.h>
#define DHTTYPE DHT11

#define dht_pin 2
DHT dht(dht_pin, DHTTYPE);

void setup() 
{
  dht.begin();
  Serial.begin(9600);
  Serial.println("HUMIDITY AND TEMPERATURE \n\n");
  delay(2000);

}

void loop() 
{
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  Serial.print("CURRENT HUMIDITY = ");
  Serial.print(humidity);
  Serial.print("% ");
  Serial.print("CURRENT TEMPERATURE = ");
  Serial.print(temperature);
  Serial.print(" C");
  Serial.print("\n");
  delay(2000);

}
