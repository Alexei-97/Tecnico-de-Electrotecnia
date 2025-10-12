//Introduzir a biblioteca de Arduino
#include <Arduino.h>

//Introdução das variáveis

//Pino do Botão = A0
int botao = A0;
//Pino do LED = D2
int led = 2;
//Variável do estado do botão
int estado_do_botao = 0;

//Configurações
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);
  //Pino de entrada do sinal
  pinMode(botao, INPUT);
  //Pino de saída do sinal
  pinMode(led, OUTPUT);
}

//Execução da tarefa
void loop()
{
  //Enquanto que o botão estiver pressionado...
  while(digitalRead(botao) == LOW)
  {
    //...o LED liga-se...
    digitalWrite(led, HIGH);
    //...e aparece a informação no monitor
    Serial.println("Contar + 1");
    //Esperar 75 milisegundos
    delay(75);
  }
  //No caso contrário, se o botão não estiver pressionado, o LED fica desligado...
  digitalWrite(led, LOW);
  //...e aparece a informação no monitor
  Serial.println("LED Desligado");
  //Esperar 75 milisegundos
  delay(75);
}