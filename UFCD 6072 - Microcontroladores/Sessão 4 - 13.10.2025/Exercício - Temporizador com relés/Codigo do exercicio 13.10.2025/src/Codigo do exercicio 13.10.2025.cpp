//Introduzir a biblioteca de Arduino//
#include <Arduino.h>

//1. Criação da estrutura "Temporizador"//
//1.1. Variáveis dentro da estrutura "Temporizador"//
typedef struct Temporizador
{
  //Variável do tempo anterior
  unsigned long tempo_anterior;
  //Variável do intervalo
  unsigned long intervalo;
};

//1.2.Variável "temporizado1" que utiliza a estrutura "Temporizador"//
Temporizador temporizador1;

//2. Criação da estrutura "Rele"//
//2.1. Variáveis dentro da estrutura "Rele"//
typedef struct Rele
{
    //Variável do estado do relé
    int estado_do_rele;
    //Variável do periférico do relé
    int periferico_do_rele;
};

//2.2. Variável "rele1" que utiliza a estrutura "Rele"//
Rele rele1;

//Configurações//
void setup()
{
    //Velocidade do monitor
    Serial.begin(9600);
    //Pino de saída para a bobina do relé
    pinMode(2, OUTPUT);
    //Variável "tempo_anterior" da variável "temporizador1"
    temporizador1.tempo_anterior = 0;
    //Variável "intervalo" da variável "temporizador1"
    temporizador1.intervalo = 5000;
}

//Execução da tarefa//
void loop()
{
    //Temporizador 1//
    if(millis() - temporizador1.tempo_anterior >= temporizador1.intervalo)
    {
        Serial.println("Relé 1 ligado");
        temporizador1.tempo_anterior = millis();
        digitalWrite(2, HIGH);
    }
}