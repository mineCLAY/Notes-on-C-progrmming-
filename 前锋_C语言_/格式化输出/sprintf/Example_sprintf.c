uct/*
 * 4.03. Example_sprintf.c
 *
 * 用 sprintf 可以把整数打印到字符串中
 * 所以
 * 很多场合用 sprintf 代替 itoa
 */

#include <stdio.h>

int main(void) {

  char str[64];

  // 01. 产生 "123"
  sprintf(str , "%d" , 123);
  printf("str = %s\n" , str); // 字符串 123

  // 02. 指定宽度 , 不足的左边补空格
  sprintf(str , "%8d%8d" , 123 , 4567);
  printf("%s\n" , str);

  // 03. 左对齐
  sprintf(str , "%-8d%8d" , 123 , 4567);
  printf("%s\n" , str);

  // 04. 按照 16 进制打印
  sprintf(str , "%8x" , 4567);
  printf("%s\n" , str);

  // 05. 按照 16进制打印
  sprintf(str , "%8X" , 4567);
  printf("%s\n" , str);

  // 06. 按照 16进制打印
  sprintf(str , "%08X" , 4567);
  printf("%s\n" , str);

  return 0;
}
