void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(A1);

  Serial.print("pot =  ");
  Serial.println(potValue);
  
  delay(200);
}

