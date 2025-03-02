int a;// if u dont assign any value it takes it as 0.


void setup()
{
 Serial.begin(9600);

}

void loop() 
{
  Serial.println(a);
  delay(500);
  a=a+1;
}
