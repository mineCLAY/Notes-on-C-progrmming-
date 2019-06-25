/*
 * NO. TWO:
 *
 * 求 Fibonacci 数列前 40 个数
 * 这个数列如下特点:
 * 第 1、2 两个数为 1、1
 * 从第二个数凯开始
 * 该数是其前面两个数之和
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  long f1 = 1 , f2 = 0;

  // 开始循环
  for (int i = 1;
       i <= 20; i++) {
    f1 += f2;
    f2 += f1;
    // 循环输出
    printf("%ld\n%ld\n" ,
            f1 , f2);
  }

  return 0;
}
