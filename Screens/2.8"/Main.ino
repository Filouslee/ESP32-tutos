#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

// ─────────────────────────────
// TFT ILI9341 (SPI principal)
// ─────────────────────────────
#define TFT_CS   10
#define TFT_DC    3
#define TFT_RST   2

#define TFT_MOSI  7
#define TFT_MISO  5
#define TFT_SCK   6

Adafruit_ILI9341 tft = Adafruit_ILI9341(
  TFT_CS, TFT_DC, TFT_MOSI, TFT_SCK, TFT_MISO, TFT_RST
);

void setup() {
  // SPI principal pour l’écran
  SPI.begin(TFT_SCK, TFT_MISO, TFT_MOSI);

  tft.begin();
  tft.setRotation(1);  // paysage = 320x240
  tft.fillScreen(ILI9341_BLACK);

  delay(200);
}

// ─────────────────────────────
// Test couleurs plein écran
// ─────────────────────────────
void testColors() {
  tft.fillScreen(ILI9341_RED);     delay(400);
  tft.fillScreen(ILI9341_GREEN);   delay(400);
  tft.fillScreen(ILI9341_BLUE);    delay(400);
  tft.fillScreen(ILI9341_YELLOW);  delay(400);
  tft.fillScreen(ILI9341_CYAN);    delay(400);
  tft.fillScreen(ILI9341_MAGENTA); delay(400);
  tft.fillScreen(ILI9341_WHITE);   delay(400);

  // Dégradé vertical 320 × 240
  for (int y = 0; y < 240; y++) {
    uint16_t c = tft.color565(
      map(y, 0, 240, 0, 255),
      map(y, 0, 240, 255, 0),
      120
    );
    tft.drawFastHLine(0, y, 320, c);
  }

  delay(800);
}

void loop() {
  testColors();
}
