//Introduzir a biblioteca de Arduino
#include <Arduino.h>


//Introdução das variáveis

unsigned long int tempo_actual = 0;
unsigned long int tempo_anterior = 0;
unsigned long int tempo_actual_2 = 0;
unsigned long int tempo_anterior_2 = 0;
int led_azul = 2;
int led_vermelho = 3;
int botao = A0;
int estado_do_botao = 0;
int comecar_contagem = 0;

//Configurações
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);
  //Pino de saída (LED azul)
  pinMode(led_azul, OUTPUT);
  //Pino de saída (LED vermelho)
  pinMode(led_vermelho, OUTPUT);
  //Pino de entrada (Botão)
  pinMode(botao, INPUT);
}

//Execução da tarefa
void loop()
{
  if(digitalRead(A0) == LOW)
  {
    comecar_contagem = 1;
    tempo_anterior = millis();
  }

if (comecar_contagem)
{
  if(millis() - tempo_anterior > 2000)
}





  //Temporizador 1//
  tempo_actual = millis();

  if(tempo_actual - tempo_anterior > 1000)
  {
    Serial.print("tempo_actual - ");
    Serial.println(tempo_actual);

    Serial.print("tempo_anterior - ");
    Serial.println(tempo_anterior);

    if (digitalRead(led_azul) == LOW)
    {
      digitalWrite(led_azul, HIGH);
    }
    else
    {
      digitalWrite(led_azul, LOW);
    }

    tempo_anterior = millis();
  }

  //Temporizador 2//
  tempo_actual_2 = millis();
  
  if(tempo_actual_2 - tempo_anterior_2 > 2000)
  {
    Serial.print("tempo_actual - ");
    Serial.println(tempo_actual_2);

    Serial.print("tempo_anterior - ");
    Serial.println(tempo_anterior_2);
    
    if (digitalRead(led_vermelho) == LOW)
    {
      digitalWrite(led_vermelho, HIGH);
    }
    else
    {
      digitalWrite(led_vermelho, LOW);
    }

    tempo_anterior_2 = millis();
  }
}