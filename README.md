# Project_Electronics_Two-wheel-robot-base

Motor drive design and implementation for two-wheel robot base.

we'll be looking at how to power and drive a DC motor with an L293D(H brageI298) and an Arduino,but you can use any Arduino that provides enough voltage for your motor, and has 2 digital output pins). The L293D is a 16-pin Motor Driver IC which can control up to two DC motors simultaneously, in any direction.


#  Component:

  9V Battery.
  
  Arduino Uno R3.
  
  H-bridge Motor Driver.

  2_DC Motor.
  
  Breadboard.
  
  Wires.

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

/* Motor drive design and implementation for two-wheel robot base.
25 june 2021 _ Eng.Odai Farhat
*/

// Define the pin numbers

int motorPin1 = 3;     //Right Enable 3 & 4.
int motorPin2 = 10;    //Right input3 Contact pin10. 
int motorPin3 = 11;    //Right input4 Contact pin11.
int motorPin4 = 7;     //left  input2 Contact pin7.
int motorPin5 = 8;     //left  input1 Contact pin8.
int motorPin6 = 9;     //left  Enable 1 & 2 Contact pin9.


void setup() {
  
  // Set the pin modes of the above IO pins to OUTPUT.
  
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(motorPin5, OUTPUT);
  pinMode(motorPin6, OUTPUT);
}

void loop() {
  
  // Turn the motor in one direction.
  
  digitalWrite(motorPin1, HIGH);       //HIGH Enable 3 & 4 Contact pin3.
  digitalWrite(motorPin2, HIGH);       //input3 Contact pin10. 
  digitalWrite(motorPin3, LOW);        //input4 Contact pin11.
  digitalWrite(motorPin4, HIGH);       //input2 Contact pin7.
  digitalWrite(motorPin5, LOW);        //input1 Contact pin8.
  digitalWrite(motorPin6, HIGH);       //HIGH Enable 1 & 2 Contact pin9.
}

                                                      /* END */
