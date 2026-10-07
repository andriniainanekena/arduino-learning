int led = 8;
int duration;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(A5, INPUT);
}

void loop() {
    duration = analogRead(A5);
    duration = map(duration, 0, 1023, 100, 1000);

    digitalWrite(led, HIGH);
    delay(duration);

    digitalWrite(led, LOW);
    delay(duration);
}
