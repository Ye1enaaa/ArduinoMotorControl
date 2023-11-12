#define MOTOR_PIN D1 // Define the GPIO pin you connected the motor to

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
}

void loop() {
  // Turn the motor on
  digitalWrite(MOTOR_PIN, HIGH);
  delay(1000); // Motor on for 1 second

  digitalWrite(MOTOR_PIN, LOW);
  delay(2000);

  digitalWrite(MOTOR_PIN, HIGH);
  delay(600);
}
