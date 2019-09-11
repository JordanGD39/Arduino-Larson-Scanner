int leds[] = {6,7,2,3,4,5};
int delaySpeed = 50;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 6; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 6; i++)
  {
    if(i == 0)
    {
      digitalWrite(leds[5], LOW);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[0], HIGH);
      delay(delaySpeed);
    }
    else if(i > 0)
    {
      digitalWrite(leds[i - 1], LOW);
      digitalWrite(leds[i], HIGH);
      delay(delaySpeed);
    }
  }

  for(int i = 6; i > 0; i--)
  {
    if(i == 0)
    {
      delay(delaySpeed);
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[5], HIGH); 
      delay(delaySpeed);     
    }
    else if(i > 0)
    {
      digitalWrite(leds[i + 1], LOW);
      digitalWrite(leds[i], HIGH);
      delay(delaySpeed);
    }
  }
}
