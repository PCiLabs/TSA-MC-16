#include "SPI.h"
#include "Adafruit_GFX.h" //graphics
#include "Adafruit_ILI9341.h" //for touchscreen
#include "Adafruit_STMPE610.h" //for touchscreen
#include "SD.h" //sd card
#include "Fat16.h"// graphics for sd card
#include <RGBmatrixPanel.h> // Hardware-specific library
#include "MFRC522.h" //rfid library

void setup() {
  Serial.begin(9600);
  Serial.begin(9600);
  Serial.println("Graphics to map!");

}


void loop (void) {

  unsigned long testTEXT() 
  {
      tft.fillSCREEN(ILI9341_BLACK);
        unsigned long start = micros();
        tft.setCursos(0, 0);
        tft.setTextColor(ILI9341_GREEN); tft.setTextSize(2);
        tft.println("A Pine Crest Micro-Controller Project");
        tft.setTextColor(ILI9341_RED);    tft.setTextSize(3);
        tft.println();
        tft.setTextColor(ILI9341_GREEN);
        tft.setTextSize(3);
        tft.println("Welcome,")
        tft.setTextSize(2);
        tft.println("To the talent show!");
        tft.setTextSize(2);
        tft.println("Swipe your book to begin!");
        return micros() - start;
  }
  Serial.println("Starting serial connection");
  Serial.println("Sending Map and Book#");
}
