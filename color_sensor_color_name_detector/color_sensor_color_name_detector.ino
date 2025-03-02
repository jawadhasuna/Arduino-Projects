#define s0 2
#define s1 3
#define s2 4
#define s3 5
#define color 6
int frequency = 0;
void setup()
{
  pinMode(s0,OUTPUT);pinMode(s1,OUTPUT);pinMode(s2,OUTPUT);pinMode(s3,OUTPUT);pinMode(color,INPUT);  
  digitalWrite(s0,HIGH);digitalWrite(s1,LOW); Serial.begin(9600);  
}
void loop()

{//red:
digitalWrite(s2,LOW);digitalWrite(s3,LOW);
frequency = pulseIn(color,LOW);
int frequencyR = map(frequency,25,72,255,0);

//green:
digitalWrite(s2,HIGH);digitalWrite(s3,HIGH);
frequency = pulseIn(color,LOW);
int frequencyG = map(frequency,30,90,255,0);

//blue:
digitalWrite(s2,LOW);digitalWrite(s3,HIGH);
frequency = pulseIn(color,LOW);
int frequencyB = map(frequency,25,70,255,0);

//white:
  if(frequencyR >= 260 && frequencyR <= 300 && frequencyG >= 270 && frequencyG <= 310 && frequencyB >= 280 && frequencyB <= 330 )
      {
          Serial.println("white");
          delay(500);  
      }

//yellow:
  else if(frequencyR >= 300 && frequencyR <= 330 && frequencyG >= 280 && frequencyG <= 330 && frequencyB >= 200 && frequencyB <= 280 )
      {
          Serial.println("YELLOW");
          delay(500);  
      }

//not detected :
  else if(frequencyR <= 0 && frequencyG > 0 && frequencyB > 0 )
      {
          Serial.println("Not detected/dark color");
          delay(500);  
      }

//not detected :
  else if(frequencyR > 0 && frequencyG < 0 && frequencyB < 0 )
      {
          Serial.println("Not Detected/dark color");
          delay(500);  
      }

//black :
  else if(frequencyR < 0 && frequencyG < 0 && frequencyB < 0 )
      {
          Serial.println("BLACK");
          delay(500);  
      }
//green:
  else if(frequencyR >= 150 && frequencyR <= 250 && frequencyG >= 240 && frequencyG <= 290 && frequencyB >= 100 && frequencyB <= 170 )
      {
          Serial.println("GREEN");
          delay(500);  
      }

//purple:
  else if(frequencyR >= 245 && frequencyR <= 270 && frequencyG >= 210 && frequencyG <= 250 && frequencyB >= 281 && frequencyB <= 305 )
      {
          Serial.println("PURPLE");
          delay(500);  
      }
//blue:
  else if(frequencyR >= 30 && frequencyR <= 110 && frequencyG >= 245 && frequencyG <= 275 && frequencyB >= 280 && frequencyB <= 310 )
      {
          Serial.println("BLUE");
          delay(500);  
      }
//red:
  else if(frequencyR >= 245 && frequencyR <= 270 && frequencyG >= 50 && frequencyG <= 110 && frequencyB >= 80 && frequencyB <= 120 )
      {
          Serial.println("RED");
          delay(500);  
      }

}
