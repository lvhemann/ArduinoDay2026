#define POT_R 34
#define POT_G 32
#define POT_B 35

#define PIN_R 15
#define PIN_G 2
#define PIN_B 4

void setup() {
  Serial.begin(115200);

  // PWM nos pinos do RGB
  ledcAttach(PIN_R, 5000, 8);
  ledcAttach(PIN_G, 5000, 8);
  ledcAttach(PIN_B, 5000, 8);
}

void loop() {
  // Leitura dos potenciômetros (0 a 4095)
  int leituraR = analogRead(POT_R);
  int leituraG = analogRead(POT_G);
  int leituraB = analogRead(POT_B);

  // Converte de 0-4095 para 0-255
  int valorR = map(leituraR, 0, 4095, 0, 255);
  int valorG = map(leituraG, 0, 4095, 0, 255);
  int valorB = map(leituraB, 0, 4095, 0, 255);

  // Escreve no LED RGB
  ledcWrite(PIN_R, valorR);
  ledcWrite(PIN_G, valorG);
  ledcWrite(PIN_B, valorB);

  // Mostra no Serial
  Serial.print("R: ");
  Serial.print(valorR);
  Serial.print(" | G: ");
  Serial.print(valorG);
  Serial.print(" | B: ");
  Serial.println(valorB);

  delay(50);
}
