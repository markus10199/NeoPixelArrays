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
  beard.setPixelColor(0, 255, 255, 255);
  beard.show();
  beard.clear();
}
