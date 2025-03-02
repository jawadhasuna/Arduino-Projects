#include<Servo.h>
Servo myservo;
int pos = 0;
const int trigPin = 14; //aka sound sensor
const int echoPin = 15; 
long duration; //or it could be double.
int distance;
 void servol();
 void servoj();
 
  void ultrah();
void setup()
  {
      pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output  
   pinMode(echoPin, INPUT); // Sets the echoPin as an Input  
   Serial.begin(9600); // Starts the serial communication } 
     myservo.attach(44);  
  }
void loop()
{
  
  servol();  
 
}
void lservo()
{

 //servo motor
for(pos=0;pos<=180;pos++)
{
  myservo.write(pos);
  delay (5);
}
delay(500);
ultrah();
for(pos=180;pos>=0;pos--)
{
  myservo.write(pos);
  delay (5);
}
 delay(500);
ultrah();  
}

void ultrah()
{
  
  
  //ultrasonic sound sensor  
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  // Sets the trigPin on HIGH state for 10 micro seconds  
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH);  // measures the time in microseconds
  distance = duration *0.013385834 / 2;  // printing the data on serial monitor, Measured in INCHES  
  //distance = duration *0.034 / 2;  // Measured in CM
  Serial.print(" Distance = ");  
  Serial.print(distance);  

  Serial.println(" Inch");
}
