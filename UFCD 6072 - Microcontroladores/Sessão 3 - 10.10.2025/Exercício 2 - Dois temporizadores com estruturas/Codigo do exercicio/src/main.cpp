//Introduzir a biblioteca de Arduino//
#include <Arduino.h>

//Criação da estrutura "Temporizador"//
typedef struct Temporizador
{
  //Variável do tempo anterior
  unsigned long tempo_anterior;
  //Variável do intervalo
  unsigned long intervalo;
};

//Criação de variáveis que vão utilizar a estrutura "Temporizador"//

//Variável do temporizador 1
Temporizador temporizador1;
//Variável do temporizador 2
Temporizador temporizador2;
//Variável do temporizador 3
Temporizador temporizador3;

//Configurações
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);

  //Iniciallizar as variáveis

  temporizador1.tempo_anterior = 0;
  temporizador2.tempo_anterior = 0;
  temporizador3.tempo_anterior = 0;

  temporizador1.intervalo = 1000;
  temporizador2.intervalo = 2000;
  temporizador3.intervalo = 3000;
}
//Execução da tarefa
void loop()
{
  //Temporizador 1//
  if(millis() - temporizador1.tempo_anterior >= temporizador1.intervalo)
  {
    Serial.println("Executar 1");
    temporizador1.tempo_anterior = millis();
  }
  //Temporizador 2//
  if(millis() - temporizador2.tempo_anterior >= temporizador2.intervalo)
  {
    Serial.println("Executar 2");
    temporizador2.tempo_anterior = millis();
  }
  //Temporizador 3//
  if(millis() - temporizador3.tempo_anterior >= temporizador3.intervalo)
  {
    Serial.println("Executar 3");
    temporizador3.tempo_anterior = millis();
  }
}