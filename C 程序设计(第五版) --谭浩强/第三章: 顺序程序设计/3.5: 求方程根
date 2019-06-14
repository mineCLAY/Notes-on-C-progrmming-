/*
 * 求 ax^2 + bx + c = 0 方程的根
 * a , b , c 由键盘输入
 * 设 b^2 - 4ac > 0
 */

#include <stdio.h>
#include <math.h>                               // 程序中要调用求平方根函数 sqrt

int main(void) {

  double a , b , c , disc , x1 , x2 , p , q;    // disc 用来存放判别式 (b * b - 4ac) 的值
  scanf("%lf%lf%lf" , &a , &b , &c);            // 输入双精度型变量的值要用格式声明 "%lf"

  disc = b * b - 4 * a * c;
  p = -b / (2.0 * a);
  q = sqrt(disc) / (2.0 * a);
  x1 = p + q;                                   // 求出方程
  x2 = p - q;                                   // 的两个根

  printf("x1 = %7.2f\nx2 = %7.2f\n" , x1 , x2); // 输出方程的两个根

  return 0;
}
