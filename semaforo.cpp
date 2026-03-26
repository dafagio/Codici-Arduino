void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
}
