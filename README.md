# ArduinoReconSentry

> **An Arduino-based autonomous sentry prototype featuring radar detection and automated engagement simulation.**

**Disclaimer: This is a proof-of-concept/educational project. The "neutralization" mechanism is simulated (e.g., laser pointer, foam dart) and must not be used to harm people, animals, or property. The creator assumes no liability for misuse.**

## Overview
This project implements the core logic of an autonomous sentry system. Using a radar motion sensor (e.g., RCWL-0516), it continuously monitors a defined area. Upon detecting movement, the system calculates the approximate location, rotates a servo-mounted platform to face the target, and triggers a simulated "engagement" sequence.

## Hardware Components
*   Arduino Uno / Mega / Nano
*   HC-SR04 Ultrasonic module
*   SG90 / MG996R Servo Motor
*   Breadboard, Jumper Wires, Power Supply

## Getting Started
1.  Clone this repository.
2.  Open the `.ino` file in the Arduino IDE.
3.  Connect your components as per the wiring diagram (`/docs/wiring.png`).
4.  Upload the sketch to your board.
5.  Power the system and observe the scanning behavior.

## License
This project is licensed under the MIT License - see the LICENSE file for details.
