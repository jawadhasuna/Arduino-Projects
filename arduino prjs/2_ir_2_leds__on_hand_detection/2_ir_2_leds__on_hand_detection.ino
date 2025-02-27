int led1 = 2;
int led2 = 3;
int ir1 = 4;
int ir2 = 5;
void setup()
{
 Serial.begin(9600);
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(ir1,INPUT);
    pinMode(ir2,INPUT);
 
}

void loop()
{
if (digitalRead(ir1)==0)
       {
          digitalWrite(led1,HIGH);
       }
else if (digitalRead(ir1)==1)
       {
          digitalWrite(led1,LOW);
       }
if (digitalRead(ir2)==0)
       {
          digitalWrite(led2,HIGH);
       }
else if (digitalRead(ir2)==1)
       {
          digitalWrite(led2,LOW);
       }


Serial.print(digitalRead(ir1));
Serial.println(digitalRead(ir2));
delay(400);
}
