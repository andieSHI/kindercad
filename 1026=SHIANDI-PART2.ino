void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(0, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  delay(800); // Wait for 800 millisecond(s)
  digitalWrite(3, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(4, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(5, HIGH);
  delay(300); // Wait for 300 millisecond(s)
  digitalWrite(6, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(7, HIGH);
  delay(100); // Wait for 100 millisecond(s)
}