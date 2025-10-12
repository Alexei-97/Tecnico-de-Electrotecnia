//Introduzir a biblioteca de Arduino//
#include <Arduino.h>

//Introdução das variáveis//

//Variável do tempo actual
unsigned long int tempo_actual = 0;
//Variável do tempo anterior
unsigned long int tempo_anterior = 0;
//Pino do LED azul
int led_azul = 2;

//Configurações//
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);
  //Pino de saída (LED azul)
  pinMode(led_azul, OUTPUT);
}
//Execução da tarefa//
void loop()
{
  //Temporizador//

  //Leitura do tempo actual (em milisegundos)
  tempo_actual = millis();

  //Se a diferença entre o tempo actual e o tempo anterior for maior que 1 segundo
  if(tempo_actual - tempo_anterior >= 1000)
  {
    //...então aparece a informação no monitor...
    //...a dizer qual é o tempo actual...
    Serial.print("tempo_actual - ");
    Serial.println(tempo_actual);

    //..., a dizer qual é o tempo anterior...
    Serial.print("tempo_anterior - ");
    Serial.println(tempo_anterior);

    //Leitura do tempo anterior (em milisegundos)
    tempo_anterior = millis();
  }
}