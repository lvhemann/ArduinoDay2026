#define BUZZER 15  // Pino do buzzer

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  digitalWrite(BUZZER, HIGH); // Liga buzzer
  delay(1000);

  digitalWrite(BUZZER, LOW);  // Desliga buzzer
  delay(1000);
}
