#include <LiquidCrystal.h> 
blablabla
LiquidCrystal lcd(12,11,5,4,3,2);
int capteur=0;

char mot[20];
void setup() {
  Serial.begin(9600);
  

lcd.begin(16,2);// put your setup code here, to run once:
lcd.setCursor (0,0);

}

void loop() {
 int valcapt= analogRead (capteur);
 float voltage= valcapt*(5.0/1700.0);
 float temperature= (voltage*100);
 lcd.print("temp : ");
 lcd.print (temperature);
 lcd.println (" C ");
 delay(2000);
 lcd.clear();
 if (temperature > 25)
 {
  lcd.print("Temp trop haute");
  delay(3000);
  lcd.clear();
 }
 else {
  lcd.print("Temp correcte");
   delay(3000);
  lcd.clear();
 }


 
}
