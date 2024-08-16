// // const int enaA = 1, enaB = A0; 
// const int enaA  = A0, enaB = A1; 
// const int out1 = 9, out2 = 8, out3 = 7, out4 = 6; //const int out1 = 7, out2 =

// void setup() {
//   Serial.begin(115200);
//   pinMode(out1, OUTPUT);
//   pinMode(out2, OUTPUT);
//   pinMode(out3, OUTPUT);
//   pinMode(out4, OUTPUT);
//   pinMode(enaA, OUTPUT);
//   pinMode(enaB, OUTPUT);
//   analogWrite(enaA, 0);
//   analogWrite(enaB, 0);
// }
// void forwardMotor1() {
//   digitalWrite(out1, HIGH);
//   digitalWrite(out2, LOW);
// }

// void forwardMotor2() {
//   digitalWrite(out3, HIGH);
//   digitalWrite(out4, LOW);
// }

// void backwardMotor1() {
//   digitalWrite(out1, LOW);
//   digitalWrite(out2, HIGH);
// }

// void backwardMotor2() {
//   digitalWrite(out3, LOW);
//   digitalWrite(out4, HIGH);
// }

// void loop() {
//   // digitalWrite(out1, HIGH);
//   // digitalWrite(out2, LOW);
//   forwardMotor2();
//   // digitalWrite(out3, HIGH);
//   // digitalWrite(out4, LOW);
//   analogWrite(enaB , 200);
//   // analogWrite(enaB, 100);
// }


// int ena1 = A0;
// int ena2 = A1;
// int rpwm = 8;
// int lpwm = 9;

// void setup() {
//   // put your setup code here, to run once:
//   Serial.begin(115200);
  
//    pinMode(ena1, OUTPUT);
//   pinMode(ena2, OUTPUT);
//   pinMode(lpwm,   OUTPUT);
//   pinMode(rpwm, OUTPUT);

//   //(Optional)

//   //(Optional)
// }

// void loop() {
//    // put your main code here, to run repeatedly:

//   //Controlling speed (0   = off and 255 = max speed):     
//   //(Optional)
//   // analogWrite(ena1,100); //ENA   pin
//   // analogWrite(ena2, 100); //ENB pin
//   // //(Optional)
  
//   // digitalWrite(rpwm,   HIGH);
//   // digitalWrite(lpwm, LOW);
//   // // delay(3000);

//   // // digitalWrite(rpwm, LOW);
//   // //  digitalWrite(lpwm, HIGH);


//   // for(int i = 0; i <= 200; i= i+1) //Speed up 
//   // { 
//   //  analogWrite(ena1, i); 
//   //  analogWrite(ena2, i);
//   // }
//   // for(int i = 200; i >= 0; i= i-1) //Speed down
//   // { 
//   //  analogWrite(ena1, i);
//   //  analogWrite(ena2, i);
//   // }  
//   delay(3000);
// }
int bt1 = 3;
int bt2 = 4;
int bt3 = 5;
int bientro = A3;
const int enaA  = A0, enaB = A1; 
const int out1 = 9, out2 = 8, out3 = 7, out4 = 6; 


void setup() {
  Serial.begin(115200);
  // pinMode(bt1, INPUT);
  // pinMode(bt2, INPUT);
  // pinMode(bt3 , INPUT);
  // pinMode(enaA, OUTPUT);
  // pinMode(enaB, OUTPUT);
  // pinMode(out1, OUTPUT);
  // pinMode(out2, OUTPUT);
  // pinMode(out3, OUTPUT);
  // pinMode(out4, OUTPUT);
  // pinMode(bientro, INPUT);
  // analogWrite(enaA, 0);
  // analogWrite(enaB, 0);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  pinMode(enaA, OUTPUT);
  pinMode(enaB, OUTPUT);

  // Test forward direction
  digitalWrite(out1, HIGH);
  digitalWrite(out2, LOW);
  digitalWrite(out3, HIGH);
  digitalWrite(out4, LOW);

  // Set speed to maximum
  analogWrite(enaA, 170);
  analogWrite(enaB, 170);
}

void loop() {
  // int read = analogRead(bientro);
  // int tocdo = 150;
  // if ( read <= 510 ) {
  //   digitalWrite(out1, HIGH);
  //   digitalWrite(out2, LOW);
  //   digitalWrite(out3, HIGH);
  //   digitalWrite(out4, LOW);
  //   tocdo= map(read,510,0,0,170);
  // }
  // if ( read > 510 ) {
  //   digitalWrite(out1, LOW);
  //   digitalWrite(out2, HIGH);
  //   digitalWrite(out3, LOW);
  //   digitalWrite(out4, HIGH);
  //   tocdo= map(read,510,1023,0,170);
  // }
  // digitalWrite(out1, LOW);
  // digitalWrite(out2, HIGH);
  // digitalWrite(out3, LOW);
  // digitalWrite(out4, HIGH);
  // analogWrite(enaA, tocdo );
  // analogWrite(enaB, tocdo);
  // Serial.print(read + String("    "));
  // Serial.println(abs(tocdo));
  // int read1 = digitalRead(bt1);
  // int read3 = digitalRead(bt3);
  // int read2 = digitalRead(bt2);
  // if ( read1 == HIGH and read2 == LOW and read3 == LOW) {
  //   digitalWrite(out1, LOW);
  //   digitalWrite(out2, LOW);
  // }
  // else if ( read1 == LOW and read2 == HIGH and read3 == LOW) {
  //   digitalWrite(out1, HIGH);
  //   digitalWrite(out2, LOW);
  // }
  // else if ( read1 == LOW and read2 == LOW and read3 == HIGH) {
  //   digitalWrite(out1, LOW);
  //   digitalWrite(out2, HIGH);
  // }
  // Serial.print("Read1.   " + String(read1));
  // Serial.print(".     Read2.  " + String(read1));
  // Serial.println( ".     Read3.  " + String(read1));
}
