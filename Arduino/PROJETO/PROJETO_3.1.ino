/*Projeto carrinho seguidor de linha*/
#include "Ultrasonic.h"//incluir o arquivo da lib

#define DMF 9// Pino do motor DC
#define EMF 3// Pino do motor DC
#define echoPin 13 //Pino 11 recebe o pulso do echo
#define trigPin 12 //Pino 12 envia o pulso para gerar o echo
#define sensor 2 //Pino do sensor

float distancia_cm; // para armazenar a distância em centímetros

Ultrasonic ultrasonic(12,13);


void MotorParar(){ // Função para parar o motor
  analogWrite(EMF, 0);
  analogWrite(DMF, 0);
  delay(5); 
}

void Desviar(){ //Desviando do obstaculo
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 distancia_cm = (ultrasonic.Ranging(CM));
 Serial.println(distancia_cm);
 delay(1000); 
  
  if(distancia_cm <= 5.00) //Se a leitura do sensor de proximidade menor que 5 centimetros
   {
    MotorParar();
    
    //Move para a Direita por 400 milissegundos
   
    analogWrite(EMF, 255);
    analogWrite(DMF,0);
    delay(400);

    //Move para Frente por 900 milissegundos

    analogWrite(EMF, 255);
    analogWrite(DMF, 255);
    delay(900);
    
    //Move para a Esquerda por 600 milissegundos
 
    analogWrite(EMF, 0);
    analogWrite(DMF, 255);
    delay(600);

    //Move para Frente por 1 segundo

    analogWrite(EMF, 255);
    analogWrite(DMF, 255);
    delay(1000);

    //Move para a Esquerda por 600 milissegundos

    analogWrite(EMF, 0);
    analogWrite(DMF, 255);
    delay(600);

    //Move para Frente por 900 milissegundos
  
    analogWrite(EMF, 255);
    analogWrite(DMF, 255);
    delay(900);

     //Move para a Direita por 400 milissegundos

    analogWrite(EMF, 255);
    analogWrite(DMF, 0);
    delay(400);
    }
}

void setup() {//definindo os pinos
  pinMode(EMF, OUTPUT);// define o pino 9 como saida
  pinMode(DMF, OUTPUT);// define o pino 3 como saida
  pinMode(echoPin, INPUT); // define o pino 11 como entrada (recebe)
  pinMode(trigPin, OUTPUT); // define o pino 12 como saida (envia)
  pinMode(sensor, INPUT); //define o pino 2 como entrada 
  Serial.begin(9600);

}

void loop() {//Movendo o carrinho na linha

while(digitalRead(sensor)== 1){
analogWrite(EMF, 150);
analogWrite(DMF, 0);  
Serial.println(digitalRead(sensor));
Desviar();  
}
while(digitalRead(sensor)== 0){
analogWrite(EMF, 150);
analogWrite(DMF, 0);
Serial.println(digitalRead(sensor));
Desviar();
}

while(digitalRead(sensor)== 1){
analogWrite(DMF, 150);
analogWrite(EMF, 0);
Serial.println(digitalRead(sensor));
Desviar();  
}

while(digitalRead(sensor)== 0){
analogWrite(DMF, 150);
analogWrite(EMF, 0);
Serial.println(digitalRead(sensor));
Desviar();   
}
     
}



