#define RSSI_PIN A0

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Display rssi value
  Serial.println(analogRead(A0));
  delay(250);
}
