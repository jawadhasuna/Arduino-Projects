int led = 2;





void setup() 
{
   pinMode(led,OUTPUT);

}

void loop() 
{
   digitalWrite(led,HIGH);
   delay(5);
   digitalWrite(led,LOW);
   delay(50);
        
}
