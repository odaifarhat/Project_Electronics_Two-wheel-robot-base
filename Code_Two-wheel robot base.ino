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