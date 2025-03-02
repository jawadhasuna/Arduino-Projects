int relay=2;

void setup()
{
 pinMode(relay,OUTPUT);

}

void loop()
{

//digitalWrite(relay,LOW);
delay(300);
digitalWrite(relay,HIGH);
delay(300);
}
