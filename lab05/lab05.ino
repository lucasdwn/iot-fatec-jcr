// C++ code
//

int red = 11;
int yellow = 10;
int green = 9;
int button = 12;
int buttonState = 0;
int time = 0;
int option = 0;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);  
  pinMode(button, INPUT);
  Serial.begin(9600);

}

void red_on(int time){
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(time);
}

void yellow_on(int time){
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(time);
}

void green_on(int time){
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(time);
}


void loop()
{
  	time = 2000;
    buttonState = digitalRead(button);
	if(buttonState == HIGH)
    {
      option = 2;
      time = 4000;
    }
  
  switch(option) {
   case 0:
	green_on(time);
    option++;
	break;
   case 1: 
    yellow_on(time);
    option++;
	break;
   case 2: 
    red_on(time);
    option=0;
	break;	
  }
}
