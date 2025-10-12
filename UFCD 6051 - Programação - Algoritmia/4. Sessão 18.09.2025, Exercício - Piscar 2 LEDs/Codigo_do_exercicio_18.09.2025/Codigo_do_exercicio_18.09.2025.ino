//Introdução das variáveis//

//Variável do pino do LED branco - D2
int branco = 2;
//Variável do pino do LED azul - D3
int azul = 3;
//Variável do tempo - 60 milisegundos
int tempo = 60;

//Configurações//
void setup()
{
  //Pino de saída D2 para o LED branco
  pinMode(branco,OUTPUT);
  //Pino de saída D3 para o LED azul
  pinMode(azul,OUTPUT);
}

//Execução da tarefa//
void loop()
{
  //Ligar o LED branco
  digitalWrite(branco,HIGH);
  //Esperar 60 milisegundos
  delay(tempo);
  //Desligar o LED branco
  digitalWrite(branco,LOW);
  //Ligar o LED azul
  digitalWrite(azul,HIGH);
  //Esperar 60 milisegundos
  delay(tempo);
  //Dessligar o LED azul
  digitalWrite(azul,LOW);
}