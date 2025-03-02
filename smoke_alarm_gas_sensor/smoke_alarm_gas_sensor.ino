
int pir = A0;
int led = 4;
int mic= 5;
int value;
void setup() {
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT);
  pinMode(mic,OUTPUT);
  Serial.begin(9600);
}

void loop() {
   
   value = analogRead(pir); 
   Serial.println(value); 
if (value<=400)
{
  digitalWrite(led,HIGH);
  digitalWrite(mic, LOW);
}
if (value>400)
{
  digitalWrite(led,LOW);
  digitalWrite(mic,HIGH);
}

}
