#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
 void straight();
 void reverse();
 void pause();
 void left();
 void right();

void setup() 
{
  //Set initial speed of the motor & stop
   motor1.setSpeed(200);
  motor1.run(RELEASE);
   motor2.setSpeed(200);
  motor2.run(RELEASE);
   motor3.setSpeed(200);
  motor3.run(RELEASE);
   motor4.setSpeed(200);
  motor4.run(RELEASE);
}

void loop() 
{
 straight();
 delay(2000);
  pause();
 delay(2000);
  reverse();
 delay(3000);
 pause();
 delay(2000);
  left();
 delay(2000);
  right();
 delay(2000);
}

void straight()
{
   motor1.run(FORWARD);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(FORWARD);
}
void pause()
{
 motor1.run(RELEASE);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(RELEASE);
  
}
void reverse()
{
   motor1.run(BACKWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(BACKWARD);
}
void left()
{
   motor1.run(FORWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(FORWARD);
}
void right()
{
   motor1.run(BACKWARD);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(BACKWARD);
}
