// C++ code
//

int sensPresenca = 13;
int led = 12;
int valorSensor;
void setup()
{
  Serial.begin(9600);
  pinMode(sensPresenca, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  valorSensor = digitalRead(sensPresenca);
  if(valorSensor == HIGH){
    Serial.println("SENSOR ATIVADO");
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}