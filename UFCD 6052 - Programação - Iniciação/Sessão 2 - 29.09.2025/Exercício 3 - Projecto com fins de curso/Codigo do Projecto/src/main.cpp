    //Introduzir a biblioteca de Arduino
#include <Arduino.h>

//Introdução das variáveis

//Pino do LED branco - D2
int led_branco = 3;
//Pino do botão do LED branco - A0
int botao_branco = 2;
//Variável do estado do botão do LED branco
int estado_do_botao_branco = 0;

//Pino do LED azul - D3
int led_azul = 5;
//Pino do botão do LED azul - A1
int botao_azul = 4;
//Variável do estado do botão do LED azul
int estado_do_botao_azul = 0;

//Variável da opção
int opcao = 0;

//Variável do tempo de 75 milisegundos
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
}
//Execução da tarefa
void loop()
{
//Leitura do estado dos botões...

//...branco...
estado_do_botao_branco = digitalRead(botao_branco);
//...e verde
estado_do_botao_azul = digitalRead(botao_azul);


//Se os 2 botões não estiverem pressionados...
if (estado_do_botao_branco == LOW) (estado_do_botao_azul == LOW);
//...então realiza-se o caso 0
{
    opcao = 0;
}

//Se só o botão do LED branco estiver pressionado...
if (estado_do_botao_branco == HIGH) (estado_do_botao_azul == LOW);
//...então realiza-se o caso 1
{
    opcao = 1;
}

//Se só o botão do LED azul estiver pressionado...
if (estado_do_botao_branco == LOW) (estado_do_botao_azul == HIGH);
//...então realiza-se o caso 2
{
    opcao = 2;
}

//Se os 2 botões estiverem pressionados...
if (estado_do_botao_branco == HIGH) (estado_do_botao_azul == HIGH);
//...então realiza-se o caso 3
{
    opcao = 3;
}

    switch (opcao)
    {
    //Caso 0: Se os 2 botões não estiverem pressionados...
    case 0:
    //..., os LEDs ficam desligados
    digitalWrite(led_branco, LOW);
    digitalWrite(led_azul, LOW);
    //E aparece a informação no monitor
    Serial.println("LEDs desligados");
    break;

    //Caso 1: Se só o botão do LED branco estiver pressionado...
    case 1:
    //..., o LED branco liga-se
    digitalWrite(led_branco, LOW);
    digitalWrite(led_azul, HIGH);
    //E aparece a informação no monitor
    Serial.println("LED branco ligado");
    break;

    //Caso 2: Se só o botão do LED azul estiver pressionado
    case 2:
    //...,o LED azul liga-se
    digitalWrite(led_branco, HIGH);
    digitalWrite(led_azul, LOW);
    //E aparece a informação no monitor
    Serial.println("LED azul ligado");
    break;

    //Caso 3: Se os 2 botões estiverem pressionados
    case 3:
    //..., os LEDs começam a piscar
    digitalWrite(led_branco, HIGH);
    delay(tempo);
    digitalWrite(led_branco, LOW);
    digitalWrite(led_azul, HIGH);
    delay(tempo);
    digitalWrite(led_azul, LOW);
    //E aparece a informação no monitor
    Serial.println("LEDs a piscar");
    break;
    
    //No caso extremo...
    default:
    //..no monitor aparece a informação sobre o erro
    Serial.println("Erro");
    break;
    }
    
    //Espera de 75 milisegundos
    delay(tempo);
}