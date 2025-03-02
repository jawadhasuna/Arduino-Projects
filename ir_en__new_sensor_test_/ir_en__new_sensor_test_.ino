int irout=A0;
int    iren=2;

void setup()
{
Serial.begin(9600);
pinMode(irout,INPUT);
pinMode(iren,OUTPUT);
digitalWrite(iren,HIGH);
}

void loop() 
{
  
int irvalue=digitalRead(irout);
Serial.println(irvalue);
delay(200);
}
