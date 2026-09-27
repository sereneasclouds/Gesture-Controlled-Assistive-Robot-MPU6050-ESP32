# Gesture-Controlled Assistive Robot

A gesture-controlled assistive mobility robot developed as a proof-of-concept for hands-free robotic navigation. The system uses an **MPU6050 accelerometer/gyroscope and ESP32-based embedded control** to interpret hand gestures and convert them into directional commands for robot movement.

The project combines **embedded C, custom electronics, sensor-based gesture recognition, motor control, and robotic mobility** to demonstrate an intuitive human-robot interaction interface.

---

## Project Overview

The Gesture-Controlled Assistive Robot is designed to provide an alternative method of controlling a mobile robot through hand gestures rather than conventional switches or joysticks.

A wearable gesture-control unit uses an **MPU6050 inertial measurement unit (IMU)** to detect changes in hand orientation and acceleration. These movements are processed by the microcontroller and translated into navigation commands such as forward, backward, left, and right.

The corresponding commands can then be used to control the robot's movement through its motor-control system.

The project was developed as a **mobility-support proof-of-concept**, demonstrating how gesture recognition can be integrated with an embedded robotic platform.

---

## Key Features

- Gesture-based robot navigation
- MPU6050-based motion and orientation sensing
- ESP32-based embedded control
- Embedded C implementation
- Real-time gesture interpretation
- Directional navigation using hand movements
- Custom electronics and power distribution
- MDD10A motor driver integration
- Custom PCB designed using KiCad
- Fabricated mobile robot chassis
- Designed as a mobility-support proof-of-concept

---
## Gesture Transmitter

`transmitter_code.ino` contains the embedded firmware responsible for the gesture-control interface.

The transmitter reads motion data from the MPU6050 and processes the sensor measurements to identify the user's intended navigation command.

This firmware represents the core **gesture-to-control concept** of the project, connecting human hand movements with robotic navigation.
## System Concept

The system follows a gesture-to-navigation approach:

```text
Hand Movement
      │
      ▼
   MPU6050
      │
      ▼
Gesture Transmitter
      │
      │  Navigation Command
      ▼
   ESP32
      │
      ▼
 Motor Control
      │
      ▼
 Mobile Robot
