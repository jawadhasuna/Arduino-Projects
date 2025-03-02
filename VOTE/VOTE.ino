#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7); 
int A;
int B; 


void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(6,0);
  lcd.print("VOTE:");
  lcd.setCursor(0,0);
  lcd.print("L");
  lcd.setCursor(0,1);
  lcd.print("A=0");
  lcd.setCursor(13,0);
  lcd.print("R");
  lcd.setCursor(13,1);
  
  lcd.print("B=0");
}

void loop() 
{
   int value= analogRead(A0);
   if(value>380&&value<430)
   {
    A++;
    lcd.setCursor(2,1);
    lcd.print(A);
    delay(500);
   }
   if(value<2)
   {
    B++;
    lcd.setCursor(15,1);
    lcd.print(B);
    delay(500);
   }
   if(A==5)
   {
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.print("WINNER(A)");
    delay(500);
   }
   if(B==5)
   {
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.print("WINNER(B)");
    delay(500);
   }
  
}
