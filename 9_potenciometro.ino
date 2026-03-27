#define POT1 34
#define POT2 32
#define POT3 35

void setup() {
  Serial.begin(115200);
}

void loop() {
  int valor1 = analogRead(POT1);
  int valor2 = analogRead(POT2);
  int valor3 = analogRead(POT3);

  Serial.print("POT1: ");
  Serial.print(valor1);

  Serial.print(" | POT2: ");
  Serial.print(valor2);

  Serial.print(" | POT3: ");
  Serial.println(valor3);

  delay(200);
}
