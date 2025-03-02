#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
 void straight();
 void reverse();
 void pause();
#define s0 49
#define s1 50
#define s2 51
#define s3 52
#define color 22
int frequency = 0;
void readcolor();
int value=0;




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
  pinMode(s0,OUTPUT);pinMode(s1,OUTPUT);pinMode(s2,OUTPUT);pinMode(s3,OUTPUT);pinMode(color,INPUT);  
  digitalWrite(s0,HIGH);digitalWrite(s1,LOW); 
}
void loop()
{
readcolor();
if (value==1)
{
  straight();
  delay(100);
  value=0;
  readcolor();
  
}
 else if (value==2)
{
  reverse();
  delay(100);
  value=0;
  readcolor();
} 
 
 else if(value=0);
 {
  pause();
 }
}

void readcolor()
{
//red:
digitalWrite(s2,LOW);digitalWrite(s3,LOW);
frequency = pulseIn(color,LOW);
int frequencyR = map(frequency,25,72,255,0);

//green:
digitalWrite(s2,HIGH);digitalWrite(s3,HIGH);
frequency = pulseIn(color,LOW);
int frequencyG = map(frequency,30,90,255,0);

//blue:
digitalWrite(s2,LOW);digitalWrite(s3,HIGH);
frequency = pulseIn(color,LOW);
int frequencyB = map(frequency,25,70,255,0);
//green:
   if(frequencyR >= 150 && frequencyR <= 250 && frequencyG >= 240 && frequencyG <= 290 && frequencyB >= 100 && frequencyB <= 170 )
      {
         
          value=1;
      }
          
//red:
  else if(frequencyR >= 245 && frequencyR <= 270 && frequencyG >= 50 && frequencyG <= 110 && frequencyB >= 80 && frequencyB <= 120 )
      { 
          value =2;
 
     }
else 
{
  value=0;
}
}


void straight()
{
   motor1.run(FORWARD);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(FORWARD);
}
void reverse()
{
   motor1.run(BACKWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(BACKWARD);
}
void pause()
{
 motor1.run(RELEASE);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(RELEASE);
  
}
