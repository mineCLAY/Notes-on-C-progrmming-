/*
 * 自己实现 pow() 函数
 * 并尝试验证
 *
 * pow() 函数:
 * 存在于 math.h 头文件中
 * 作用:
 * 指数函数(x 的 y 次方)
 */

#include <stdio.h>

int main(void) {

  // 定义 pow() 函数
  double pow(double x , double y);
  // 定义所需变量
  double x , y , a , b;
  double result;

  //  叫用户输入 2 个数
  puts("Enter 2 numer");
  // 将用户输入的值赋给变量 a 和 b
  scanf("%lf %lf" , &a , &b);
  // 将 pow() 函数的值赋给变量 c
  result = pow(a , b);

  // 输出结果
  printf("%lf raised to %lf is %lf\n" ,
          a , b , result);
  return 0;
}

// 定义 pow() 函数
double pow(double x , double y) {

  // 定义存储结果的变量
  double z;


  // 将结果赋给变量 z
  z = x;

  // 循环计算 x 的 y 次方
  for (int i = 1; i < y; i++) {
    z *= x;
  }

  return z;
}
