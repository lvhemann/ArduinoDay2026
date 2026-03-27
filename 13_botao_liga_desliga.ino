#define BOTAO 36
#define BUZZER 13

bool estadoBuzzer = false;
bool ultimoEstadoBotao = LOW;

void setup() {
  pinMode(BOTAO, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  bool estadoAtual = digitalRead(BOTAO);

  // detecta clique (borda de subida)
  if (estadoAtual == HIGH && ultimoEstadoBotao == LOW) {
    estadoBuzzer = !estadoBuzzer; // inverte estado
    delay(200); // debounce simples
  }

  ultimoEstadoBotao = estadoAtual;

  digitalWrite(BUZZER, estadoBuzzer);
}
