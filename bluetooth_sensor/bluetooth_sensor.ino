char alpha;
void setup()
{
 
Serial.begin(9600);
}

void loop() 
{
if (Serial.available()>0)
   {
    alpha = Serial.read();
    Serial.println(alpha);
   
    
   }
}
