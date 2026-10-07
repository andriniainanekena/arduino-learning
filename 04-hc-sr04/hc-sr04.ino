long duration, distance;

void setup() {
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(4, LOW);
  delayMicroseconds(2);
  digitalWrite(4, HIGH);
  delayMicroseconds(2);
  digitalWrite(4, LOW);

  duration = pulseIn(2, HIGH);
  distance = duration * 340 / (2 * 10000);

  Serial.print("Distance is: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);
}