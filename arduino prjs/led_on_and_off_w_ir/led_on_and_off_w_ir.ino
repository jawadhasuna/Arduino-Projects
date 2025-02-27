int ir=2;
int led=3;


void setup() 
{
 pinMode(ir,INPUT);
 pinMode(led,OUTPUT);
}

void loop() 
{ 
  int irvalue = digitalRead(ir);
  
  if (irvalue==1)
   {
    digitalWrite(led,HIGH);
   }
  else if (irvalue==0)
  {
  digitalWrite(led,LOW);
  }
}
