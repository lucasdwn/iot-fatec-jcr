// C++ code
//
int sensorTemp = A0;
int buzzer = 13;
float temperaturaC;
void setup()
{
  Serial.begin(9600);
  pinMode(sensorTemp, INPUT);  
  pinMode(buzzer, OUTPUT);

}

void loop()
{
   float sensorTempValue = analogRead(sensorTemp);
   temperaturaC = sensorTempValue / 1024;
   temperaturaC = temperaturaC * 5;
   temperaturaC = temperaturaC - 0.5;
   temperaturaC = temperaturaC * 100;
   temperaturaC = round(temperaturaC);
	
  if(temperaturaC >= 30)
  {
    Serial.print("Temperatura ultrapassou 30°C!! Temperatura atual (°C): ");
    Serial.println(temperaturaC);
  }
  
  if(temperaturaC >= 90)
  {
    digitalWrite(buzzer, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
  }
 
  
}