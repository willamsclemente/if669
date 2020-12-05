void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  if(Serial.available()){
   char posicao= Serial.read();
   switch(posicao){
   case '0':
   digitalWrite(13, HIGH);
   delay(5000);
   digitalWrite(13, LOW);
   break;
   case '1':
   digitalWrite(12, HIGH);
   delay(5000);
   digitalWrite(12, LOW);
   break;
   case '2':
   digitalWrite(11, HIGH);
   delay(5000);
   digitalWrite(11, LOW);
   break;
   }
   delay(10);
   Serial.println(posicao);
    
  }
  

}
