#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
    Serial.begin(115200); // Initialize serial communication at 115200 baud rate
    
    // Wait for the serial port to connect (required for Native USB boards like Leonardo/Micro/Zero)
    while (!Serial) {
        ; 
    }

    Serial.println("Serial communication initialized successfully!");
}

void loop() {
    Serial.println("Board connected! Hello from VS Code / PlatformIO.");
    delay(1000); // Send message every 1 second
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}