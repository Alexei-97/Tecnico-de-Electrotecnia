//Configurações//
void setup()
{
  //Pino de saída D2 para o LED vermelho
   pinMode(2,OUTPUT);
  //Pino de saída D3 para o LED amarelo
   pinMode(3,OUTPUT);
  //Pino de saída D4 para o LED verde
   pinMode(4,OUTPUT);
}

//Execução da tarefa//
void loop()
{
  //Ligar o LED verde
  digitalWrite(4,HIGH);
  //Esperar 10 segundos
  delay(10000);
  //Desligar o LED verde
  digitalWrite(4,LOW);

  //Ligar o LED amarelo
  digitalWrite(3,HIGH);
  //Esperar 3 segundos
  delay(3000);
  //Desligar o LED amarelo
  digitalWrite(3,LOW);

  //Ligar o LED vermelho
  digitalWrite(2,HIGH);
  //Esperar 10 segundos
  delay(10000);

  //Ligar o LED amarelo
  digitalWrite(3,HIGH);
  //Esperar 3 segundos
  delay(3000);

  //Desligar o LED vermelho
  digitalWrite(2,LOW);
  //Desligar o LED amarelo
  digitalWrite(3,LOW);
}