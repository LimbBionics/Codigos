#include <Servo.h>  // add servo library
//Ojo! Vibra mucho usando la fuente pa protoboard!!!!
//Usar pilas pa llegar a los 5V
 
Servo myservo;  // create servo object to control a servo
 
int potpin = A0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
 
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
//  Serial.begin(9600);
}
 
void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
 // Serial.print("Ángulo:  ");
 // Serial.println(val);
  delay(10);                           // waits for the servo to get there
}
