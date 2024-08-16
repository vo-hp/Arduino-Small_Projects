
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DFRobot_DHT11.h>

DFRobot_DHT11 DHT;
#define DHT11_PIN 10

LiquidCrystal_I2C lcd(0x27, 16, 2);

const long interval = 1000;
unsigned long previousReadMillis = 0;
unsigned long previousLcdMillis = 0;
unsigned long previousBlinkMillis = 0;
unsigned long currentMillis;
unsigned long currentBlinkMillis;

bool wasBlink = false;
bool wasOff = false;
int a = 0;

void lcdBlink() {
  currentBlinkMillis = millis();
  if (currentBlinkMillis - previousBlinkMillis >= 500) {
    previousBlinkMillis = currentBlinkMillis;
    if (not wasOff) {
      lcd.noBacklight();
      wasOff = true;
    } else {
      lcd.backlight();
      wasOff = false;
      a++;
    }
  }
}

 // void blinkLcd_Humi() {
//   if (DHT.humidity >= HUMIDITY_THRESHOLD) {
//     if (not isLcdBlinking) {
//       currentBlinkMillis = millis();
//       if (currentBlinkMillis - previousBlinkMillis >= intervalBlink ) {
//         previousBlinkMillis = currentBlinkMillis;
//         if (isLcdOn) {
//           lcd.noBacklight();
//           isLcdOn = false ;
//         }
//         else {
//           lcd.backlight();
//           isLcdOn = true;
//         }
//       }
//       if (DHT.humidity < HUMIDITY_THRESHOLD) {
//         isLcdBlinking = true;
//       }
//     }
//     else {
//     }
//   }
//   else {
//     isLcdBlinking = false;
//     lcd.backlight();
//   }
// }


void read() {
  lcd.setCursor(0, 1);
  lcd.print("temp:");
  lcd.setCursor(5, 1);
  lcd.print(DHT.temperature);
  lcd.setCursor(8, 1);
  lcd.print("humi:");
  lcd.setCursor(13, 1);
  lcd.print(DHT.humidity);
  Serial.print("temp: ");
  Serial.println(DHT.temperature);
  Serial.print("humi: ");
  Serial.println(DHT.humidity);
}

void setup() {
  Serial.begin(115200);
  lcd.init();
  lcd.backlight();
}

void loop() {
  currentMillis = millis();
  
  if (currentMillis - previousReadMillis >= interval) {
    previousReadMillis = currentMillis;
    DHT.read(DHT11_PIN);
    read();
  }
  
  if (currentMillis - previousLcdMillis >= interval) {
    previousLcdMillis = currentMillis;
    
    if (DHT.humidity >= 90) {
      lcd.setCursor(0, 0);
      lcd.print("warning");
      if (not wasBlink) {
        wasBlink = true;
        previousBlinkMillis = millis(); // Reset the blink timer
      }
    } else {
      lcd.setCursor(0, 0);
      lcd.print("       ");
      wasBlink = false;
      lcd.backlight(); // Ensure backlight is on when not blinking
    }
  }
  
  if (wasBlink) {
    lcdBlink(); // Call the blinking function
  }
}