//Introduzir a biblioteca de Arduino
#include <Arduino.h>


//1. Criação de variáveis
//1.1. Branco (cima)
//Pino do LED branco - A0
int led_branco = A0;
//Pino do botão do LED branco - D2
int botao_branco = 2;
//Variável do estado do botão do LED branco
int estado_do_botao_branco = 0;

//1.2. Azul (baixo)
//Pino do LED azul - A1
int led_azul = A1;
//Pino do botão do LED azul - D3
int botao_azul = 3;
//Variável do estado do botão do LED azul
int estado_do_botao_azul = 0;

//1.3. Verde (esquerda)
//Pino do LED verde - A2
int led_verde = A2;
//Pino do botão do LED verde - D4
int botao_verde = 4;
//Variável do estado do botão do LED verde
int estado_do_botao_verde = 0;

//1.4. Vermelho (direita)
//Pino do LED vermelho - A3
int led_vermelho = A3;
//Pino do botão do LED vermelho - D5
int botao_vermelho = 5;
//Variável do estado do botão do LED vermelho
int estado_do_botao_vermelho = 0;

//1.5. Variável da opção
int opcao = 0;

//1.6. Variável do tempo de 75 milisegundos
int tempo = 75;

//Configurações
void setup()
{
  //Velocidade do monitor
  Serial.begin(9600);
  
  //Pino para o botão do LED branco
  pinMode(botao_branco, INPUT);

  //Pino para o LED branco
  pinMode(led_branco, OUTPUT);

  //Pino para o botão do LED azul
  pinMode(botao_azul, INPUT);

  //Pino para o LED azul
  pinMode(led_azul, OUTPUT);

  //Pino para o botão do LED verde
  pinMode(botao_verde, INPUT);

  //Pino para o LED verde
  pinMode(led_verde, OUTPUT);

  //Pino para o botão do LED vermelho
  pinMode(botao_vermelho, INPUT);

  //Pino para o LED vermelho
  pinMode(led_vermelho, OUTPUT);
}

//Execução da tarefa
void loop()
{
  //Leitura do estado dos botões...
  //...branco...
  estado_do_botao_branco = digitalRead(botao_branco);
  //...azul...
  estado_do_botao_azul = digitalRead(botao_azul);
  //...verde...
  estado_do_botao_verde = digitalRead(botao_verde);
  //...e vermelho...
  estado_do_botao_vermelho = digitalRead(botao_vermelho);

  //Se todos os botões não estiverem pressionados...
  if (estado_do_botao_branco == LOW) (estado_do_botao_azul == LOW);
  if (estado_do_botao_verde == LOW) (estado_do_botao_vermelho == LOW);
  //...então realiza-se o caso 0
  {
    opcao = 0;
  }

  //Se estiver pressionado só o botão do LED branco...
  if (estado_do_botao_branco == HIGH) (estado_do_botao_azul == LOW);
  if (estado_do_botao_verde == LOW) (estado_do_botao_vermelho == LOW);
  //...então realiza-se o caso 1
  {
    opcao = 1;
  }
    switch (opcao)
    {
      //Caso 0: Se todos os botões não estiverem pressionados...
      case 0:
      //...todos os LEDs ficam desligados
      digitalWrite(led_branco, LOW);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_vermelho, LOW);
      //E aparece a informação no monitor
      Serial.println("LEDs desligados");
      break;

      //Caso 1: Se estiver pressionado só o botão do LED branco...
      case 1:
      //...liga-se só o LED branco
      digitalWrite(led_branco, HIGH);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_vermelho, LOW);
      //E aparece a informação no monitor
      Serial.println("Botão de cima pressionado - LED branco ligado");
      break;
    }
}