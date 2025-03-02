#include<LiquidCrystal.h>
 LiquidCrystal lcd(8,9,4,5,6,7);

void setup() 
{
 lcd.begin(16,2);
 lcd.setCursor(4,0);
 lcd.print("HELLO!!");
 delay(1000);
 lcd.setCursor(4,1);
 lcd.print("JAWAD:)");
 delay(3000);
 lcd.clear();
 delay(500);
 lcd.setCursor(6,0);
 lcd.print("O_O");
 delay(1000);
 lcd.clear();
 delay(500);
}

void loop()
{
 
 int value=analogRead(A0);
 if(value<2)
 {
  for(int i =0;i<=10;i++)
    {
    lcd.setCursor(5,0);  
    int res = 2*i;
    lcd.print("2x");
    lcd.print(i);
    lcd.print("=");
    lcd.print(res);
    delay(500);
    }
    lcd.clear();
 }
     
 else 
    { 
      lcd.setCursor(7,0);
      lcd.print("<3");
      
    }
}
