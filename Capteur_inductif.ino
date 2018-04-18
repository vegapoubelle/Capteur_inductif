void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);

}

void loop() {
  if (digitalRead(13) == HIGH) {
  Serial.println("biere");
  }
}
