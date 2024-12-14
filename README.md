# Traffic_Light_Using-Arduino
Arduino Traffic Light and Music Light System

Overview

This project simulates a traffic light system and a music light pattern using an Arduino microcontroller. It also incorporates a servo motor to demonstrate additional functionality. 
The code is designed to switch between a traffic light sequence and a music light pattern, providing an engaging demonstration of LED and motor control.

Features:

Traffic Light Simulation: A realistic traffic light sequence with red, yellow, and green LEDs.

        Red light (Stop) for 5 seconds.

        Yellow light (Caution) for 2 seconds.

        Greenlight (Go) for 5 seconds, including a blinking effect for the last 2 seconds.

Servo Motor Control: A servo motor rotates from 90° to 0° and back to 90° during the cycle.

Components Required:

        Arduino Board (e.g., Uno, Mega, Nano)

        3 LEDs:

                Red

                Yellow

                Green

        Servo Motor

        Resistors (appropriate values for LEDs)

        Connecting Wires

        Breadboard

        Circuit Diagram

        Connect the red LED to pin 2 through a resistor.

        Connect the yellow LED to pin 3 through a resistor.

        Connect the green LED to pin 4 through a resistor.

        Connect the servo motor signal pin to pin 9.

Ensure all components share a common ground with the Arduino board.

Code Explanation

The code has two main functionalities:

        1. Traffic Light Simulation A loop manages the red, yellow, and green LEDs to mimic a real-life traffic light. The green light blinks for the last 2 seconds of its active phase.

        2. Music Light Pattern A sequence in which the LEDs (red, yellow, and green) blink alternately, creating a music light effect.

        3. Servo Motor Functionality

The servo motor rotates from 90° to 0° and back to 90° during the traffic light cycle.
