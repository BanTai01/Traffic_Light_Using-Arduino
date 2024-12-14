#include <Servo.h>

Servo servoMotor; // Create a servo object

int servoPin1 = 9; // Define the pin for the servo motor

int redLight = 2; // Red light pin (Stop)
int yellowLight = 3; // Yellow light pin (Caution)
int greenLight = 4; // Green light pin (Go)

void setup() {
  pinMode(redLight, OUTPUT); // Set light pins as outputs
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  servoMotor.attach(servoPin1); // Attach the servo to its pin
}

void loop() {
  // Red light ON (Stop) for 5 seconds
  digitalWrite(redLight, HIGH);
  digitalWrite(yellowLight, LOW);
  digitalWrite(greenLight, LOW);
  delay(5000);

  // Yellow light ON (Caution) for 2 seconds
  digitalWrite(redLight, LOW);
  digitalWrite(yellowLight, HIGH);
  digitalWrite(greenLight, LOW);
  delay(2000);

  // Green light ON (Go) for 3 seconds
  digitalWrite(redLight, LOW);
  digitalWrite(yellowLight, LOW);
  digitalWrite(greenLight, HIGH);
  delay(3000);

  // Green light blinks for the last 2 seconds
  for (int i = 0; i < 3; i++) {
    digitalWrite(greenLight, LOW);
    delay(333); // Off for 333ms
    digitalWrite(greenLight, HIGH);
    delay(333); // On for 333ms
  }

  // Yellow light ON (Caution) for 2 seconds
  digitalWrite(greenLight, LOW);
  digitalWrite(yellowLight, HIGH);
  delay(2000);

  // Red light ON (Stop) for 5 seconds
  digitalWrite(yellowLight, LOW);
  digitalWrite(redLight, HIGH);
  delay(5000);

  // Preserve existing servo motor functionality
  digitalWrite(redLight, HIGH);
  delay(2000);

  // Rotate servo from 90° to 0°
  for (int angle = 90; angle >= 0; angle -= 1) {
    servoMotor.write(angle);
    delay(30); // Adjust speed of servo rotation if needed
  }

  delay(5000);

  digitalWrite(redLight, LOW);
  digitalWrite(yellowLight, HIGH);
  delay(2000);

  digitalWrite(yellowLight, LOW);
  digitalWrite(greenLight, HIGH);

  // Rotate servo from 0° to 90°
  for (int angle = 0; angle <= 90; angle += 1) {
    servoMotor.write(angle);
    delay(30); // Adjust speed
  }

  delay(5000);
  digitalWrite(greenLight, LOW);
}
