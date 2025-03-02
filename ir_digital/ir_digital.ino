int ir=2;
int changedvalue;
void setup()


{
Serial.begin(9600);
pinMode(ir,INPUT);
}

void loop() 
{
int irvalue=digitalRead(ir);
if (irvalue== 0)
{
  changedvalue = 1;
}
else if (irvalue== 1)
{
  changedvalue = 0;
}
Serial.println(changedvalue);
delay(200);
}
