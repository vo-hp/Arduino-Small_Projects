// C++ code
//
void setup()
{
  int a = A1 ;
 
  pinMode(2, OUTPUT); pinMode(3, OUTPUT); pinMode(4, OUTPUT);
  pinMode(5, OUTPUT); pinMode(6, OUTPUT); pinMode(7, OUTPUT);
  pinMode(10, OUTPUT); pinMode(9, OUTPUT); pinMode(8, OUTPUT);
  pinMode(11, OUTPUT); pinMode(12, OUTPUT); 
  pinMode(12, OUTPUT); pinMode(13, OUTPUT); pinMode(A3, OUTPUT);  
  pinMode(1, OUTPUT); pinMode(A1, OUTPUT); pinMode(A2, OUTPUT);
}

void loop()
{ 
  // số 9 đèn xanh
  digitalWrite(A2, HIGH);
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
   
    // số 8 đèn xanh
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);

  // số 7 đèn xanh
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // số 6 đèn xanh
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);

  // số 5 đèn xanh
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // số 4 đèn xanh
  
  digitalWrite(2, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
 
  // số 3 đèn xanh
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // SỐ 2 đèn xanh
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // số 1 đèn xanh
  
  digitalWrite(2, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, LOW);
  delay(1000);
  
    // số 0 đèn xanh
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(A2, LOW);
  
  // số 3 đèn vàng
  digitalWrite(A1, HIGH);
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // SỐ 2 đèn vàng
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // số 1 đèn vàng
  
  digitalWrite(2, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, LOW);
  delay(1000);
  
    // số 0 đèn vàng
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(A1, LOW);

  // số 7  đèn đỏ
  
  digitalWrite(A3, HIGH);
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // số 6 đèn đỏ
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);

  // số 5 đèn đỏ
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // số 4 đèn đỏ
  digitalWrite(2, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // số 3 đèn đỏ
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // SỐ 2 đèn đỏ
  
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  
  // số 1 đèn đỏ
  
  digitalWrite(2, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, LOW);
  delay(1000);
  
    // số 0 đèn đỏ
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(A3, LOW);
}
