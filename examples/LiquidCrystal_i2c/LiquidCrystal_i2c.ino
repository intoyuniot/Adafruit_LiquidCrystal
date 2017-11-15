#include <Adafruit_LiquidCrystal.h>

// 连接通过I2C接口
// 默认如果没有跳线，I2C默认地址为0
Adafruit_LiquidCrystal lcd(0);

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
