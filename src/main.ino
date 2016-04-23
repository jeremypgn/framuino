#include <SoftwareSerial.h>
SoftwareSerial debug (12, 13);

#include "func/wait.ino"

void setup(){

  Serial.begin(9600);
  debug.begin(9600);

}

void loop() {
  bool wait_return = wait("sec", 1);
  Serial.println(wait_return);
}
