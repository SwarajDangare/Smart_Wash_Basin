void setup() {
  pinMode (A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  if (val < 200) {
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
  }
  else
  {
    delay(1500);
    digitalWrite(10, HIGH);
    digitalWrite(13, LOW);
  }
}
