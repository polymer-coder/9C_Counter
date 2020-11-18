#include <Arduino.h>
#include <Controllino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(PE4, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
    // turn the LED on (HIGH is the voltage level)
  Serial.println('Program Started');
  digitalWrite(PE4, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(PE4, LOW);
   // wait for a second
  delay(1000);
  //testing git 
}