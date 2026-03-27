#define BTN_LIGA 36
#define BTN_DESLIGA 39
#define BUZZER 13

bool estadoBuzzer = false;

void setup() {
  pinMode(BTN_LIGA, INPUT);
  pinMode(BTN_DESLIGA, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  if (digitalRead(BTN_LIGA) == HIGH) {
    estadoBuzzer = true;
  }

  if (digitalRead(BTN_DESLIGA) == HIGH) {
    estadoBuzzer = false;
  }

  // aplica estado no buzzer
  digitalWrite(BUZZER, estadoBuzzer);
}
