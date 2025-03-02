const int trigPin = 14; //aka sound sensor
const int echoPin = 15; 
// defines variables 
long duration; //or it could be double.
int distance;


void setup() {
   pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output  
   pinMode(echoPin, INPUT); // Sets the echoPin as an Input  
   Serial.begin(9600); // Starts the serial communication } 
}

void loop() 
{


    // clears the trigPin first  
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
