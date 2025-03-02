int pir= 2;
int led=3;
void setup()

{
pinMode(pir,INPUT);
pinMode(led,OUTPUT);
}
void loop()

{
int value = digitalRead(pir);
if (value==1)
{
digitalWrite(led,HIGH);
}
else;
{
digitalWrite(led,LOW);
}
}
