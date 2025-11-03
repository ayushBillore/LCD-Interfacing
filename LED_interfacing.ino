// Define the pins where the LEDs are connected
const int ledPins[] = {10, 11, 12}; // Red, Green, Yellow

// Timer delay
const int timer = 200; // 200 milliseconds

void setup() {
    // Initialize each LED pin as an output
    for (int thisPin = 0; thisPin < 3; thisPin++) {
        pinMode(ledPins[thisPin], OUTPUT);
    }
}

void loop() {
    // Turn on LEDs one by one
    for (int thisPin = 0; thisPin < 3; thisPin++) {
        digitalWrite(ledPins[thisPin], HIGH); // Turn the LED on
        delay(timer);                         // Wait for the specified time
        digitalWrite(ledPins[thisPin], LOW);  // Turn the LED off
    }
    // Turn off LEDs one by one in reverse order
    for (int thisPin = 2; thisPin >= 0; thisPin--) {
        digitalWrite(ledPins[thisPin], HIGH); // Turn the LED on
        delay(timer);                         // Wait for the specified time
        digitalWrite(ledPins[thisPin], LOW);  // Turn the LED off
    }
}



// Multiple LEDs Sequential Blinking Example

const int ledPins[] = {10, 11, 12}; // Red, Green, Yellow
const int timer = 200;              // Delay time in ms

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Forward sequence
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(timer);
    digitalWrite(ledPins[i], LOW);
  }

  // Reverse sequence
  for (int i = 2; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(timer);
    digitalWrite(ledPins[i], LOW);
  }
}
