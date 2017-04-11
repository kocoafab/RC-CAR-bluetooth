char data;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == '1') {
      Serial.println("LED ON");
      digitalWrite(3, HIGH);
    }
    else if (data == '2') {
      Serial.println("LED OFF");
      digitalWrite(3, LOW);
    }

    delay(100);
  }
}

