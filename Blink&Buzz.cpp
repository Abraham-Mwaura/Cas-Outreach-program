
int ledPin =2; //assigning buzzer to pin 2
int buzzerPin =4; //assigning buzzer to pin 4

void setup()
{
  pinMode(ledPin, OUTPUT); //set led pin as output
  pinMode(buzzerPin, OUTPUT); //set buzzer pin as output
}

void loop()
{
  digitalWrite(ledPin, HIGH); //switching on the led
  digitalWrite(buzzerPin, HIGH); //switching on the buzzer
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin, LOW); //switching off the led
  digitalWrite(buzzerPin, LOW); //switching off the buzzer
  delay(1000);  // Wait for 1000 millisecond(s)
}
