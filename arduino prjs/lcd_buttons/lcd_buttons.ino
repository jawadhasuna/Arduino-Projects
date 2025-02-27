#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);



void setup()

{
lcd.begin(16,2);
lcd.setCursor(5,1);
lcd.print("START");
delay(1000);
lcd.clear();
delay(200);
}

void loop()
{
int value= analogRead(A0);
if (value>900)
  {lcd.setCursor(3,0);
   lcd.print("NORMAL");
   delay(1000);
   lcd.clear();
   //delay(200);
  }
else if (value<1)
  {lcd.setCursor(4,0);
   lcd.print("RIGHT");
   delay(1000);
   lcd.clear();
   //delay(200);
  }
else if (value>400 && value <500)
  {lcd.setCursor(5,0);
   lcd.print("LEFT");
   delay(1000);
   lcd.clear();
   //delay(200);
  }
else if (value > 90 && value<110)
  {lcd.setCursor(7,0);
   lcd.print("UP");
   delay(1000);
   lcd.clear();
   //delay(200);
  }
else if (value>200 && value <300)
  {lcd.setCursor(5,0);
   lcd.print("DOWN");
   delay(1000);
   lcd.clear();
  // delay(200);
  }  
else if (value>600 && value <700)
  {lcd.setCursor(2,0);
   lcd.print("SELECT");
   delay(1000);
   lcd.clear();
   //delay(200);
  }

  




}
