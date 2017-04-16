
void setup ()
{
  Serial.begin(9600);
  pinMode(A15, INPUT);
  pinMode(A14, INPUT);
  pinMode(A13, INPUT);
  pinMode(A12, INPUT);
}
void loop () {
  int a15Vle = digitalRead(A15);
  int a14Vle = digitalRead(A14);
  int a13Vle = digitalRead(A13);
  int a12Vle = digitalRead(A12);
  
  Serial.print(a12Vle);
  Serial.print(a13Vle);
  Serial.print(a14Vle);
  Serial.println(a15Vle);
}




