const int ldrPin = A0; // Pin connected to LDR
const int ledPin = 2;  // Pin connected to LED
int ldrValue = 0;      // Variable to store LDR value
int threshold = 500;   // Threshold value to turn LED on/off

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600);      // Initialize serial communication
}

void loop() {
  ldrValue = analogRead(ldrPin); // Read the value from LDR
  Serial.println(ldrValue);      // Print the LDR value to Serial Monitor

  if (ldrValue < threshold) {
    digitalWrite(ledPin, LOW); // Turn LED on if LDR value is below threshold
  } else {
    digitalWrite(ledPin, HIGH);  // Turn LED off if LDR value is above threshold
  }

  delay(100); // Wait for 100 milliseconds
}