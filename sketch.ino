const int pinoLed = 22;
const int piscada = 5;

void setup() {
  pinMode(pinoLed, OUTPUT);

  for(int i = 0; i < piscada; i++){
    digitalWrite(pinoLed, HIGH);
    delay(500);
    digitalWrite(pinoLed, LOW);
    delay(500);
  }
}

void loop() {
  
}
