void setup() {
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(A1);

  if (potValue > 512) {
    digitalWrite(3, HIGH);
    Serial.println("LED ON (pot > 512)");
  }
  else {
    digitalWrite(3, LOW);
    Serial.println("LOW OFF (pot < 512)");
  }
}

