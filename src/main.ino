#include <SoftwareSerial.h>
SoftwareSerial debug (12, 13);

#include "func/wait.ino"

void setup(){

  Serial.begin(9600);
  debug.begin(9600);

}

void loop() {
  //Loop
}
