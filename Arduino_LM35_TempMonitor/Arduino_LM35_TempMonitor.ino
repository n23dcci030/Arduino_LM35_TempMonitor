void setup() {
  Serial.begin(9600);
}

void loop() {
  int temp = analogRead(A0);

  Serial.print("Temperature sensor A0: ");
  Serial.println(temp);

  delay(1000);
}
