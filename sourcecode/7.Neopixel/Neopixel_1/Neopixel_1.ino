#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, 6, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
}

void loop() {
  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
  strip.show();
  
  delay(1000);

  strip.setPixelColor(0, 255, 0, 0);
  strip.setPixelColor(1, 255, 0, 0);
  strip.setPixelColor(2, 255, 0, 0);
  strip.show();
  
  delay(1000);
}


