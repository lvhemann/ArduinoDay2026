#define BOTAO 36
#define BUZZER 13

void setup() {
  pinMode(BOTAO, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int estadoBotao = digitalRead(BOTAO);

  if (estadoBotao == HIGH) {
    digitalWrite(BUZZER, HIGH); // liga o buzzer
  } else {
    digitalWrite(BUZZER, LOW);  // desliga o buzzer
  }
}
