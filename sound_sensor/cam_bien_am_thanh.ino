int preVal; 

int getValueFromPinIn(int pinNumber ) {
  // Serial.print("pinNumber ");
  // Serial.println(pinNumber);
  int tmpVal = digitalRead(pinNumber);
  // Serial.println(tmpVal);
  return tmpVal;
}

int count = 1;

void hamXuLi() {
  Serial.print("em be khoc");
  Serial.print(" lan ");
  Serial.println(count++);
  digitalWrite(13, HIGH); 
  guiTinNhan(); 
  // delay(10000);
  digitalWrite(13, LOW);
}

void guiTinNhan() {
  Serial.println("tin nhan da duoc gui");
  delay(1000);  // thoi gian can de gui
  Serial.println("tin nhan da gui thanh cong");
}

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  preVal = getValueFromPinIn(4);
  Serial.println(preVal);
}

void loop() {
  
  int val = getValueFromPinIn(4);
  
  if (val == 0 and preVal == 1) {
    hamXuLi();
  }
  if (val != preVal) {    
    // Serial.println(val);
    // Serial.println("detect AT");
    preVal = val;
  }
}
