#include <Servo.h>
int servo_pin;
int moisture_sensor_pin;
int touch_sensor_pin;
int ms_reading;
int ts_reading;

Servo servo;

void setup() 
{
      servo_pin = 8;
      moisture_sensor_pin = A0;
      touch_sensor_pin = 2;

      ms_reading = 0;
      ts_reading = false;
       
      Serial.begin(9600);
      servo.attach(servo_pin);
      servo.write(90);
      
      pinMode(moisture_sensor_pin, INPUT);
      pinMode(touch_sensor_pin, INPUT);

      Serial.println("Your Smart Segregator is ready to Segregate!");
}

void loop() 
{
      ms_reading = analogRead(moisture_sensor_pin);
      ts_reading = digitalRead(touch_sensor_pin);
      Serial.println("Moisture Sensor Reading: ");
      Serial.println(ms_reading);
      if (ms_reading<1015 && ts_reading == true)
      {
       servo.write(180);
      }

      else if (ms_reading>1015 && ts_reading == true)
      {
       servo.write(0);
      }

      else 
      {
       servo.write(90);
      }
}
