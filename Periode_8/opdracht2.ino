/************************** Module Header *******************************\
Project:      Opdracht1
Auteur:       Dèvon Thomassen
Aanmaakdatum: 13-05-2019
Module naam:  opdracht1.ino
\************************************************************************/

// Motor 1
int enable = 11;
int input1 = 10;
int input2 = 12;

// Motor 2
int enable2 = 3;
int input3 = 4;
int input4 = 2;

void setup() {
  // Motor 1
  pinMode(enable, OUTPUT);
  pinMode(input1,OUTPUT);
  pinMode(input2, OUTPUT);

  // Motor 2
  pinMode(enable2, OUTPUT);
  pinMode(input3,OUTPUT);
  pinMode(input4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   Robot(40, 1); 
   delay(1000);
   Robot(40, 3); 
   delay(500); 
   Robot(100, 1); 
   delay(5000); 
   Robot(0, 0);
   delay(5000);
}

void Motor1(byte speed, byte direction){
  analogWrite(enable, speed);
  if (direction == 0) {
    // Stop
    digitalWrite(input1, LOW);
    digitalWrite(input2, LOW);
  }
  else if (direction == 1){
    // Vooruit
    digitalWrite(input1, HIGH);
    digitalWrite(input2, LOW);
  }
  else if (direction == 2) {
    // Achteruit
    digitalWrite(input1, LOW);
    digitalWrite(input2, HIGH);
    
  }
}

void Motor2(byte speed, byte direction) {
  analogWrite(enable2, speed);
  if (direction == 0) {
    // Stop
    digitalWrite(input3, LOW);
    digitalWrite(input4, LOW);
  }
  else if (direction == 1){
    // Vooruit
    digitalWrite(input3, HIGH);
    digitalWrite(input4, LOW);
  }
  else if (direction == 2) {
    // Achteruit
    digitalWrite(input3, LOW);
    digitalWrite(input4, HIGH);
    
  }
}

void Robot(byte speed, byte direction) {
  if (direction == 0) {
    // Stop
    // motor 1 en 2 uit snelhied = 0
    Motor1(speed, 0);
    Motor2(speed, 0);
  }
  else if (direction == 1) {
    // Vooruit
    // allebei aan
    Motor1(speed, 1);
    Motor2(speed, 1);
  }
  else if (direction == 2) {
    // Achteruit
    Motor1(speed, 2);
    Motor2(speed, 2);
  }
  else if (direction == 3) {
    // Rechts vooruit
    // motor 1 half motor 2 100
    Motor1(speed/2, 1);
    Motor2(speed, 1);
  }
  else if (direction == 4) {
    // Links vooruit
    Motor1(speed, 1);
    Motor2(speed/2, 1);
  }
  else if (direction == 5) {
    // Rechts achteruit
    Motor1(speed/2, 2);
    Motor2(speed, 2);
  }
  else if (direction == 6) {
    // Links achteruit
    Motor1(speed, 2);
    Motor2(speed/2, 2);
  }
}
