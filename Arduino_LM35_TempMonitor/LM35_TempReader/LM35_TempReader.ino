const int sensorPin1 = A0;
const int sensorPin2 = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value1 = analogRead(sensorPin1);
  int value2 = analogRead(sensorPin2);

  float temp1 = (value1 * 500.0) / 1023.0;
  float temp2 = (value2 * 500.0) / 1023.0;

// Thay thế 3 dòng cũ bằng dòng này để ra định dạng JSON
  Serial.print("{\"temp1\":");
  Serial.print(temp1);
  Serial.print(", \"temp2\":");
  Serial.print(temp2);
  Serial.println("}");
  

  delay(1000);
}
