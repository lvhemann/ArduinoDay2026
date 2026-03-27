#define BTN1 36
#define BTN2 39

void setup() {
  Serial.begin(115200);

  pinMode(BTN1, INPUT); // sem pullup interno!
  pinMode(BTN2, INPUT);
}

void loop() {
  int estado1 = digitalRead(BTN1);
  int estado2 = digitalRead(BTN2);

  Serial.print("BTN1: ");
  Serial.print(estado1);

  Serial.print(" | BTN2: ");
  Serial.println(estado2);

  delay(200);
}
