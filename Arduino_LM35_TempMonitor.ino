void setup() {
  Serial.begin(9600);
}

void loop() {
  int valueA2 = analogRead(A2);
  Serial.println(valueA2);
  delay(1000);
}