#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_CS  5
#define TFT_DC  2
#define TFT_RST 4

Adafruit_ST7735 tft_screen = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft_screen.initR(INITR_BLACKTAB);
  tft_screen.setRotation(1);
  tft_screen.fillScreen(ST7735_BLACK);

  tft_screen.setCursor(20, 10);
  tft_screen.setTextColor(ST7735_WHITE);
  tft_screen.setTextSize(1);
  tft_screen.print("Hello World 123!");
}

void loop() {
  tft_screen.setCursor(15, 50);
  tft_screen.setTextColor(ST7735_RED, ST7735_BLACK);
  tft_screen.setTextSize(2);
  tft_screen.print("INTERNET OF THINGS");
  delay(1000);

  tft_screen.setCursor(15, 50);
  tft_screen.setTextColor(ST7735_BLUE, ST7735_BLACK);
  tft_screen.setTextSize(2);
  tft_screen.print("INTERNET OF THINGS");
  delay(1000);

  tft_screen.setCursor(15, 50);
  tft_screen.setTextColor(ST7735_YELLOW, ST7735_BLACK);
  tft_screen.setTextSize(2);
  tft_screen.print("INTERNET OF THINGS");
  delay(1000);
}
