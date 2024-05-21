const int leds[] = {2, 4, 5};
const int numLeds = sizeof(leds) / sizeof(leds[0]);
const int delayValue = 500;

void setup() {
  for(int i = 0; i < numLeds; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for(int i = 0; i < numLeds; i++){
    digitalWrite(leds[i], HIGH);
    delay(delayValue);
    digitalWrite(leds[i], LOW);
    delay(delayValue);
  }
}
