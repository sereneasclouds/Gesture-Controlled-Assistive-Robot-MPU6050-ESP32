# Gesture-Controlled Assistive Robot: MPU6050 and ESP32

A **gesture-controlled assistive robot proof-of-concept** developed using an **MPU6050 inertial sensor and ESP32 microcontroller** to translate hand gestures into robot navigation commands.

The project explores gesture-based human–robot interaction for mobility assistance, with the aim of providing an intuitive control interface for an assistive robotic platform.

The system combines embedded control, inertial sensing, custom electronics, motor control, and a fabricated robotic chassis.

---

## Project Overview

The project investigates the use of **hand gestures as an intuitive control mechanism for an assistive mobile robot**.

An **MPU6050 accelerometer/gyroscope** is used to detect changes in hand orientation and movement. The ESP32 processes the sensor data and converts recognised gestures into corresponding navigation commands for the robot.

The physical prototype includes a custom-built robotic chassis and custom electronics developed for motor control and power distribution.

---

## Key Features

- Gesture-based robot navigation
- MPU6050 accelerometer and gyroscope sensing
- ESP32-based embedded control
- Real-time gesture detection
- Gesture-to-navigation command conversion
- Custom electronics integration
- Motor control using an MDD10A motor driver
- Custom power distribution board
- Fabricated mobile robot chassis
- Assistive robotics proof-of-concept

---

## System Concept

```text
Hand Movement / Gesture
          ↓
      MPU6050
          ↓
   Sensor Data Acquisition
          ↓
        ESP32
          ↓
   Gesture Recognition
          ↓
 Navigation Command
          ↓
   Motor Controller
          ↓
     Robot Movement
