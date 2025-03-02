void jservo()
{

 //servo motor
for(pos=0;pos<=180;pos++)
{
  myservo.write(pos);
  delay (5);
}
delay(500);
}
