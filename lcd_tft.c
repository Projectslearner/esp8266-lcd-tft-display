/*
    Project name : ESP8266 LCD TFT Display
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-lcd-tft-display
*/

#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <SPI.h>

// Pin definitions for ESP8266 and TFT
#define TFT_CS    D8  // TFT CS pin connected to D8
#define TFT_RST   D9  // TFT RST pin connected to D9
#define TFT_DC    D10 // TFT DC/RS pin connected to D10
#define TFT_MOSI  D7  // TFT MOSI pin connected to D7
#define TFT_SCK   D5  // TFT SCK pin connected to D5
#define TFT_LED   D6  // TFT LED pin connected to D6 (optional)

// Create an instance of the TFT display
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST, TFT_MOSI, TFT_SCK, TFT_LED);

void setup() {
  Serial.begin(9600);
  
  // Initialize TFT display
  tft.begin();
  
  // Rotate the screen if needed
  tft.setRotation(1); // Adjust rotation as necessary
  
  // Fill screen with black color
  tft.fillScreen(ILI9341_BLACK);
  
  // Set text color and size
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(2);
  
  // Display text on TFT
  tft.setCursor(20, 20);
  tft.println("ESP8266 TFT Display");
  
  // Draw a rectangle
  tft.drawRect(10, 60, 100, 50, ILI9341_WHITE);
  
  // Draw a filled circle
  tft.fillCircle(120, 90, 20, ILI9341_GREEN);
}

void loop() {
  // Your code here
}
