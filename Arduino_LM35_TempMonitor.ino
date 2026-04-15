void setup() {
  Serial.begin(9600);
}

void loop() {
  int temp = analogRead(A0);
  int valueA2 = analogRead(A2);

  Serial.print("A0: ");
  Serial.println(temp);

  Serial.print("A2: ");
  Serial.println(valueA2);

  delay(1000);
}