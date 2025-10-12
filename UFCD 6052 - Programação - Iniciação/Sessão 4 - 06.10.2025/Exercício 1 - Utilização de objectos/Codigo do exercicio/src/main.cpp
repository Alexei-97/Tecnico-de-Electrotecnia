//Introduzir a biblioteca de Arduino
#include <Arduino.h>


//Criação da estrutura "botao", que possui...
typedef struct botao
{
  //...variável que mostra o pino do botão...
  int periferico;
  //...e variável que mostra o estado do botão
  int estado;
};
//...para o pino do botão do LED branco...
botao botao_branco;
//...e para o pino do botão do LED azul
botao botao_azul;


//Criação da estrutura "leds", que possui...
typedef struct leds
{
  //...variável que mostra o pino do LED
  int periferico;
};
//...para o pino do LED branco...
leds led_branco;
//...e para o pino do LED azul...
leds led_azul;


//Variável da opção
int opcao = 0;

//Variável do tempo de 75 milisegundos
int tempo = 75;


//Configurações
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);

  botao_branco.periferico = A0;
  botao_branco.estado = 0;
  
  //Pino para o botão do LED branco
  pinMode(botao_branco.periferico, INPUT);

  botao_azul.periferico = A1;
  botao_azul.estado = 0;

  //Pino para o botão do LED azul
  pinMode(botao_azul.periferico, INPUT);
}
//Execução da tarefa
void loop()
{
}