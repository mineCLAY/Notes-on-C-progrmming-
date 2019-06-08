/*
 * 4.04. Example_sprintf.c
 *
 * 浮点数的打印
 */

#include <stdio.h>

int main(void) {

  char str[64];

  sprintf(str , "%f" , 3.1415926);
  printf("%s\n" , str);

  // 如果我们希望自己控制打印的宽度和小数位数
  // 需要使用: "%m.nf" 格式
  // m: 表示打印的宽度
  // n: 表示打印小数点后的位数
  sprintf(str , "%5.3f" , 3.1415926);
  printf("%s\n" , str);

  sprintf(str , "%-10.3f" , 3.1415926);
  printf("%s\n" , str);

  sprintf(str , "%.3f" , 3.1415926);
  printf("%s\n" , str);

  return 0;
}
