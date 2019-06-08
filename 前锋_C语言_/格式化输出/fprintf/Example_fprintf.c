/*
 * 4.02. Example_fprintf.c
 *
 * 打印出当前 的时间
 * 格式:
 * 星期、月 日、小时 分钟
 * 求 圆周率 pi 的值
 */

#include <stdio.h>
#include <math.h>

int main(void) {
  char *weekday = "Saturday";
  char *month = "November";
  int day = 5;
  int hour = 9;
  int min = 42;
  fprintf(stdout , "%s , %s %d , %.2d:%.2d\n" ,
          weekday , month , day , hour , min);
        
  // tan 45 度 = 1
  // 所以 , 45 度转换成弧度就是 pi / 4
  // 反三角函数是 atan(1.0) 再乘以 4 就是 pi
  // 这个就是圆周率
  fprintf(stdout , "pi = %.5f\n" , 4 * atan(1.0));

  return 0;
}
