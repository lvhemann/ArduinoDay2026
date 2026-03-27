#include <math.h>

#define PIN_R 25
#define PIN_G 26
#define PIN_B 27

#define CANAL_R 0
#define CANAL_G 1
#define CANAL_B 2

float angulo = 0.0;

void setup() {
  ledcSetup(CANAL_R, 5000, 8);
  ledcSetup(CANAL_G, 5000, 8);
  ledcSetup(CANAL_B, 5000, 8);

  ledcAttachPin(PIN_R, CANAL_R);
  ledcAttachPin(PIN_G, CANAL_G);
  ledcAttachPin(PIN_B, CANAL_B);
}

void loop() {
  int r = (sin(angulo) * 127.5) + 127.5;
  int g = (sin(angulo + 2.09) * 127.5) + 127.5; // deslocado 120°
  int b = (sin(angulo + 4.18) * 127.5) + 127.5; // deslocado 240°

  ledcWrite(CANAL_R, r);
  ledcWrite(CANAL_G, g);
  ledcWrite(CANAL_B, b);

  angulo += 0.05;
  if (angulo > 2 * PI) {
    angulo = 0;
  }

  delay(20);
}
