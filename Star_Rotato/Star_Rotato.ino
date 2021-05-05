#include <Adafruit_NeoPixel.h>
#include "frames.h"
Adafruit_NeoPixel beard (64, 6);
int x = 0;

int colors[9][3] {
  {0, 0, 0},
  {255, 0, 255},
  {255, 0, 0},
  {255, 255, 0},
  {0, 255, 0},
  {0, 255, 255},
  {0, 0, 255},
  {255, 255, 255},
  {122, 122, 122}
};

void setup() {
  beard.begin();
  beard.clear();
  beard.setBrightness(5);
}

void loop() {
  for (int i = 0; i <= beard.numPixels(); i++) {
    int whichColor = animation[x][i];
    int r = colors[whichColor][0];
    int g = colors[whichColor][1];
    int b = colors[whichColor][2];
    beard.setPixelColor(i, r, g, b);
  }
  beard.show();
  delay(500);
  x = (x + 1) % 4;
}
