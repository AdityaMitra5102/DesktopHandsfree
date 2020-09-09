void setup()
{
  Serial.begin(9600);
  pinMode(5,OUTPUT);
}

void loop()
{
  while(Serial.available())
  {
    char c=Serial.read();
    if(c=='P')
    {
      digitalWrite(5,HIGH);
      delay(100);
      digitalWrite(5,LOW);
    }
  }
}
