/*
 * NO.don't
 *
 * 输出 4 * 5 的矩阵
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  int i , j , f;

  // 设置行
  for (i = 1; i <= 4; i++) {
    // 设置列
    for (j = 1; j <= 5; j++) {
      // 输出换矩阵 行 的数
      printf("%d\t" , j * i);
      // 判断一行是否有五个数
      if (0 == j * i % 5) {
        // 输出换行
        putchar('\n');
      }
    }
  }

  return 0;
}
