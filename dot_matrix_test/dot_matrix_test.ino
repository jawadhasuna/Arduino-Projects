int pos=2;
int neg=3;

void setup()
{
  pinMode(pos,OUTPUT);
  pinMode(neg,OUTPUT);

}

void loop() 
{
digitalWrite(pos,HIGH);
digitalWrite(neg,LOW);
}
