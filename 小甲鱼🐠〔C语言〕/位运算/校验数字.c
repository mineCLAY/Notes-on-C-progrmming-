/*
 * 取一个 char a
 * 从右端开始的 2 ~ 5 位
 *
 * (1) 先使 a 右移两位:
 *     a >> 2
 * (2) 设置一个低 4 位全为 1
 *     其余全为 0 的数
 * (3) 将上面 (1) (2) 进行 & 运算
 * (a >> 2) & ~(~0 << 4)
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  char a;
  // 叫用户输入 a 的数字
  puts("Enter the numer to be verfied:");
  scanf("%d" , &a);

  // 进行运算
  printf("%d\n" , (a >> 2) & (~(~0 << 4)));

  return 0;
}
