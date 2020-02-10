#include <U8g2lib.h>

//GPIO实际对应关系
static const uint8_t D1   = 5;
static const uint8_t D2   = 4;
static const uint8_t D4   = 2;
static const uint8_t D5   = 14;
static const uint8_t D6   = 12;

//定义4个屏幕的接口
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ D1, /* data=*/ D2, /* reset=*/ U8X8_PIN_NONE);   //第一个屏幕
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2b(U8G2_R0, /* clock=*/ D1, /* data=*/ D4, /* reset=*/ U8X8_PIN_NONE);  //第二个屏幕
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2c(U8G2_R0, /* clock=*/ D1, /* data=*/ D5, /* reset=*/ U8X8_PIN_NONE);  //第三个屏幕
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2d(U8G2_R0, /* clock=*/ D1, /* data=*/ D6, /* reset=*/ U8X8_PIN_NONE);  //第四个屏幕


//设置流程
void setup() {
  u8g2.begin(); //开始构建
  u8g2.enableUTF8Print(); //开启UTF8字符打印支持
  u8g2b.begin();
  u8g2b.enableUTF8Print();
  u8g2c.begin();
  u8g2c.enableUTF8Print();
  u8g2d.begin();
  u8g2d.enableUTF8Print();
}

//循环开始
void loop() {
  monitorTest();  //启动测试方法
  delay(5000);  //线程停止5000ms
  
}
void monitorTest() //测试方法
{
    /*第一块屏幕*/
  u8g2.clearBuffer(); //清除缓存区
  u8g2.drawFrame(0, 0, 128, 63); //在x(0, 0) y(128, 63)绘制矩形
  u8g2.setFont(u8g2_font_wqy12_t_gb2312a); // 设置字体
  u8g2.setCursor(26, 12); //光标位置
  u8g2.print("当前屏幕编号"); //打印内容
  u8g2.setCursor(36, 35); //光标位置
  u8g2.print("Monitor-1"); //打印内容
  u8g2.sendBuffer(); //发送内容到缓存区

  /*第二块屏幕*/
  u8g2b.clearBuffer(); //清除缓存区
  u8g2b.drawFrame(0, 0, 128, 63); //在x(0, 0) y(128, 63)绘制矩形
  u8g2b.setFont(u8g2_font_wqy12_t_gb2312a); // 设置字体
  u8g2b.setCursor(26, 12); //光标位置
  u8g2b.print("当前屏幕编号"); //打印内容
  u8g2b.setCursor(36, 35); //光标位置
  u8g2b.print("Monitor-2"); //打印内容
  u8g2b.sendBuffer(); //发送内容到缓存区

  /*第三块屏幕*/
  u8g2c.clearBuffer(); //清除缓存区
  u8g2c.drawFrame(0, 0, 128, 63); //在x(0, 0) y(128, 63)绘制矩形
  u8g2c.setFont(u8g2_font_wqy12_t_gb2312a); // 设置字体
  u8g2c.setCursor(26, 12); //光标位置
  u8g2c.print("当前屏幕编号"); //打印内容
  u8g2c.setCursor(36, 35); //光标位置
  u8g2c.print("Monitor-3"); //打印内容
  u8g2c.sendBuffer(); //发送内容到缓存区

  /*第四块屏幕*/
  u8g2d.clearBuffer(); //清除缓存区
  u8g2d.drawFrame(0, 0, 128, 63); //在x(0, 0) y(128, 63)绘制矩形
  u8g2d.setFont(u8g2_font_wqy12_t_gb2312a); // 设置字体
  u8g2d.setCursor(26, 12); //光标位置
  u8g2d.print("当前屏幕编号"); //打印内容
  u8g2d.setCursor(36, 35); //光标位置
  u8g2d.print("Monitor-4"); //打印内容
  u8g2d.sendBuffer(); //发送内容到缓存区
  
}
