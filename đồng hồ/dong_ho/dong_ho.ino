

void setup() {
  Serial.begin(9600);
}

void loop() {
    for (int h = 0; h < 24; h++) {
    Serial.print(0); 
    Serial.print(h);
      for (int m = 0; m < 60; m++) {
        if ( m < 10) {
          if ( m == 0) {
            Serial.print(":0");
          }
          else {
            Serial.print(0);
            Serial.print(h);
            Serial.print(":0");
          }
        }
        else {
          Serial.print(0);
          Serial.print(h);
          Serial.print(":");
        }
      Serial.println(m);
      delay(50); //
    }
  }
}
