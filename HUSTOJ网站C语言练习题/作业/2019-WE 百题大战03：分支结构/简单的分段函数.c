/*
 * 有一个函数
 * y = { x  x < 1
 * | 2x - 1  1 <= x < 10
 * \ 3x - 11  x >= 10
 * 写一段程序
 * 输入 x
 * 输出 y
 */

#include <stdio.h>

int main(void) {

  int x , y;
  printf("Enter a number:\n"); // 叫用户输入一个数
  scanf("%d" , &x);            // 将用户输入的值 赋给 x

  //  判断 if 属于哪个数值阶段
  if (1 > x) {
    y = x;
  } else if ((1 <= x) && (x < 10)) {
    y = 2 * x - 1;
  } else if (x >= 10) {
    y = 3 * x - 11;
  }

  // 输出 y 的值
  printf("y = %d\n" , y);

  return 0;
}
