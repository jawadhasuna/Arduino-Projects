char blue;
int relay = 2;
void setup() 
{
 Serial.begin(9600);
 pinMode(relay,OUTPUT);
 digitalWrite(relay,HIGH);
}

void loop() 
{
 
 if (Serial.available()>0)
 { 
   blue= Serial.read();
     if (blue=='U')
     {digitalWrite(relay,LOW);}
     else if (blue=='D')
     {
      digitalWrite(relay,HIGH);
     }
  
 }
  
}
