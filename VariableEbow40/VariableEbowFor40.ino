void setup() {
}

void loop() {

  int potmeter = analogRead(A9);
  if(potmeter > 0.0001) {
    tone(12, map(potmeter, 1012, 100, 1024, 400));
  }
  delay(20);
}
