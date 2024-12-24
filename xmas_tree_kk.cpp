// Sequential and Blinking LEDs C++ Code for Arduino
//Mulearn X MAS Special IOT Competetion
//By Karthik Krishnan
//SJCET PALAI

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

// Function to blink all LEDs
void blinkAll(int blinkCount, int delayTime) {
  for (int i = 0; i < blinkCount; i++) {
    for (int j = 0; j < pinCount; j++) {
      digitalWrite(pins[j], HIGH);
    }
    delay(delayTime);
    for (int j = 0; j < pinCount; j++) {
      digitalWrite(pins[j], LOW);
    }
    delay(delayTime);
  }
}

// Loop function
void loop() {
  // Sequentially turn LEDs on and off
  for (int i = 0; i < pinCount; i++) {
    digitalWrite(pins[i], HIGH); // Turn the current LED on
    delay(300);                  // Wait for 300 milliseconds
    digitalWrite(pins[i], LOW);  // Turn the current LED off
    delay(300);                  // Wait for 300 milliseconds
  }

  // Blink all LEDs 3 times
  blinkAll(3, 500);
}
