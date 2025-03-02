int temp = A0;

void setup() 
{
 Serial.begin(9600);
 pinMode(temp,INPUT);

}

void loop() 
{
 float value = analogRead(temp);
 value= value*0.48828125;//value in degree celcius
 Serial.println(value);
 delay(500);

}
