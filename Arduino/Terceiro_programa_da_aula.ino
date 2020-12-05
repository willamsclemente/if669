void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
int botao1, botao2;
botao1=digitalRead(2); 
botao2=digitalRead(3);
Serial.println(2);
Serial.println(3);

if(botao1 == 1){
  digitalWrite(13, HIGH);
}
else{
  if(botao2 == 1){
    digitalWrite(12, HIGH);
  }
  else{
    digitalWrite(11, HIGH);
  }
}
  

}
