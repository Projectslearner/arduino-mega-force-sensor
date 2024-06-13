/*
    Project name : Force Sensor
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-force-sensor
*/

const int forceSensorPin = A0; // Analog pin connected to the force sensor
float sensorVoltage;           // Variable to store the sensor voltage
float appliedForce;            // Variable to store calculated force

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog voltage from the force sensor
  int sensorValue = analogRead(forceSensorPin);
  
  // Convert the analog value to voltage (assuming 5V reference)
  sensorVoltage = sensorValue * (5.0 / 1023.0);
  
  // Calculate the applied force (example calculation for a resistive force sensor)
  // Replace this calculation with your specific force sensor calibration
  appliedForce = sensorVoltage * 10.0; // Example: linear relation with a factor
  
  // Print the sensor voltage and calculated force to the Serial Monitor
  Serial.print("Sensor Voltage: ");
  Serial.print(sensorVoltage);
  Serial.print(" V\t");
  Serial.print("Applied Force: ");
  Serial.print(appliedForce);
  Serial.println(" N");
  
  delay(500); // Add a small delay before the next reading
}
