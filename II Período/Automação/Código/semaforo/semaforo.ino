int led = 5;

void setup()
{
pinMode(13, OUTPUT);
pinMode(9, OUTPUT);
pinMode(5, OUTPUT);
}

void loop()
{
if (led == 13){
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(500);
  led = 5; 
} else if (led == 9) {
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(500);
  led = 13;
} else if (led == 5) {
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(500);
  led = 9;
}
}
