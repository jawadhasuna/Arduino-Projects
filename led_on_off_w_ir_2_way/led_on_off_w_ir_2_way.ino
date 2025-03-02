int ir=2;
int led=3;

void setup()
{
pinMode(ir,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() 
{

if (digitalRead(ir)==1) //direct(no variable used to save the input value of ir)
  {
  digitalWrite(led,LOW);
  }
  else if (digitalRead(ir)==0)
  {
  digitalWrite(led,HIGH);
  }
  Serial.println(digitalRead(ir)); //ln in print is for endl aka next line)
}
