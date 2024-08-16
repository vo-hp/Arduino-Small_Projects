#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  String author = "Made by Win!";
  lcd.setCursor((16-author.length()) / 2, 1);
  lcd.print(author);
}

void loop() {
  for (int h = 0; h < 24; h++) {
    String time = String(0) + String(h);
    for (int m = 0; m < 60; m++) {
      if (m < 10) {
        if (m == 0) {
          time += ":0";
        } else {
          time = "0" + String(h) + ":0";
        }
      } else {
        time = "0" + String(h) + ":";
      }
      time += m;
      Serial.println(time);
      lcd.setCursor(5, 0);
      lcd.print(time);

      delay(1000);  //
    }
  }
}
