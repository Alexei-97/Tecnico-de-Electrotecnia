/*Introduzir a biblioteca de Arduino*/
#include <Arduino.h>

/*1. Introdução das variáveis*/
/*1.1. Pinos dos LEDs*/
//Pino do LED de cima (azul) - D2
int led_cima = 2;
//Pino do LED de direita (verde) - D3
int led_direito = 3;
//Pino do LED de esquerda (amarelo) - D4
int led_esquerdo = 4;
//Pino do LED de baixo (vermelho) - D5
int led_baixo = 5;
//Pino do LED de centro (branco) - D6
int led_centro = 6;

/*1.2. Pinos dos botões*/
//Pino do botão de cima (do LED azul) - A6
int botao_cima = A6;
//Pino do botão de baixo (do LED vermelho) - A5
int botao_baixo = A5;
//Pino do botão de centro (do LED branco) - A4
int botao_centro = A4;
//Pino do botão de direita (do LED verde) - A3
int botao_direito = A3;
//Pino do botão de esquerda (do LED amarelo) - A2
int botao_esquerdo = A2;

/*1.3. Variáveis dos estados dos botões*/
//...de cima
int estado_do_botao_cima = 0;
//...de direita
int estado_do_botao_direito = 0;
//...de esquerda
int estado_do_botao_esquerdo = 0;
//...de baixo
int estado_do_botao_baixo = 0;
//...e de centro
int estado_do_botao_centro = 0;

/*Configurações*/
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);
  //Pinos de saída dos sinais
  pinMode(led_esquerdo && led_direito && led_baixo && led_cima && led_centro, OUTPUT);
  //Pinos de entrada do sinal
  pinMode(botao_esquerdo && botao_direito && botao_baixo && botao_cima && botao_centro, INPUT);
}
/*Execução da tarefa*/
void loop()
{
  //Leitura do estado dos botões
  //...de esquerda
  estado_do_botao_esquerdo = digitalRead(botao_esquerdo);
  //...de direita
  estado_do_botao_direito = digitalRead(botao_direito);
  //...de baixo
  estado_do_botao_baixo = digitalRead(botao_baixo);
  //...de cima
  estado_do_botao_cima = digitalRead(botao_cima);
  //...e de centro
  estado_do_botao_centro = digitalRead(botao_centro);

  //1. Se o botão de esquerda estiver ligado...
  if (estado_do_botao_esquerdo == LOW)
  {
    //...liga-se o LED de esquerda...
    digitalWrite(led_esquerdo, HIGH);
  }
  //Senão...
  else
  {
    //...o LED de esquerda fica desligado...
    digitalWrite(led_esquerdo, LOW);
  }

  //2. Se o botão de direita estiver ligado...
  if (estado_do_botao_direito == LOW)
  {
    //...liga-se o LED de direita...
    digitalWrite(led_direito, HIGH);
  }
  //Senão...
  else
  {
    //...o LED de direita fica desligado...
    digitalWrite(led_direito, LOW);
  }

  //3. Se o botão de biaxo estiver ligado...
  if (estado_do_botao_baixo == LOW)
  {
    //...liga-se o LED de baixo...
    digitalWrite(led_baixo, HIGH);
  }
  //Senão...
  else
  {
    //...o LED de baixo fica desligado...
    digitalWrite(led_baixo, LOW);
  }

  //4. Se o botão de cima estiver ligado...
  if (estado_do_botao_cima == LOW)
  {
    //...liga-se o LED de cima...
    digitalWrite(led_cima, HIGH);
  }
  //Senão...
  else
  {
    //...o LED de cima fica desligado...
    digitalWrite(led_cima, LOW);
  }

  //5. Se o botão de centro estiver ligado...
  if (estado_do_botao_centro == LOW)
  {
    //...liga-se o LED de esquerda...
    digitalWrite(led_centro, HIGH);
  }
  //Senão...
  else
  {
    //...o LED de esquerda fica desligado...
    digitalWrite(led_centro, LOW);
  }
//Esperar 75 milisegundos
delay(75);
}