# Photosynthesis-Inspired Light-Responsive Flower 🌞🌸

This project simulates a flower's response to sunlight using an **Arduino-based circuit** with a **light sensor** and a **servo motor**. The goal is to mimic the natural movement of a flower as it reacts to sunlight levels, much like photosynthesis-driven movement.

## Project Overview
The setup uses a **servo motor** to control the angle of a LEGO flower model, adjusting its position based on light levels detected by a light sensor. LEDs provide visual feedback on the amount of light detected:
- **Red LED**: No light detected
- **Yellow LED**: Partial light detected
- **Green LED**: Full light detected

As light levels change, the flower’s orientation also changes:
- **No Light**: The flower turns away.
- **Moderate Light**: The flower partially faces the light.
- **Full Light**: The flower fully faces the light.

## Components Used
- **Arduino Board**
- **Breadboard**
- **Servo Motor**
- **Light Sensor (e.g., Photoresistor)**
- **LEDs (Red, Yellow, Green)**
- **Resistors**
- **Wiring**
- **LEGO Flower Model**

## How It Works
1. **Light Detection**: The light sensor detects the surrounding light level.
2. **LED Indication**: The LEDs light up according to the detected light level.
3. **Servo Movement**: The servo motor adjusts the LEGO flower’s orientation:
   - **No Light (Red LED)**: Flower turns away from the light.
   - **Partial Light (Yellow LED)**: Flower partially faces the light.
   - **Full Light (Green LED)**: Flower fully faces the light.

This setup provides an interactive way to simulate phototropism, where plants move toward or away from light sources.

## Setup Instructions
1. **Assemble the Circuit**:
   - Connect the light sensor to the Arduino analog pin.
   - Attach each LED (red, yellow, and green) to digital pins with appropriate resistors.
   - Connect the servo motor to a PWM digital pin.
2. **Upload Code**: Write and upload the Arduino code that reads light levels and controls both the LEDs and servo motor.
3. **Test**: Adjust light levels to observe the flower's movement in response to sunlight simulation.

## Usage
- **Simulate Light Conditions**: Adjust the light shining on the sensor.
- **Observe Flower Movement**: Watch how the flower responds by adjusting its position, mimicking real plant behavior.

## Future Enhancements
- Add more sensors to detect environmental factors like temperature or humidity.
- Implement an LCD display to show real-time light levels.

## Inspiration
This project is inspired by **phototropism**, where plants grow towards light, a process essential to **photosynthesis**.

Enjoy watching your flower come to life as it "seeks" sunlight! 🌱
