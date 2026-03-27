#define BTN1 36
#define BTN2 39

#define LED1 12
#define LED2 14

void setup() {
  // Botões (entrada)
  pinMode(BTN1, INPUT);
  pinMode(BTN2, INPUT);

  // LEDs (saída)
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  int estadoBTN1 = digitalRead(BTN1);
  int estadoBTN2 = digitalRead(BTN2);

  // Botão 1 controla LED 1
  if (estadoBTN1 == HIGH) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

  // Botão 2 controla LED 2
  if (estadoBTN2 == HIGH) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }
}
