//Projeto Arduino sinal de trânsito

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
 
}
void loop() {
  digitalWrite(8, HIGH);
  delay(4000);
  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);
  delay(2000);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  delay(4000);
  digitalWrite(10, LOW);

}


