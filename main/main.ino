#include <Stepper.h>
#include <Servo.h>

#define RIGHT_RSSI_PIN A0
#define LEFT_RSSI_PIN A1
#define SERVO_PIN 9
#define ANALOG_SCALE 5.0 / 1023.0
#define LOOP_REFRESH 150

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
Servo servo; 

void setup() {
  myStepper.setSpeed(60);
  Serial.begin(115200);
  servo.attach(SERVO_PIN);
  delay(500);
  servo.write(0);
}

void loop() {
  float rssiLast;
  float rssiRight = 1023.0 - analogRead(RIGHT_RSSI_PIN);
  float rssiLeft = 1023.0 - analogRead(LEFT_RSSI_PIN);
  //float rssiRate = (rssi - rssiLast) / LOOP_REFRESH;

  int servoPos = servo.read();
  
  // Display rssi value
  Serial.print(rssiRight);
  Serial.print( "   |   " );
  Serial.println(rssiLeft);
  
  delay(LOOP_REFRESH);
  // rssiLast = rssi;
}
