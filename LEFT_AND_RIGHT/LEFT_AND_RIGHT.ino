#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() 
{
  //Set initial speed of the motor & stop
   motor1.setSpeed(250);
  motor1.run(RELEASE);
   motor2.setSpeed(250);
  motor2.run(RELEASE);
   motor3.setSpeed(250);
  motor3.run(RELEASE);
   motor4.setSpeed(250);
  motor4.run(RELEASE);
}

void loop() 
{
 motor1.run(BACKWARD);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(BACKWARD);
 delay(3000);
 
 motor1.run(RELEASE);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(RELEASE);
 delay(2000);

 motor1.run(FORWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(FORWARD);
 delay(3000);
 
 motor1.run(RELEASE);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(RELEASE);
 delay(2000);
}
