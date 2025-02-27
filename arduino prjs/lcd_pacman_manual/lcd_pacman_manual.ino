#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
int count;
int y;
void setup() 
{
 lcd.begin(16,2);
 lcd.setCursor(1,0);
 lcd.print(".") ;
  lcd.setCursor(14,0);
 lcd.print(".") ;
 lcd.setCursor(0,0);
 lcd.print("_");
}

void loop()
{
  int value = analogRead(A0);
  if(value<2)
  {
    lcd.clear();
    count++;
    lcd.setCursor(14,0);
    lcd.print(".") ;
    lcd.setCursor(count,y);
    lcd.print("<");
    delay(500);
    if (count==13)
     {
      
    lcd.setCursor(13,y);
    lcd.print("<");
    delay(100);
    lcd.clear();
    lcd.setCursor(count=count+1,y);
    lcd.print("-");
    delay(300);
    lcd.clear();
    lcd.setCursor(15,y);
    lcd.print("<");
    delay(500);
     }
    else if (count<13)
     {
    lcd.clear();
    lcd.setCursor(count=count+1,y);
    lcd.print("-");
    lcd.setCursor(14,0);
    lcd.print(".") ;
    delay(300);
       
     }
  }
 if(value>400 && value<420) 
   {
    lcd.clear();
    lcd.setCursor(count=count-1,y);
    lcd.print(">");
    lcd.setCursor(14,0);
    lcd.print(".") ;
    delay(300);
    lcd.clear();
    lcd.setCursor(count=count-1,y);
    lcd.print("-");
    lcd.setCursor(14,0);
    lcd.print(".") ;
    delay(500);
    
   }
}
