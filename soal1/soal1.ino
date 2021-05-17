int button1Value = 0;
int button2Value = 0;
int button3Value = 0;

int button1 = 3;
int button2 = 4;
int button3 = 5;
int red = 2;
int green = 6;
int blue = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop()
{
	button1Value = digitalRead(button1);
  button2Value = digitalRead(button2);
  button3Value = digitalRead(button3);
  
  if(button1Value != 0)
  {
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(green, HIGH);
    delay(2000);
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    delay(2000);
  }

  if(button2Value != 0)
  {
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    delay(2000);
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    delay(2000);
  }
  else
  {
     digitalWrite(green, LOW);
  }
  
  if(button3Value != 0)
  {
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(green, HIGH);
    delay(1000);
    digitalWrite(blue, HIGH);
    delay(1000);    
    digitalWrite(blue, LOW);
    delay(1000);
    digitalWrite(green, LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(red, LOW);
    delay(1000);
  }
  
  
}
