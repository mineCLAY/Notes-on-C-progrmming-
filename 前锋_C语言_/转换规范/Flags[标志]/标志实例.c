#include <stdio.h>

int main(void) {
  // 01. -
  printf("输出左对齐 5 位十进制整数.\n");
  int emergency = 110;
  printf("报警电话是: %-5d\n" , emergency);
  printf("报警电话是: %5d\n" , emergency);
  // 如果出现 0 , 那么将忽略 0
  printf("报警电话是: %0d\n" , emergency);
  printf("%-50s\n" , "如遇危险一定向警方报警.\n");
  printf("%50s\n" , "如遇危险一定向警方报警.\n");

  // 02. +
  printf("报警电话是: %5d\n" , emergency);
  printf("报警电话是: %+5d\n" , emergency);

  // 03. 0
  printf("报警电话是: %5d\n" , emergency);
  printf("报警电话是: %05d\n" , emergency);
  printf("报警电话是: %-05d\n" , emergency);

  // 04. 空格: 如果是有符号数前面是正号 , 会将它去掉
  printf("报警电话是: %5d\n" , emergency);
  printf("报警电话是: % d\n" , emergency);
  double temperature = -42.9;
  printf("哈尔滨最低气温是: %f\n" , temperature);
  printf("哈尔滨最低气温是: % f\n" , temperature);

  // 05. #
  // a. 对 c、s、d、u 无影响 , 在输出时加前缀 0.
  // b. 对 o、x、X 时 , 前缀加 0x、0X
  int x = '\41';
  printf("x = %o , x = %#o\n" , x , x);
  printf("x = %x , x = %#x\n" , x , x);

  return 0;
}
