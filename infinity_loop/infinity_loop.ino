#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
int a;

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(1,0);
  lcd.print ("INFINITY LOOP:");
}

void loop()
{
  lcd.setCursor(4,1);
  lcd.print(a);
  a++; 
}
