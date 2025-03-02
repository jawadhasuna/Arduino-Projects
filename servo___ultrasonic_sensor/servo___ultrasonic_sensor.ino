#include<Servo.h>
Servo myservo;
int pos = 0;
const int trigPin = 14; //aka sound sensor
const int echoPin = 15; 
long duration; //or it could be double.
int distance;
 void jservo();
 void hservo();
 
  void ultra();
void setup()
  {
      pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output  
   pinMode(echoPin, INPUT); // Sets the echoPin as an Input  
   Serial.begin(9600); // Starts the serial communication } 
     myservo.attach(44);  
  }
void loop()
{
  
  jservo();
  ultra();
  hservo();
  ultra();
  
 
}
