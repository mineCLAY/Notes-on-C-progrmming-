/*
 * 利用数组来处理、求解 Fibonacci 数列
 * 先定义一个 20 个元素的数组
 * 并将数组的第一、第二个元素都初始化为 1
 * 其他元素初始化为 0
 * 通过公式求出其他各个元素的值
 */

#include <stdio.h>

int main(void) {

  // 定义所需数组
  int f1 = 1, f2 = 0;
  int F[20] = {1 , 0 , 0};

  // 开始循环赋值
  for (int i = 1 , j = 0; i <= 10; i++ , j++) {
    f1 += f2;
    f2 += f1;
    F[j] = f1;
    F[i] = f2;
    printf("%d\n%d\n" , F[j] , F[i]);
  }

  return 0;
}
