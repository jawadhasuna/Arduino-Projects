int r1=2;
int r2=3;
int r3=4;
int r4=5;
int r5=6;
int r6=7;
int r7=8;
int c1=9;
int c2=10;
int c3=11;
int c4=12;
int c5=13;

void setup() 

{
pinMode(r1,OUTPUT);
pinMode(r2,OUTPUT);
pinMode(r3,OUTPUT);
pinMode(r4,OUTPUT);
pinMode(r5,OUTPUT);
pinMode(r6,OUTPUT);
pinMode(r7,OUTPUT);
pinMode(c1,OUTPUT);
pinMode(c2,OUTPUT);
pinMode(c3,OUTPUT);
pinMode(c4,OUTPUT);
pinMode(c5,OUTPUT);

}

void loop()
{
//rows
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
digitalWrite(r4,HIGH);
digitalWrite(r5,HIGH);
digitalWrite(r6,HIGH);
digitalWrite(r7,HIGH);
//cols
digitalWrite(c1,LOW);
digitalWrite(c2,HIGH);
digitalWrite(c3,HIGH);
digitalWrite(c4,HIGH);
digitalWrite(c5,HIGH);
delay(5);


}
