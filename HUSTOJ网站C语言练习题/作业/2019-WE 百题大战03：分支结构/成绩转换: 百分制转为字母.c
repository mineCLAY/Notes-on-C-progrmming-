/*
 * 给出一百分制成绩
 * 要求输出成绩等级 'A'、'B'、'C'、'D'、'E'
 * 90 分以上为 'A' 80 - 89 分为 'B'
 * 60 - 69 分为 'D' 60 分以下为 'E'
 * 输出单个字符可以使用函数 putchar
 * 列如 输出字符 'A'
 * 可以写成 putchar('A'); 字符使用单引号
 * 也可以使用 printf("%c" , 'A');
 */

#include <stdio.h>

int main(void) {

  int grade; // 定义 成绩 变量 grade

  // 叫用户输入一个 1 ~ 100整数
  printf("Enter grade from 1 to 100");
  scanf("%d" , &grade);

  // 判断成绩 grade 为什么级别
  if (60 > grade) {
    putchar('E');
  } else if ((60 <= grade) && (grade <= 69)) {
    putchar('D');
  } else if ((70 <= grade) && (grade <= 79)) {
    putchar('C');
  } else if ((80 <= grade) && (grade <= 89)) {
    putchar('B');
  } else if ((90 <= grade) && (grade <= 100)) {
    putchar('A');
  }

  return 0;
}
