void setup() {
  // put your setup code here, to run once:
  pinMode(03, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(03, High);
  delay(1000);
   digitalWrite(03, Low);
  delay(1000);
}
