/*
 * 利用数组来处理、求解 Fibonacci 数列
 * 先定义一个 20 个元素的数组
 * 并将数组的第一、第二个元素都初始化为 1
 * 其他元素初始化为 0
 * 通过公式求出其他各个元素的值
 */

#include <stdio.h>

int main(void) {

  // 定义所需数组 f
  int f[2] = {0 , 1};

  // 开始循环输出 Fibonacci 数列
  for (int i = 0; i < 20; i++) {
    f[0] += f[1];
    f[1] += f[0];
    printf("%d %d\n" , f[0] , f[1]);
  }

  return 0;
}
