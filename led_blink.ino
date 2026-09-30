const int ledPin = 13;

void setup() {
  // Configure LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn LED ON
  digitalWrite(ledPin, HIGH);
  delay(1000);

  // Turn LED OFF
  digitalWrite(ledPin, LOW);
  delay(1000);
}
