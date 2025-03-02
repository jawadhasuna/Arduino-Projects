#include<Servo.h>
Servo myservo;
int val;
int pin=A0;

void setup() 
{
myservo.attach(9);
}

void loop()
{
val = analogRead(pin);
val=map(val,0,1023,0,180);
myservo.write(val);
delay(15);
}
