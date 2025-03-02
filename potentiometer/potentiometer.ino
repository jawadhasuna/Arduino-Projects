int poten = A0;
void setup() 
{
 pinMode(poten,INPUT);
 Serial.begin(9600);
}

void loop() 
{
 Serial.println(analogRead(poten));
 delay(400);
 
}
