#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel beard (64, 6);
int x = 0;

int colors[5][3] {
  {255, 0, 255},
  {125, 125, 255},
  {255, 255, 0},
  {0, 255, 0},
  {255, 255, 255}
};

void setup() {
  beard.begin();
  beard.clear();
  beard.setBrightness(5);
}

void loop() {
  for (int i = 0; i < beard.numPixels(); i++) {
    beard.setPixelColor(i, 255, 255, 255);
  }
  beard.show();
  delay(100);
}
