#include<Servo.h>
Servo myservo;
int pos = 0;
int ir=2;
void setup()
{
pinMode(ir,INPUT);

myservo.attach(9);
myservo.write(0);
}

void loop()
{
 int value=digitalRead(ir);
if(value==1)
{for(pos=0;pos<=180;pos+=1)
{myservo.write(pos);
delay(1);}
}
}
