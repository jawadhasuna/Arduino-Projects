#include <AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
 void pause();
 void straight();
 void reverse();
 void lleft();
 void rright();
 void blutooth();
char alpha;
void setup()
{
 motor1.setSpeed(200);
  motor1.run(RELEASE);
   motor2.setSpeed(200);
  motor2.run(RELEASE);
   motor3.setSpeed(200);
  motor3.run(RELEASE);
   motor4.setSpeed(200);
  motor4.run(RELEASE); 
Serial.begin(9600);
}

void loop() 
{
bluetooth();
if (alpha=='F')
{
  straight();
}
else if (alpha=='B')
{
  reverse();
}
else if (alpha=='R')
{
  rright();
}
else if (alpha=='L')
{
  lleft(); 
}
else if (alpha=='S')
{
  pause(); 
}
else if (alpha=='I')
{
 straight();
 rright();
}
else if (alpha=='G')
{
 straight();
 lleft();
}
else if (alpha=='J')
{
 reverse();
 rright();
}
else if (alpha=='H')
{
 reverse();
 lleft();
}
}
void bluetooth()
{
if (Serial.available()>0)
   {
    alpha = Serial.read();
    Serial.println(alpha);
   }
  
}
