#define PIN_R 25
#define PIN_G 26
#define PIN_B 27

// canais PWM
#define CANAL_R 0
#define CANAL_G 1
#define CANAL_B 2

void setup() {
  ledcSetup(CANAL_R, 5000, 8);
  ledcSetup(CANAL_G, 5000, 8);
  ledcSetup(CANAL_B, 5000, 8);

  ledcAttachPin(PIN_R, CANAL_R);
  ledcAttachPin(PIN_G, CANAL_G);
  ledcAttachPin(PIN_B, CANAL_B);
}

void setColor(int r, int g, int b) {
  ledcWrite(CANAL_R, r);
  ledcWrite(CANAL_G, g);
  ledcWrite(CANAL_B, b);
}

void loop() {
  setColor(255, 0, 0);   // vermelho
  delay(1000);

  setColor(0, 255, 0);   // verde
  delay(1000);

  setColor(0, 0, 255);   // azul
  delay(1000);

  setColor(255, 255, 0); // amarelo
  delay(1000);

  setColor(0, 255, 255); // ciano
  delay(1000);

  setColor(255, 0, 255); // magenta
  delay(1000);

  setColor(255, 255, 255); // branco
  delay(1000);

  setColor(0, 0, 0); // desligado
  delay(1000);
}
