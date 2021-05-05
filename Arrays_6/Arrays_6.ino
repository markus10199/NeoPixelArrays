#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel beard (64, 6);
int x = 0;

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
    int r = colors[x][0];
    int g = colors[x][1];
    int b = colors[x][2];
    beard.setPixelColor(i, r, g, b);

    x = (x + 1) % 2;
  }
  delay(200);
  beard.show();
}
