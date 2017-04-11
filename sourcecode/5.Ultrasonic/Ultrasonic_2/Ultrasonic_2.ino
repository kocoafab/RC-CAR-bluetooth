int trig = 8;
int echo = 9;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  digitalWrite(echo, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  unsigned long duration = pulseIn(echo, HIGH);

  float distance = duration / 29.0 / 2.0;

  Serial.print(distance);
  Serial.println("cm");

  delay(200);

  if (distance < 5) {
    digitalWrite(3, HIGH);
  }

  else {
    digitalWrite(3, LOW);
  }
}


