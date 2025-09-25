int branco = A0;
int azul = A1;
int tempo = 75;
void setup()
{
  pinMode(branco,OUTPUT);
  pinMode(azul,OUTPUT);
}
void loop()
{
  digitalWrite(branco,HIGH);
  delay(tempo);
  digitalWrite(branco,LOW);
  digitalWrite(azul,HIGH);
  delay(tempo);
  digitalWrite(azul,LOW);
}
