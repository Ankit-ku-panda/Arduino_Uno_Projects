#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans18pt7b.h>
#include <Fonts/FreeSans12pt7b.h>


#define OLED_RESET 0  // GPIO0
Adafruit_SSD1306 display(OLED_RESET);





void setup() {
  // put your setup code here, to run once:isplay.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 64x48)
   display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
   display.display();
   display.clearDisplay();
   display.setFont(&FreeSans9pt7b);
  
  display.setTextColor(WHITE);
  display.setCursor(0,0);
}

int xx=40;
int yy=0;
int tt=0;

void loop() {
 

}
