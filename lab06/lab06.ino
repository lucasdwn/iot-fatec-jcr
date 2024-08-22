// C++ code
//

int led= 11;
int potenciometro = A0;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  int potenciometroValue = analogRead(potenciometro);
  int brilhoLed = map(potenciometroValue, 0, 1023, 0, 255);
  analogWrite(led, brilhoLed);
}