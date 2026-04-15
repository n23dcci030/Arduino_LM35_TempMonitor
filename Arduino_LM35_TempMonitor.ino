void setup() {
  Serial.begin(9600);
}

void loop() {
  int valueA0 = analogRead(A0);
  int valueA1 = analogRead(A1);
  int valueA2 = analogRead(A2);

  Serial.print("{\"A0\": ");
  Serial.print(valueA0);
  Serial.print(", \"A1\": ");
  Serial.print(valueA1);
  Serial.print(", \"A2\": ");
  Serial.print(valueA2);
  Serial.println("}");

  delay(1000);
}