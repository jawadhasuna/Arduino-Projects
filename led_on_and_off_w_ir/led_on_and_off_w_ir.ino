int ir=2;
int led=3;
int irvalue = digitalRead(ir);

void setup() 
{
 pinMode(ir,INPUT);
 pinMode(led,OUTPUT);
}

void loop() 
{ 
  
  
  if (irvalue==1)
   {
    digitalWrite(led,HIGH);
   }
  else if (irvalue==0)
  {
  digitalWrite(led,LOW);
  }
}
