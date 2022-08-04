#include <SimpleWebSerial.h>
SimpleWebSerial WebSerial;

#include <Servo.h>
Servo servo1;
int servoPin = 9;

void setup() {
    Serial.begin(57600);
    WebSerial.on("browser-event", doSomething);
}

void doSomething(JSONVar parameter) {
  if parameter.equals("right"){
      servo1.write(180);
  }else if parameter.equals("left"){
      servo1.write(0);
  }
}
void loop() {
    WebSerial.check();
}
