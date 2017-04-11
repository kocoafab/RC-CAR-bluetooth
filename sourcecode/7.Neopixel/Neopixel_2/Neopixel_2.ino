#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, 6, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
}

void loop() {
  for (int i = 0; i < 3; i++) {
    strip.setPixelColor(i, 0, 0, 0);
    strip.show();
  }
  delay(1000);


  for (int i = 0; i < 3; i++) {
    strip.setPixelColor(i, 255, 0, 0);
    strip.show();
  }
  delay(1000);
}

