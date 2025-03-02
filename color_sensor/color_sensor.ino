#define S0 2
#define S1 3 
#define S2 4 
#define S3 5 
#define sensorOut 6 
int frequency = 0;
void setup() 
{
  pinMode(S0, OUTPUT);  pinMode(S1, OUTPUT);  pinMode(S2, OUTPUT);  pinMode(S3, OUTPUT);  pinMode(sensorOut, INPUT); 
  digitalWrite(S0,HIGH);  digitalWrite(S1,LOW);    Serial.begin(9600); 

}

void loop() 
{
  digitalWrite(S2,LOW);  digitalWrite(S3,LOW); 
  frequency = pulseIn(sensorOut, LOW);  //Remaping the value of the frequency to the RGB Model of 0 to 255 
  frequency = map(frequency, 25,72,255,0);  // Printing the value on the serial monitor 
  Serial.print("R= ");//printing name  
  Serial.print(frequency);//printing RED color frequency  
  Serial.print("  ");  
  delay(500); 
  digitalWrite(S2,HIGH);  digitalWrite(S3,HIGH); 
  frequency = pulseIn(sensorOut, LOW);  //Remaping the value of the frequency to the RGB Model of 0 to 255 
  frequency = map(frequency, 30,90,255,0);  // Printing the value on the serial monitor
  Serial.print("G= ");//printing name  
  Serial.print(frequency);//printing RED color frequency  
  Serial.print("  ");  
  delay(500);  // Setting Blue filtered photodiodes to be read 
  digitalWrite(S2,LOW);  digitalWrite(S3,HIGH);  
  frequency = pulseIn(sensorOut, LOW);  //Remaping the value of the frequency to the RGB Model of 0 to 255 
  frequency = map(frequency, 25,70,255,0);  // Printing the value on the serial monitor 
  Serial.print("B= ");//printing name  
  Serial.print(frequency);//printing RED color frequency 
  Serial.println("  ");  
  delay(500);
  }
