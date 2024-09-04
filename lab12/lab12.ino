// C++ code
//

int button = 13;
int buttonState = 0;
int transistor = A0;
int potenciometro = A1;
int potenciometroValue;

void setup()
{
  pinMode(button, INPUT);
  pinMode(potenciometro, INPUT);
  pinMode(transistor, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
    buttonState = digitalRead(button);
  
    potenciometroValue = analogRead(potenciometro);
   	int velocidadeMotor = map(potenciometroValue, 0, 1023, 0, 255);
  
	if(buttonState == HIGH)
    {
     	Serial.println("Pressionado");
		analogWrite(transistor, potenciometroValue);     
    }
  	else
    {
		analogWrite(transistor, 0);     
    }
}