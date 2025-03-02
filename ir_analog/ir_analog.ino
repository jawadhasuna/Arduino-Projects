int ir=A0;



void setup()
{
Serial.begin(9600);
pinMode(ir,INPUT);
}

void loop() 
{
int irvalue=analogRead(ir);
Serial.println(irvalue);
delay(200);
}
