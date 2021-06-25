# Project_Electronics_Two-wheel-robot-base

Motor drive design and implementation for two-wheel robot base.

we'll be looking at how to power and drive a DC motor with an L293D(H brageI298) and an Arduino,but you can use any Arduino that provides enough voltage for your motor, and has 2 digital output pins). The L293D is a 16-pin Motor Driver IC which can control up to two DC motors simultaneously, in any direction.


#  Component:

	9V Battery.
  
  Arduino Uno R3.
  
  H-bridge Motor Driver.

  2_DC Motor.

#  Connecting the components:

First, let's hook up the components on the breadboard. Below you'll see a pin diagram of the L293D - note the location of each of the pins, relative to the notch at the top.

![850b98a-L293D-pinout png](https://user-images.githubusercontent.com/56201060/123436668-85898800-d5d7-11eb-9f99-f65d55a2c375.jpeg)

#  Circuit connection steps:


Step_1, Connect ground and power (9v) Breadboard then L293D.

Step_2, Connect the H-bridge pins Enable 1 & 2 to digtal(pwm) in arduino pin9.

Step_3, Connect the H-bridge pins Enable 3 & 4 to digtal(pwm) in arduino pin3.

Step_4, Connect the H-bridge pins input 1 & 2 to digtal(pwm) in arduino pin 8 & 7.

Step_5, Connect the H-bridge pins input 3 & 4 to digtal(pwm) in arduino pin 10 & 11.

Step_6, Connect the H-bridge pins Output 1 & 2 to DC Motor(Left)  Terminal 1 & 2.

Step_7, Connect the H-bridge pins Output 3 & 4 to DC Motor(Right)  Terminal 1 & 2.

See the picture:

![Motor drive design  for two-wheel robot base](https://user-images.githubusercontent.com/56201060/123438642-976c2a80-d5d9-11eb-8513-8ec4c540c68b.png)


# Code:



