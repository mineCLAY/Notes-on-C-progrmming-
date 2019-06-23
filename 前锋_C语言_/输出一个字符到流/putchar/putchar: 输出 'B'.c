/*
 * 8.01 Example_putchar.c
 *
 *
 */

#include <stdio.h>

int main(void) {

  char ch;
  ch = 'B';

  // 输出字符变量 ch
  putchar(ch);
  // 输出字符 'B'
  putchar('B');
  // 用八进制输出 'B'
  putchar('\x42');
  // 用十六进制输出 'B'
  putchar(0x42);
  // 错误: putchar('x42');
  printf("\n");
  // 输出换行

  return 0;
}
