void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  unsigned int bright = 0;
  if(digitalRead(4) != LOW)
  {
    if(analogRead(0) > 740 && analogRead(1) < 1000)
    {
      if(digitalRead(5) == LOW)
      {
        bright = 32;
      }
      else if(digitalRead(6) == LOW)
      {
        bright = 64;
      }
      else if(digitalRead(7) == LOW)
      {
        bright = 128;
      }
      else if(digitalRead(8) == LOW)
      {
        bright = 255;
      }
      else
      {
        bright = 0;
      }
    }
  }
  else
  {
    bright = 0;
  }
  analogWrite(3,bright);
  Serial.println(bright);
}
