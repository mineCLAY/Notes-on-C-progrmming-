/*
 * 编程实现
 * 键盘输入字符
 * 直到键入 'q' 时退出
 */

#include <stdio.h>
#include <conio.h>

int main(void) {

  // 定义所需的变量
  char c;

  // 叫用户输入一个字符
  printf("Enter a character:\n");

  // 开始循环 直到用户输入 'q' 为止
  while (1) {
    c = getch();
    if ('q' == c) break;
  }

  printf("程序结束.\n");

  return 0;
}
