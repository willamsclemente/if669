/* Função if */
void setup()      //primeira função a ser chamada no início do programa
{
Serial.begin(9600);    //fixa a taxa de comunicação em 9600 bps
  pinMode(2, INPUT);    //o pino 2 é selecionado para receber informações
  pinMode(13, OUTPUT);    //o pino 13 é selecionado para transmitir informações
}
void loop()    //todas as funções embarcadas vão ser repetidamente executadas
{
  int botao;      //declarando variável botão como tipo inteiro
  botao = digitalRead(2);    //a variável botão guarda o estado lógico do pino 2
  Serial.println(2);      //envia para a porta serial o estado lógico do pino 2

if(botao == 1){      //teste condicional do botão pressionado
digitalWrite(13, HIGH);   
 //caso for verdadeiro, é enviado um sinal lógico alto para o pino 13
    }
}


  

  


