#include<Servo.h>
Servo myservo;
int pos = 0;
void setup()
{
myservo.attach(44);

}

void loop() 
{
1;
for(pos=0;pos<=90;pos+=1)
{myservo.write(pos);
delay(1);
}
delay(1000);

2;
for(pos=90;pos<=180;pos+=1)
{myservo.write(pos);
delay(1);
}
delay(1000);
3;
for (pos=180;pos>=0;pos-=1)
{
myservo.write(pos);
delay(1);
}
delay(2000);
}
