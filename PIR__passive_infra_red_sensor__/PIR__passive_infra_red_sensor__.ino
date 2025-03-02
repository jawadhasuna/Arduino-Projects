int pir=2;


void setup()
{
Serial.begin(9600);
pinMode(pir,INPUT);
}

void loop()
{
int value = digitalRead(pir);
Serial.println(value);
}
