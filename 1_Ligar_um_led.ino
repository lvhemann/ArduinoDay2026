#define LED_PIN 2  // Pino onde o LED está conectado

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Define o pino como saída
  digitalWrite(LED_PIN, HIGH); // Liga o LED
}

void loop() {
  // Nada aqui, LED fica sempre ligado
}
