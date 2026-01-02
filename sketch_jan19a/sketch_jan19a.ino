#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int pirSensorPin = 2; 

int ledPin = 13; 

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  pinMode(pirSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);

  lcd.init();            // initialize the LCD
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("       PIR      ");
  lcd.setCursor(0, 1);
  lcd.print(" Motion Sensor  ");
  delay(3000);
  lcd.clear();

  Serial.begin(9600);
}

void loop() {
  int pirValue = digitalRead(pirSensorPin);

  
  if (pirValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    lcd.clear();
    lcd.setCursor(0, 0); 
    lcd.print("HELLO ANKIT!");
    Serial.println("HELLO ANKIT!");
  } else {
    
    digitalWrite(ledPin, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("   No motion   "); 
    lcd.setCursor(0, 1);
    lcd.print("   detected!   "); 
  }


  delay(1000);
}