#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel beard (64, 6);
int x = 0;

int colors[2][3] {
  {0, 0, 0},
  {255, 255, 255},
};

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return beard.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if (WheelPos < 170) {
    WheelPos -= 85;
    return beard.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;  return beard.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

void setup() {
  beard.begin();
  beard.clear();
  beard.setBrightness(5);
}

void loop() {
  for (int i = 0; i <= beard.numPixels(); i++) {
    int y = i + x;
    beard.setPixelColor(i, Wheel(y));
    y = y++;
  }
  delay(10);
  beard.show();
  x++;

}
