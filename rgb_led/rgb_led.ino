int red=3;
int green =5;
int blue =6;
void setup()
{
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(blue,OUTPUT);

}

void loop()
{
 analogWrite(red,255);
 analogWrite(green,255);
 analogWrite(blue,0);
 delay(1000);
 analogWrite(red,0);
 analogWrite(green,0);
 analogWrite(blue,0);
 delay(500);
 analogWrite(red,0);
 analogWrite(green,255);
 analogWrite(blue,255);
 delay(1000);
 analogWrite(red,0);
 analogWrite(green,0);
 analogWrite(blue,0);
 delay(500);
 analogWrite(red,255);
 analogWrite(green,0);
 analogWrite(blue,255);
 delay(1000);
 analogWrite(red,0);
 analogWrite(green,0);
 analogWrite(blue,0);
 delay(500);


}
