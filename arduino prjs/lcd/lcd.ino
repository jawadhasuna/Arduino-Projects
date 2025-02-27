#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

void setup()
{
 lcd.begin(16,2);
 lcd.setCursor(0,0);
 lcd.print("START");
 delay(1000);
 lcd.clear();

}

void loop() 
{

int value=analogRead(A0);

if(value<150 && value>50)
{
  lcd.setCursor(7,0);
  lcd.print("2B");
  delay(1000);
  lcd.clear();
  delay(400);
}
lcd.setCursor(6,1);
lcd.print(value);
delay(800);
lcd.clear();
delay(200);

}
