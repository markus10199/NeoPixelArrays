#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel beard (64, 6);
int x = 0;
int z = 0;

int colors[2][3] {
  {0, 0, 0},
  {255, 255, 255},
};

void setup() {
  beard.begin();
  beard.clear();
  beard.setBrightness(5);
}

void loop() {
  for (int i = 0; i <= beard.numPixels(); i++) {
    int y = (i + (i / 8) + z) % 2;
    if (i % 8 > 7) {
      z++;
    }
    int r = colors[y][0];
    int g = colors[y][1];
    int b = colors[y][2];
    beard.setPixelColor(i, r, g, b);
  }
  beard.show();
  delay(200);
  beard.clear();
  z++;
}
