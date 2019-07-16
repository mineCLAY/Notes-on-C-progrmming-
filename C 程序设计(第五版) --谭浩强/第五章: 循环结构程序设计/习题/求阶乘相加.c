/*
 * 求 n(1 ...... 20)!
 * (即求 1! + 2! + 20!)
 */

#include <stdio.h>

// 定义求阶乘的函数 factorial()
int factorial(int n) {

  // 定义所需变量
  long med;
  // 定义储存结果的变量 result
  long result = 0;

  // 循环进行阶乘
  for (int i = 1; i <= n; i++) {
    // 每次重置中间值
    med = 1;
    // 开始计算
    for (int a = 1; a <= i; a++) {
      med *= a;
    }
    // 进行相加
    result += med;
  }

  // 将结果返回 main 主函数
  return result;
}

int main(void) {

  // 定义所需变量
  int n = 20;

  /*
   * 将函数 factorial()
   * 返回值赋给 result
   */
  long result = factorial(n);

  // 输出结果
  printf("%d\n" , result);

  return 0;
}
