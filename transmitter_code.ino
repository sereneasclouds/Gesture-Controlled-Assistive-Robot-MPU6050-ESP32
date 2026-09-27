#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#define speed_pin 25;
#define dir_pin 26;
const int max_speed_pwm = 900;

Adafruit_MPU6050 mpu;

void setup(void) {
  Serial.begin(115200);
  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
    }
  }
  Serial.println("MPU6050 Found!");
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_250_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_5_HZ);
}
void set_motors() {
  // Acceleration in x axis will decide the speed, -9.9<x<9.9 maps to PWM to motors -1023<=x<=1023.
  // Acceleration in y will be ignored
  // Acceleration in z will decide the direction, -9.9<z<9.9 maps direction from -1<=dir<=1
}

void loop() {
  /* Get new sensor events with the readings */
  sensors_event_t a, g, t;
  mpu.getEvent(&a, &g, &t);

  /* Print out the values */
  int ax = int(a.acceleration.x * 10);
  Serial.print("Acceleration X: ");
  Serial.println(ax / 10);
  Serial.print("Acceleration Z: ");
  Serial.println(a.acceleration.z);
  int speed = constrain(((ax > 25 || ax < -25) ? map(ax, -90, 90, -max_speed_pwm, max_speed_pwm) : 0), -max_speed_pwm, max_speed_pwm);
  int dir = 0;
  Serial.println(speed);

  delay(500);
}