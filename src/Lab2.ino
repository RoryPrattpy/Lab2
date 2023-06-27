SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D5, OUTPUT);
  pinMode(D6, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(D5, 1);
  float num1 = analogRead(A5) / 4.095;
  Serial.println(num1);
  delay(num1);
  float num2 = analogRead(A5) / 4.095;
  Serial.println(num2);
  digitalWrite(D5, 0);
  delay(num2);
}