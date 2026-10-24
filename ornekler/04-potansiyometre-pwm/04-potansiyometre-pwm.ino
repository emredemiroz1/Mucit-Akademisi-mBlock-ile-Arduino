void setup() { pinMode(9, OUTPUT); }
void loop() {
  int deger = analogRead(A0);
  int parlaklik = (deger * 255L + 511) / 1023;
  analogWrite(9, parlaklik);
  delay(20);
}
