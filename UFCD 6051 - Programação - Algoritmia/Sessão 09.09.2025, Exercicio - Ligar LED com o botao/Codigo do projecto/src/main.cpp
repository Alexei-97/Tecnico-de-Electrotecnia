//Introduzir a biblioteca de Arduino
#include <Arduino.h>

//Introdução das variáveis

//Pino do LED - D2
int led = 2;
//Pino do Botão - A0
int botao = A0;
//Variável do estado do botão
int estado_do_botao = 0;

//Configurações
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);

  //Pino de saída do sinal
  pinMode(led, OUTPUT);

  //Pino de entrada do sinal
  pinMode(botao, INPUT);
}

//Execução da tarefa
void loop()
{
  //Verificação do estado do botão
  estado_do_botao = digitalRead(botao);

  //Se o botão estiver ligado...
  if (estado_do_botao == LOW)
  {
    //...o LED liga-se...
    digitalWrite(led, HIGH);
    //...e aparece a informação no monitor
    Serial.println("LED ligado");
  }
  //Senão...
  else
  {
    //...o LED fica desligado...
    digitalWrite(led, LOW);
    //...e aparece a informação no monitor
    Serial.println("LED desligado");
  }
  //Esperar 75 milisegundos
  delay(75);
}