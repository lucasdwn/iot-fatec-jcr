// C++ code
//

int fotoresistor = A0;
int led = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);  
  pinMode(fotoresistor, INPUT);
}

void loop()
{
  int fotoresistorValue = analogRead(fotoresistor);
  if(fotoresistorValue >= 1022)
  {
    digitalWrite(led, HIGH);
    Serial.println(fotoresistorValue);
  }
  else{
    digitalWrite(led, LOW);
  }
  
}