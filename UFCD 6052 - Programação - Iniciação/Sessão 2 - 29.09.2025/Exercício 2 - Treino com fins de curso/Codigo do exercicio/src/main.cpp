//Introduzir a biblioteca de Arduino
#include <Arduino.h>

const int BAUD_RATE = 9600;
int opcao = 1;
//Configurações
void setup()
{
  Serial.begin(9600);
}
//Execução da tarefa
void loop()
{
  switch(opcao)
  {
    case 0:
    Serial.println("Jogo a decorrer");
    break;

    case 1:
    Serial.println("Xeque");
    break;

    case 2:
    Serial.println("Xeque mate");
    break;

    default:
    Serial.println("Lance ilegal");
    break;
  }
  delay(1000);
}