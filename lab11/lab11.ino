// C++ code
//

int button = 13;
int buttonState = 0;
int transistor = A0;

void setup()
{
  pinMode(button, INPUT);
  pinMode(transistor, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
    buttonState = digitalRead(button);
	if(buttonState == HIGH)
    {
     	Serial.println("Pressionado");
		digitalWrite(transistor, buttonState);     
    }
  	else
    {
		digitalWrite(transistor, buttonState);     
    }
}