# Created by: Sean McLeod
# Created on: Oct 2020

# Rotates the servo 180 degrees and back to 0 degrees

import time
import board
import pulseio
from adafruit_motor import servo
 
# create a PWMOut object on Pin A2.
pwm = pulseio.PWMOut(board.D2, duty_cycle=2 ** 15, frequency=50)
 
# Create a servo object, my_servo.
my_servo = servo.Servo(pwm)
 
while True:
    for angle in range(0, 180):  # 0 - 180 degrees
        my_servo.angle = angle
        time.sleep(0.05)
    for angle in range(180, 0): # 180 - 0 degrees
        my_servo.angle = angle
        time.sleep(0.05)
