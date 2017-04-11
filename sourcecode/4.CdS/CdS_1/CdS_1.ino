void setup() {
  Serial.begin(9600); 
}

void loop() {
  int cdsValue = analogRead(A0);

  Serial.print("Light =  ");
  Serial.println(cdsValue);

  delay(200);
}

