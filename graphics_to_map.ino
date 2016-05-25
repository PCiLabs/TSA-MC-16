#include "SPI.h"
#include "Adafruit_GFX.h" //graphics
#include "Adafruit_ILI9341.h" //for touchscreen
#include "Adafruit_STMPE610.h" //for touchscreen
#include "SD.h" //sd card
#include "Fat16.h"// graphics for sd card
#include <RGBmatrixPanel.h> // Hardware-specific library
#include "MFRC522.h" //rfid library
 #include <stdint.h>
 #include <TouchScreen.h>
 #include <TFT.h>

File myFile;

 static unsigned int TS_MINX, TS_MAXX, TS_MINY, TS_MAXY;
 //Touch Screen Co-ordinate mapping register
 static unsigned int MapX1, MapX2, MapY1, MapY2;
 /* Usage: TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300); 
   Where, XP = X plus, YP = Y plus, XM = X minus and YM = Y minus */
 //init TouchScreen port pins. This would be reinitialized in setup() based on the hardware detected.
 TouchScreen ts = TouchScreen(17, A2, A1, 14, 300); 
 
void setup() {
  Serial.begin(9600);
  Serial.begin(9600);
  while (!Serial) {
     Serial.print("Initializing SD card...");

  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");
  }
  Serial.println("Graphics to map!");
  
  myFile = SD.open("blank.txt", FILE_WRITE);
  // if the file opened okay, write to it:
  if (myFile) {
    Serial.print("Writing to test.txt...");
    myFile.println("testing 1, 2, 3.");
    // close the file:
    myFile.close();
    Serial.println("done.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }

  // re-open the file for reading:
  myFile = SD.open("M0_Q0");
  if (myFile) {
    Serial.println("M0_Q0");

    // read from the file until there's nothing else in it:
    while (myFile.available()) {
      Serial.write(myFile.read());
    }
    // close the file:
    myFile.close();
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
  {
    if (p.y>=0 && p.y<=15);
    Serial.println("Question is Right");
    unsigned long testTEXT()
  {
      tft.fillSCREEN(ILI9341_BLACK);
        unsigned long start = micros();
        tft.setCursos(0, 0);
        tft.setTextColor(ILI9341_GREEN); tft.setTextSize(2);
        tft.println("Question Correct!");
        return micros() - start;
  }
  if (p.y>=15 && p.y<=30);
      unsigned long testTEXT()
  {
      tft.fillSCREEN(ILI9341_BLACK);
        unsigned long start = micros();
        tft.setCursos(0, 0);
        tft.setTextColor(ILI9341_RED); tft.setTextSize(2);
        tft.println("Question Incorrect.");
        tft.setTextColor(ILI9341_GREEN); tft.setTextSize(2)
        tft.println("Try again!");
        return micros() - start;
  }
  delay (5000)
}
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

  Serial.readStringUntil("B1_M1");
  Serial.println("Sending command to open B1_M1");

 while (!Serial) {
     Serial.print("Initializing SD card...");

  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");
  }
  Serial.println("Graphics to map!");
  
  myFile = SD.open("blank.txt", FILE_WRITE);
  // if the file opened okay, write to it:
  if (myFile) {
    Serial.print("Writing to test.txt...");
    myFile.println("testing 1, 2, 3.");
    // close the file:
    myFile.close();
    Serial.println("done.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }

  // re-open the file for reading:
  myFile = SD.open("M1_Q1");
  if (myFile) {
    Serial.println("M1_Q1");

    // read from the file until there's nothing else in it:
    while (myFile.available()) {
      Serial.write(myFile.read());
    }
    // close the file:
    myFile.close();
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
}
 while (!Serial) {
     Serial.print("Initializing SD card...");

  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");
  }
  Serial.println("Graphics to map!");
  
  myFile = SD.open("blank.txt", FILE_WRITE);
  // if the file opened okay, write to it:
  if (myFile) {
    Serial.print("Writing to test.txt...");
    myFile.println("testing 1, 2, 3.");
    // close the file:
    myFile.close();
    Serial.println("done.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }

  // re-open the file for reading:
  myFile = SD.open("M1_Q2");
  if (myFile) {
    Serial.println("M1_Q2");

    // read from the file until there's nothing else in it:
    while (myFile.available()) {
      Serial.write(myFile.read());
    }
    // close the file:
    myFile.close();
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
}
