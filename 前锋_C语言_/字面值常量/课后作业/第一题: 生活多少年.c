/*
 * 编程输出你期待你的生命是多少年
 * 然后 , 转换成 月、日、小时分钟和秒
 * 打印到屏幕上
 * 每隔一秒钟倒计时显示一下(现在还不会)
 */

#include <stdio.h>

int main(void) {
  long int years , month , day , hour , minute , second;
  printf("input years:\n");
  scanf("%ld" , &years);

  month = years * 12; // 计算 月
  day = month * 30; // 计算 日
  hour = day * 24; // 计算 小时
  minute = hour * 60; // 计算分钟
  second = minute * 60; // 计算秒

  /* 输出结果 */
  printf("你能存活的年: %ld\n" , years);
  printf("你能存活的月: %ld\n" , month);
  printf("你能存活的日: %ld\n" , day);
  printf("你能存活的小时: %ld\n" , hour);
  printf("你能存活的分钟: %ld\n" , minute);
  printf("你能存活的秒: %ld\n" , second);
  
  /*
   * 让程序停一下
   * 不会立马闪退
   */
  getchar();
  return 0;
}
