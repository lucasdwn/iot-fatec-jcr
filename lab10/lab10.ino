// C++ code
//

int sensPresenca = 13;
int lampada = 3;
int valorSensor;
void setup()
{
  Serial.begin(9600);
  pinMode(sensPresenca, INPUT);
  pinMode(lampada, OUTPUT);
}

void loop()
{
  valorSensor = digitalRead(sensPresenca);
  if(valorSensor == HIGH){
    Serial.println("SENSOR ATIVADO");
    digitalWrite(lampada, HIGH);
  }
  else
  {
    digitalWrite(lampada, LOW);
  }
}