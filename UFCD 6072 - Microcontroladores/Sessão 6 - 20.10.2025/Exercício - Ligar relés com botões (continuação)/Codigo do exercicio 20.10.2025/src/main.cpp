//Introduzir a biblioteca de Arduino//
#include <Arduino.h>

//1. Criação da estrutura "Rele"//
typedef struct Rele
{
  //Variável do estado do relé
  int estado;
  //Variável do periférico do relé
  int periferico;
};
//Utilização de 4 variáveis (cada uma para cada relé)
Rele reles [4];

//2. Criação da estrutura "Botao"//
typedef struct Botao
{
  //Variável do estado do botão
  int estado;
  //Variável do periférico do botão
  int periferico;
};
//Utilização de 4 variáveis (cada uma para cada botão)
Botao botoes [4];

//Configurações//
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);

  botoes[0].periferico = 2;
  botoes[1].periferico = 3;
  botoes[2].periferico = 4;
  botoes[3].periferico = 5;
  pinMode(botoes[0].periferico, INPUT);
}
//Execução da tarefa//
void loop()
{
}