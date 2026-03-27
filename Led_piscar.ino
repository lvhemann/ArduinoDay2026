#define LED_PIN 2  // Pino do LED

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Define como saída
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Liga o LED
  delay(1000);                 // Espera 1 segundo

  digitalWrite(LED_PIN, LOW);  // Desliga o LED
  delay(1000);                 // Espera 1 segundo
}
