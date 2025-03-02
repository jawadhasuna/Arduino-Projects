void straight()
{
   motor1.run(FORWARD);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(FORWARD);
}
void pause()
{
 motor1.run(RELEASE);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(RELEASE);
  
}
void reverse()
{
   motor1.run(BACKWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(BACKWARD);
}
void lleft()
{
   motor1.run(FORWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(FORWARD);
}
void rright()
{
   motor1.run(BACKWARD);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(BACKWARD);
}
