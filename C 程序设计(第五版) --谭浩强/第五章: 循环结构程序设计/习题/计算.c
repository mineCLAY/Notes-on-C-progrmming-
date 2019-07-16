/*
 * 求 k(1 ...... 100) +
 *    k * k(1 ...... 50) +
 *    1 / k(1 ...... 10)
 */

#include <stdio.h>

// 定义函数 add()
int add(double k) {

  // 定义所需变量
  double a = 0 , b = 0;

  // 循环进行相加
  for (double i = 2; i <= 100; i++) {
    // 进行相加
    k += i;
  }
  for (double p = 1; p <= 50; p++) {
    a += p * p;
  }
  for (double n = 1; n <= 10; n++) {
    b += 1 / n;
  }

  // 将结果赋给变量 result
  double result = k + a + b;
  // 输出结果
  printf(" k(1 ...... 100) + k * k(1 ...... 50) + 1 / k(1 ...... 10): %lf\n" , result);

}

int main(void) {

  // 定义所需变量
  double k = 1;

  // 调用函数 add
  add(k);

  return 0;
}
