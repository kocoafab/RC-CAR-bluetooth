#include <SimpleDHT.h>

int pinDHT11 = 6;
SimpleDHT11 dht11;

void setup() {
  Serial.begin(115200);
}

void loop() {
  byte temperature = 0;
  byte humidity = 0;
  if (dht11.read(pinDHT11, &temperature, &humidity, NULL)) {
    Serial.print("Read DHT11 failed.");
    return;
  }
  Serial.print((int)temperature);
  Serial.print("C, ");
  Serial.print((int)humidity);
  Serial.println("%");

  float discomfortIndex = (1.8 * temperature) - (0.55 * (1 - humidity / 100.0) * (1.8 * temperature - 26)) + 32;
  Serial.println(discomfortIndex);

  if (discomfortIndex >= 75.0) {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
  }
  else {
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
  }
  delay(1000);
}

