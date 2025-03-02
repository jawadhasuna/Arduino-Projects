#include <AFMotor.h>
#include<Servo.h>
Servo myservo;
int pos = 0;
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
void straight();
void reverse();
void pause();
void left();
void right();


const int trigPin = 14; 
const int echoPin = 15;  
void ultrasonic();
long duration; 
int distance;
//void servomove();

void setup() {
   myservo.attach(44);  
   pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output  
   pinMode(echoPin, INPUT);
   Serial.begin(9600);
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

1;
for(pos=0;pos<=90;pos+=1)
{myservo.write(pos);
delay(1);
}
ultrasonic();
//delay(1000);
if ( distance<10)
{
  pause();
  delay (500);
  left();
  delay(1300);
  }
else
{
straight();
}
2;
for(pos=90;pos<=180;pos+=1)
{myservo.write(pos);
delay(1);
}
ultrasonic();
//delay(1000);
if ( distance<10)
{
  pause();
  delay (500);
  left();
  delay(1300);
  }
else
{
straight();
}
3;
for (pos=180;pos>=0;pos-=1)
{
myservo.write(pos);
delay(1);
}
ultrasonic();
//delay(1000);
if ( distance<10)
{
  pause();
  delay (500);
  left();
  delay(1300);
  }
else
{
straight();
}
}





void ultrasonic()
{
    // clears the trigPin first  
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  // Sets the trigPin on HIGH state for 10 micro seconds  
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW); 
     
  duration = pulseIn(echoPin, HIGH);  // measures the time in microseconds
  distance = duration *0.013385834 / 2;  // printing the data on serial monitor, Measured in INCHES  
  Serial.print(" Distance = ");  
  Serial.print(distance);  
  Serial.println(" Inch");
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
