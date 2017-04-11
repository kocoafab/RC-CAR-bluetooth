#include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>


SoftwareSerial BTSerial(2, 3);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, 6, NEO_GRB + NEO_KHZ800);

char data;

void setup() {
  BTSerial.begin(9600);
  Serial.begin(9600);
  strip.begin();
}

void loop() {
  if (BTSerial.available()) {
    data = BTSerial.read();
    Serial.write(data);

    if (data == '1') {
      for (int i = 0; i < 3; i++) {
        strip.setPixelColor(i, 255, 0, 0);
        strip.show();
      }
    }

    if (data == '2') {
      for (int i = 0; i < 3; i++) {
        strip.setPixelColor(i, 0, 255, 0);
        strip.show();
      }
    }
  }
}


