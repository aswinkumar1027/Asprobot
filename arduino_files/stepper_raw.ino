/* control a stepper motor with TB6600 stepper motor driver and Arduino without a library*/

// Define stepper motor connections and steps per revolution:

#define dirPin 2
#define stepPin 3
#define stepsPerRevolution 1600

void setup() {
  pinMode(stepPin, OUTPUT);         // Declare pins as output:
  pinMode(dirPin, OUTPUT);
}

void loop() {
  digitalWrite(dirPin, HIGH);       // Set the spinning direction clockwise:

  // Spin the stepper motor 1 revolution slowly:
  for (int i = 0; i < stepsPerRevolution; i++) 
  {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(2000);
  }

  delay(1000);

  
  digitalWrite(dirPin, LOW);

  for (int i = 0; i < stepsPerRevolution; i++) 
  {
    digitalWrite(stepPin, HIGH);        // result in 1 step:           
    delayMicroseconds(1000);            // delay to control speed of rotation
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
  }

