
int smokeA0 = A0;

//int sensorThres = 400;

void setup() {
 
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  delay(500);
}
