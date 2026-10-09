#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int countdown;

void setup()
{
    countdown = 9;
    lcd.begin(16, 2);
}

void loop()
{
    while (countdown >= 0)
    {
        lcd.setCursor(0, 1);
        lcd.setCursor(0, 1);
        lcd.print(countdown);
        delay(1000);
        countdown--;
    }

    lcd.setCursor(0, 1);
    lcd.print("BOOM!");
    delay(1000);

    lcd.noDisplay();
    delay(500);
    lcd.display();
    delay(500);
    lcd.noDisplay();
    delay(500);
    lcd.display();
    delay(500);

    lcd.clear();
    countdown = 9;
}