#define PIN_R 15
#define PIN_G 2
#define PIN_B 4

void setup() {
  ledcAttach(PIN_R, 5000, 8);
  ledcAttach(PIN_G, 5000, 8);
  ledcAttach(PIN_B, 5000, 8);
}

void setColor(int r, int g, int b) {
  ledcWrite(PIN_R, r);
  ledcWrite(PIN_G, g);
  ledcWrite(PIN_B, b);
}

void loop() {
  setColor(255, 0, 0);
  delay(1000);

  setColor(0, 255, 0);
  delay(1000);

  setColor(0, 0, 255);
  delay(1000);

  setColor(255, 255, 0);
  delay(1000);

  setColor(0, 255, 255);
  delay(1000);

  setColor(255, 0, 255);
  delay(1000);

  setColor(255, 255, 255);
  delay(1000);

  setColor(0, 0, 0);
  delay(1000);
}
