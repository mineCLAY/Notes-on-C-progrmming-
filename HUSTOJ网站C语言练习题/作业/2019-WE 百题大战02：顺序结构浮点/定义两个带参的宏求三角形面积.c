/*
 * 三角形面积=SQRT(S*(S-a)*(S-b)*(S-c))
 * 其中S=(a+b+c)/2，a、b、c为三角形的三边
 * 定义两个带参的宏
 * 一个用来求area
 * 另一个宏用来求S
 * 写程序
 * 在程序中用带实参的宏名来求面积area
 */

#include <stdio.h>
#include <math.h>

#define two 2

int main(void) {

  double a , b , c , S , area;                  // 定义双精度变量

  scanf("%lf%lf%lf" , &a , &b , &c);            // 用户输入的 3 个值存入变量 a , b , c
  S = (a + b + c) / two;                        // 计算 S
  area = sqrt(S * (S - a) * (S - b) * (S - c)); // 计算三角形面积

  printf("%.3lf" , area);                       // 输出结果: 三角形面积

  return 0;
}
