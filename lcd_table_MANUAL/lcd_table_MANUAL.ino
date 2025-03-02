#include<LiquidCrystal.h>
 LiquidCrystal lcd(8,9,4,5,6,7);
 #define screen A0
 int count =0;
void setup() 
{
 lcd.begin(16,2);
 lcd.setCursor(2,0);
 lcd.print("TABLE OF 2!");
 delay(2000);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("  PRESS RIGHT: ");
 lcd.setCursor(4,1);
 lcd.print("2x0 = 0 ");
}

void loop()
{
 
 int value = analogRead ( screen );
 if(value < 2)
 {
  count++;
  lcd.setCursor(6,1);
  lcd.print(count);
  lcd.setCursor(10,1);
  lcd.print(2*count);
  delay(1000);
 }
 
 if( count==10)
      { 
        lcd.clear();
        lcd.setCursor(5,0);
        lcd.print("FINISH");
        delay(500);
      }
}
