/*
 * 根据输入
 * 计算函数 f(x)= 2x^2 + 3x - 4 的值。
 * 在本题中
 * 请使用双精度浮点数类型
 */

#include <stdio.h>

int main(void) {

  double x;                     // 声明一个双精度浮点数变量 x

  scanf("%lf" , &x);            // 用户输入 x 的值 存入双精度浮点数变量 x 中
  x = 2 * x * x + 3 * x - 4;    // 计算 f(x) 的值

  printf("%.3lf" , x);          // 输出计算的 一元二次函数

  return 0;
}
