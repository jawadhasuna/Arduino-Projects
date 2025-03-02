#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
 void straight();
 void reverse();
 void pause();
 void smallleft();
 void smallright();
 void lleft();
 void rright();
#define middle 22
#define left 52
#define right 23
int m;
int l;
int r;
void readsensor();
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
  pinMode(middle,INPUT);
  pinMode(left,INPUT);
  pinMode(right,INPUT);
  Serial.begin(9600);
  
  }
void loop()
{
readsensor();
if (l==0&&m==1&&r==0)
{straight();
}
else if (l==0&&m==1&&r==1)
{smallright();
}
else if (l==0&&m==0&&r==1)
{ rright();
}
else if (l==1&&m==0&&r==0)
{ smallleft();
}
else if (l==1&&m==1&&r==0)
{ lleft();
}
else if (l==1&&m==1&&r==1)
{ straight();
}
/*else if (l==0&&m==0&&r==0)
{ reverse();
}*/
/*readsensor();
if (l==0&&r==0)
{straight();
}
else if (l==0&&r==1)
{ rright();
}
else if (l==1&&r==0)
{ lleft();
}*/

}

void readsensor()
{Serial.println();
  m=digitalRead(middle);
  l=digitalRead(left);
  r=digitalRead(right);
  Serial.print(l);
  Serial.print(m);
  Serial.print(r);

}
void straight()
{
  motor1.setSpeed(160);
   motor2.setSpeed(160);
   motor3.setSpeed(160);
   motor4.setSpeed(160);
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
   motor1.setSpeed(200);
   motor2.setSpeed(200);
   motor3.setSpeed(200);
   motor4.setSpeed(200);
   motor1.run(BACKWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(BACKWARD);
}
void smallleft()
{
   motor1.setSpeed(200);
   motor2.setSpeed(200);
   motor3.setSpeed(200);
   motor4.setSpeed(200);
   motor1.run(FORWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(FORWARD);
}
void smallright()
{
   motor1.setSpeed(200);
   motor2.setSpeed(200);
   motor3.setSpeed(200);
   motor4.setSpeed(200);
   motor1.run(BACKWARD);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(BACKWARD);
}
void lleft()
{
   motor1.setSpeed(200);
   motor2.setSpeed(200);
   motor3.setSpeed(200);
   motor4.setSpeed(200);
   motor1.run(FORWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(FORWARD);
}
void rright()
{
   motor1.setSpeed(200);
   motor2.setSpeed(200);
   motor3.setSpeed(200);
   motor4.setSpeed(200);
   motor1.run(BACKWARD);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(BACKWARD);
}
