void setup() {
  Serial.begin(9600);
}

void loop() {
  int temp = analogRead(A0);
  int valueA2 = analogRead(A2);

  Serial.print("{\"A0\": ");
  Serial.print(temp);
  Serial.print(", \"A2\": ");
  Serial.print(valueA2);
  Serial.println("}");

  delay(1000);
}