void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  int i=0;
  int pin[]={2,3,4,5,6,7};
  if(Serial.available()){
  char posicao;
  posicao=Serial.read();
  switch(posicao){
  case '0':
  for(i=0; i<6; i++){
  digitalWrite(pin[i], HIGH);
  delay(1000);
  digitalWrite(pin[i], LOW);  
  }
  break;
  
  case '1':
  for(i=5; i>=0; i--){
  digitalWrite(pin[i], HIGH);
  delay(1000);
  digitalWrite(pin[i], LOW);  
  }
  break;

  case '2':
  for(i=0; i<6; i++){
  digitalWrite(pin[i], HIGH);  
  }
  delay(5000);
  for(i=5; i>=0; i--)
  digitalWrite(pin[i], LOW);
  break; 
  }
  delay(10);
  Serial.println(posicao);
}
}
