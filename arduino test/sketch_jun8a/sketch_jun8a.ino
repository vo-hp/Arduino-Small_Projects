int bt1 = 3;
int bt2 = 4;
int bt3 = 5;
int bientro = A0;
int chanpwm = 9, out1  = 8, out2 = 7;


void setup() {
  Serial.begin(115200);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  pinMode(bt3 , INPUT);
  pinMode(chanpwm, OUTPUT);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(bientro, INPUT);
  analogWrite(chanpwm, 0);
}

void loop() {
  int read = analogRead(bientro);
  int tocdo= map(read,0,1012,0,170);
  analogWrite(chanpwm,tocdo);
  Serial.println(tocdo);
  int read1 = digitalRead(bt1);
  int read3 = digitalRead(bt3);
  int read2 = digitalRead(bt2);
  if ( read1 == HIGH and read2 == LOW and read3 == LOW) {
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
  }
  else if ( read1 == LOW and read2 == HIGH and read3 == LOW) {
    digitalWrite(out1, HIGH);
    digitalWrite(out2, LOW);
  }
  else if ( read1 == LOW and read2 == LOW and read3 == HIGH) {
    digitalWrite(out1, LOW);
    digitalWrite(out2, HIGH);
  }
  Serial.print("Read1.   " + String(read1));
  Serial.print(".     Read2.  " + String(read1));
  Serial.println( ".     Read3.  " + String(read1));
}
