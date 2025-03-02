void jservo()
{
for(pos=180;pos>=0;pos--)
{
  myservo.write(pos);
  delay (5);
}
 delay(500);
  
}
