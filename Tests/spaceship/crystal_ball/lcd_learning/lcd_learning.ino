#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("Hello - Nick");
  delay(3000);

   lcd.setCursor(2,1);
   lcd.print("Man City 6 - 0 ");
   delay(3000);

   lcd.clear();

   lcd.blink();
   delay(4000);

   lcd.setCursor(7, 1);
   delay(3000);
   lcd.noBlink();

   lcd.cursor();
   delay(4000);
   lcd.noCursor();

   lcd.clear(); 
}
