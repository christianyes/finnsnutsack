int pins[] = {8, 9, 10, 11, 12, 13, 12, 11, 10, 9, 7, 8, 4, 3, 2};
int arrSize = sizeof(pins) / sizeof(int);

void setup() {
  for (int i = 0; i < arrSize; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

  
void loop() {
  for (int i = 0; i < arrSize; i++) {
    digitalWrite(pins[i], HIGH);
    //digitalWrite(pins[i+1], HIGH);
    if (i != 0) {
      delay(analogRead(0));
    }
    resetPins();
  }
}

void resetPins() {
  for (int i = 0; i < arrSize; i++) {
    digitalWrite(pins[i], LOW);
  }
}
