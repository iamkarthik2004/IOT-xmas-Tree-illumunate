// Sequential and All LEDs On/Off C++ Code for Arduino

// Pin Definitions
const int pins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const int pinCount = sizeof(pins) / sizeof(pins[0]);

// Setup function
void setup() {
  // Initialize all pins as OUTPUT
  for (int i = 0; i < pinCount; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

// Loop function
void loop() {
  // Sequentially turn LEDs on and off
  for (int i = 0; i < pinCount; i++) {
    digitalWrite(pins[i], HIGH); // Turn the current LED on
    delay(500);                  // Wait for 500 milliseconds
    digitalWrite(pins[i], LOW);  // Turn the current LED off
    delay(500);                  // Wait for 500 milliseconds
  }

  // Turn all LEDs on
  for (int i = 0; i < pinCount; i++) {
    digitalWrite(pins[i], HIGH);
  }
  delay(1000); // Keep all LEDs on for 1 second

  // Turn all LEDs off
  for (int i = 0; i < pinCount; i++) {
    digitalWrite(pins[i], LOW);
  }
  delay(1000); // Wait for 1 second before repeating the loop
}
