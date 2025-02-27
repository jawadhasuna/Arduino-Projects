
int ir=2;
void setup()

{
   pinMode(ir,INPUT);
  Serial.begin(9600);
}

void loop() 

{
  digitalRead(ir);
  Serial.println(digitalRead(ir));
}
