/*
 * 判断输入的整数是否为 6 的倍数
 * 若是
 * 显示 "Right!" 和 "Great!"
 * 否则显示 "Wrong" 和 "Sorry!".
 * 注意:
 * 感叹号是英文的感叹号
 */

#include <stdio.h>

int main(void) {

  int number;

  // 叫用户输入一个数
  printf("Enter a number:\n");
  // 将用户输入的数赋给变量 number
  scanf("%d" , &number);

  if (0 == number % 6) {
    printf("Right!\nGreat!\n");
  } else {
    printf("Wrong!\nSorry!\n");
  }

  return 0;
}
