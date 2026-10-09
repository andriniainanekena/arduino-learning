#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

int seconds = 0;
int counter = 0;
bool scrollRight = true;

void setup()
{
    counter = 0;

    lcd.begin(16, 2);
    lcd.setBacklight(1);

    lcd.setCursor(1, 0);
    lcd.print("BANANA");
}

void loop()
{
    lcd.setCursor(1, 1);
    lcd.print(seconds);

    lcd.setBacklight(1);
    delay(500);

    delay(500);

    seconds++;
    counter++;

    if (scrollRight)
    {
        lcd.scrollDisplayRight();
    }
    else
    {
        lcd.scrollDisplayLeft();
    }

    if (counter % 5 == 0)
    {
        scrollRight = !scrollRight;
    }
}