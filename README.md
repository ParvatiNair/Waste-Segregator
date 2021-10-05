# Waste-Segregator
A platform which can segregate the waste placed on it into dry and wet garbage.

Requirements:
1. Arduino Uno and USB cable
2. Soil Moisture Sensor Module
3. Channel Capacitive Touch Sensor
4. SG90 Servo Motor
5. Jumper cables
6. Breadboard
7. Cardboard sheets

Software stack:
Arduino IDE

Language:
C++

Working:
1. The moisture sensor detects the moisture of the garbage placed on the platform and displays the reading on the serial monitor.
2. For the waste to separated, the touch sensor reading should be true. If it is false, the platform maintains a neutral state.
3. Servo motor turns in 0-90-180 degree angles to facilitate the segregation.
