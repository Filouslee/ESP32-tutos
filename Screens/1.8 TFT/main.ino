#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

// Définition des broches ESP32-C3
#define TFT_CS   10
#define TFT_DC    3
#define TFT_RST   2

#define TFT_SCK   6
#define TFT_MOSI  7

// Création de l’objet écran
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCK, TFT_RST);

void setup() {
  tft.initR(INITR_BLACKTAB);   // Initialisation du ST7735
  tft.fillScreen(ST77XX_BLACK);
  delay(300);
}

void loop() {

  // Test des principales couleurs
  tft.fillScreen(ST77XX_RED);
  delay(600);

  tft.fillScreen(ST77XX_GREEN);
  delay(600);

  tft.fillScreen(ST77XX_BLUE);
  delay(600);

  tft.fillScreen(ST77XX_YELLOW);
  delay(600);

  tft.fillScreen(ST77XX_CYAN);
  delay(600);

  tft.fillScreen(ST77XX_MAGENTA);
  delay(600);

  tft.fillScreen(ST77XX_WHITE);
  delay(600);

  // Dégradé vertical
  for (int y = 0; y < 160; y++) {
    uint8_t r = map(y, 0, 160, 0, 255);
    uint8_t g = map(y, 0, 160, 255, 0);
    uint8_t b = 128;
    uint16_t color = tft.Color565(r, g, b);
    tft.drawFastHLine(0, y, 128, color);
  }
  delay(1500);
}
