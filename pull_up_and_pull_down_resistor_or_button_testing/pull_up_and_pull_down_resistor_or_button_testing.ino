int button_input =2;
 

void setup()
{
Serial.begin(9600);
pinMode(button_input,INPUT);
}

void loop()
{
 int value = digitalRead(button_input); 
 Serial.println(value);

}
