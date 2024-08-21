// C++ code
//
int red=11;
void setup()
{
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}