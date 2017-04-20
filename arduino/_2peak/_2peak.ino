
void setup ()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
}
void loop () {
  int a0Vle = digitalRead(A0);
  int a1Vle = digitalRead(A1);
  int a2Vle = digitalRead(A2);
  int a3Vle = digitalRead(A3);
  int a4Vle = digitalRead(A4);
  int a5Vle = digitalRead(A5);
  
  
  Serial.print(a0Vle);
  Serial.print(a1Vle);
  Serial.print(a2Vle);
  Serial.print(a3Vle);
  Serial.print(a4Vle);
  Serial.println(a5Vle);
}




