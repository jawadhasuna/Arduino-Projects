int ir= A0;
int led=2;


void setup() 
{
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()


{
 if(digitalRead(ir)==0)
 {
  digitalWrite(led,HIGH);
 }
 if(digitalRead(ir)==1)
 {
  digitalWrite(led,LOW);
 }
 Serial.println(analogRead(ir));

}
