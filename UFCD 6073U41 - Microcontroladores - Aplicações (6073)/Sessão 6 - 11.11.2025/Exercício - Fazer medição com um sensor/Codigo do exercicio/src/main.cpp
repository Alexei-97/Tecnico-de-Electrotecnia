/*Introduzir a biblioteca de Arduino*/
#include <Arduino.h>

/*Introdução das variáveis*/
//Variável do pino de entrada do sinal
int pino = A0;
//Variável do valor da tensão
int tensao = 0;
//Variável do valor da temperatura
float temperatura = 0;

/*Configurações*/
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);
  //Pino de entrada do sinal
  pinMode(pino, INPUT);
}
/*Execução da tarefa*/
void loop()
{
  //Leitura do valor da tensão
  tensao = analogRead(A0);
    //cálculo do valor da temperatura
    temperatura = (tensao/1023.0)*5.0*1000/10;
    //Mostrar o valor da temperatura no monitor
    Serial.println(temperatura);
    //Esperar 1 segundo
    delay(1000);
}