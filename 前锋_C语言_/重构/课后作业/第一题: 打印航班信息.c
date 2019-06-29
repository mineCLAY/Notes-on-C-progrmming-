/*
 * problem NO.ONE
 *
 * 屏幕打印除北京到大理的航班信息
 * 要求:
 * 一个星期内的、至少三趟航班信息、
 * 起飞时间、到达时间、最低价格
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量 
  char *str1 = "06:25    -->\t10:10\t一 二 三 四 五 六 日\t￥1810";
  char *str_1 = "北京国际机场  大理机场\t\t\t\t2019.06.30";
  char *str2 = "06:25    -->\t10:10\t一 二 三 四 五 六 日\t￥1280";
  char *str_2 = "北京国际机场  大理机场\t\t\t\t2019.07.03";
  char *str3 = "06:40    -->\t10:25\t一 二 三 四 五 六 日\t￥1170";
  char *str_3 = "北京国际机场  大理机场\t\t\t\t2019.07.01";

  // 输出第一航班
  puts("第一航班:");
  puts(str1);
  puts(str_1);
  putchar('\n');

  // 输出第二航班
  puts("第二航班:");
  puts(str2);
  puts(str_2);
  putchar('\n');

  // 输出第三航班
  puts("第三航班:");
  puts(str3);
  puts(str_3);
  putchar('\n');

  return 0;
}
