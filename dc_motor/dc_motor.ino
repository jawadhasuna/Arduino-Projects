
#define m1a 2
#define m1b 3


void setup()
{
 pinMode(m1a,OUTPUT);
 pinMode(m1b,OUTPUT);
}

void loop()
{
 digitalWrite(m1a,HIGH);
 digitalWrite(m1b,LOW);
 delay(2000);
 
 digitalWrite(m1a,HIGH);
 digitalWrite(m1b,HIGH);
 delay(1000);
 
 digitalWrite(m1a,LOW);
 digitalWrite(m1b,HIGH);
 delay(2000);
 
 digitalWrite(m1a,LOW);
 digitalWrite(m1b,LOW);
 delay(1000);
 
 

}
