#include <Adafruit_LiquidCrystal.h>

// 连接通过SPI接口, MOSI 为A7脚  SCL 为A5脚  SS为A4
Adafruit_LiquidCrystal lcd(A7, A5, A4);

void setup()
{
    // 设置LCD屏列20, 行4
    lcd.begin(20, 4);
    // 显示字符串
    lcd.print("hello, world!");
}

void loop()
{
    // 设置当前光标为 列0,行1
    lcd.setCursor(0, 1);
    // 显示秒数
    lcd.print(millis()/1000);

    lcd.setBacklight(HIGH);
    delay(500);
    lcd.setBacklight(LOW);
    delay(500);
}
