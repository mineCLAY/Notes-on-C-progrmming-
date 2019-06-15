/*
 * 01.
 * 
 * 键盘输入梯形的上底、下底、高
 * 求出梯形的面积面积
 */

#include <stdio.h>

int main(void) {

  double upper_bottom , lower_bottom , height; // 定义 上底 下底 高
  printf ("input upper_bottom , lower_bottom , height(unit cm):\n"); // 叫用户输入 上底 下底 高
  scanf("%lf%lf%lf" , &upper_bottom ,
         &lower_bottom , &height); // 让用户输入的值存入 上底 下底 高

  printf("Trapezoidal area: %lf\n" ,
          (upper_bottom + lower_bottom)
           * height / 2); // 输出梯形的面积

  return 0;
}
