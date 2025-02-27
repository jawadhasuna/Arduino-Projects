#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

void setup() 
{
 lcd.begin(16,2);
 lcd.setCursor(5,0);
 lcd.print("HELLO!!");
 delay(1000);
 lcd.setCursor(5,1);
 lcd.print("WORLD:)");
 delay(3000);
 lcd.clear();
 delay(500);
 lcd.setCursor(7,0);
 lcd.print("O-O");
 delay(1000);
 lcd.clear();
 delay(500);
}

void loop()
{
  int value = analogRead(A0);
  lcd.setCursor(6,0);
  lcd.print(value);
  delay(500);
  lcd.clear();
  delay(500);
}
