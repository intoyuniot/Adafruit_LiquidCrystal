/*
LCD16*2与Atom的接法

LCD16*2    Atom
VSS        GND
VDD        5V0
VO         调节屏的对比度，需用一个电位器调到一个合适的电压
RS         A0    H为显示数据，L为控制数据
RW         GND   H为读模式 L为写模式，此例程直接将其接GND
E          A1    使能
D0         D0
D1         D1
D2         D2
D3         D3
D4         D4
D5         D5
D6         D6
D7         D7
A          3V3   背光灯的阳极，可直接供电或者由IO驱动
K          GND   背光灯的阴极
*/

/*该头文件引用由IntoRobot自动添加.*/
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd = Adafruit_LiquidCrystal(A0,A1,D0,D1,D2,D3,D4,D5,D6,D7);

void setup()
{
    // 设置LCD屏列16, 行2
    lcd.begin(16, 2);
    delay(100);
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
