#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
int count=2;
void setup() 
{
 lcd.begin(16,2);
 lcd.setCursor(0,0);
 lcd.print(">") ;
 lcd.setCursor(1,0);
 lcd.print("+");
 lcd.setCursor(2,0);
 lcd.print("~");
 lcd.setCursor(14,0);
 lcd.print("O");
}

void loop()
{
  int value = analogRead(A0);
  if(value>1000)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(">") ;
    lcd.setCursor(1,0);
    lcd.print("+");
    lcd.setCursor(2,0);
    lcd.print("~");
    lcd.setCursor(14,0);
    lcd.print("O");
    count++;
    lcd.setCursor(count,0);
    lcd.print("-") ;
    delay(500);}
     else if (count<13)
     {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(">") ;
    lcd.setCursor(1,0);
    lcd.print("+");
    lcd.setCursor(2,0);
    lcd.print("~");
    lcd.setCursor(14,0);
    lcd.print("O");
    lcd.setCursor(count=count+1,0);
    lcd.print("-");
    delay(300);}
    if (count==13)
     {
      
    lcd.setCursor(13,0);
    lcd.print("-");
    delay(100);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(">") ;
    lcd.setCursor(1,0);
    lcd.print("+");
    lcd.setCursor(2,0);
    lcd.print("~");
    lcd.setCursor(count=count+1,0);
    lcd.print("*");
    delay(300);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(">") ;
    lcd.setCursor(1,0);
    lcd.print("+");
    lcd.setCursor(2,0);
    lcd.print("~");
    lcd.setCursor(15,0);
    lcd.print("-");
    delay(500);
    lcd.clear();
    lcd.setCursor(6,1);
    lcd.print("WIN!");
     } 
}
