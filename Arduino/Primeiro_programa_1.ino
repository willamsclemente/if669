void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  int botao;
  botao=digitalRead(2);
  Serial.println(2);

  if(botao == 1){
    digitalWrite(13, HIGH);
    
  }

}
