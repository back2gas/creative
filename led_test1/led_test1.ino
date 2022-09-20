unsigned int PIN_LED;
unsigned int count, toggle;

void setup() {
  PIN_LED = 13;
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial) {
    ;
  }
  Serial.println("Hellow World!");
  count= toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, ++toggle);
  delay(1000);
  digitalWrite(PIN_LED, --toggle);
  delay(1000);
}

int toggle_state(int toggle) {
  return toggle ;
}