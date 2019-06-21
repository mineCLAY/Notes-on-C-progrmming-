/*
 * 5.05 Example_sscanfExample_sscanf.c
 *
 * 利用它可以从字符串中
 * 取出整数、浮点数和字符串等等
 * 它的使用法方法很简单
 */

#include <stdio.h>

int main(void) {

  // 用法一: 读入字符串
  char str[128];
  sscanf("12345678" , "%s" , str);
  printf("用法一: str = %s\n" , str);

  // 用法二: 取指定长度的字符串
  sscanf("987654321" , "%6s" , str);
  printf("用法二: str = %s\n" , str);

  // 用法三: 格式化时间
  int year , month , day , hour , minute , second;
  sscanf("2019/6/21 7:41:20" ,
         "%d/%d/%d %d:%d:%d\n" ,
         &year , &month , &day , &hour , &minute , &second);
  printf("用法三: time = %d - %d - %d %d:%d:%d\n" ,
          year , month , day , hour , minute , second);

  return 0;
}
