/*
 * 01.
 * 
 * 键盘输入梯形的上底、下底、高
 * 求出梯形的面积面积
 */

#include <stdio.h>

int main(void) {

  double upper_bottom , lower_bottom , height;
  printf ("input upper_bottom , lower_bottom , height(unit cm):\n");
  scanf("%lf%lf%lf" , &upper_bottom ,
         &lower_bottom , &height);

  printf("Trapezoidal area: %lf\n" ,
          (upper_bottom + lower_bottom)
           * height / 2);

  return 0;
}
