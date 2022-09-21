void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  digitalWrite(7, HIGH);
  delay(1000);
  for(int i = 0; i <= 4; i++){
    digitalWrite(7, LOW);
    delay(100);
    digitalWrite(7, HIGH);
    delay(100);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while(1){
    digitalWrite(7, LOW);
  }
}
