#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("0");
  delay(500);
  lcd.setCursor(1,0);
  lcd.print("1");
  delay(500);
  lcd.setCursor(2,0);
  lcd.print("2");
  delay(500);
  lcd.setCursor(3,0);
  lcd.print("3");
  delay(500);
  lcd.setCursor(4,0);
  lcd.print("4");
  delay(500);
  lcd.setCursor(5,0);
  lcd.print("5"); 
  delay(500);
  lcd.setCursor(6,0);
  lcd.print("6");
  delay(500);
  lcd.setCursor(7,0);
  lcd.print("7");
  delay(500);
  lcd.setCursor(8,0);
  lcd.print("8");
  delay(500);
  lcd.setCursor(9,0);
  lcd.print("9");
  delay(500);
  lcd.setCursor(10,0);
  lcd.print("10");
  delay(500);
  lcd.setCursor(12,0);
  lcd.print("11");
  delay(500);
  lcd.setCursor(14,0);
  lcd.print("12");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("13");
  delay(500);
  lcd.setCursor(2,1);
  lcd.print("14");
  delay(500);
  lcd.setCursor(4,1);
  lcd.print("15");
  delay(500);
  lcd.setCursor(6,1);
  lcd.print("16");
  delay(500);
  lcd.setCursor(8,1);
  lcd.print("17");
  delay(500);
  lcd.setCursor(10,1);
  lcd.print("18");
  delay(500);
  lcd.setCursor(12,1);
  lcd.print("19");
  delay(500);
  lcd.setCursor(14,1);
  lcd.print("20");
  
}

void loop()
{
 

}
