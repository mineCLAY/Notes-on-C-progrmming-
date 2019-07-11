/*
 * problem NO.ONE
 *
 * 将一个二维数组和列元素互换
 * 存到另一个二维数组中
 * 将数组 a[2][3] 转化为数组 b[3][2]
 */

#include <stdio.h>

int main(void) {

  // 定义所需数组
  int a[2][3];
  int b[3][2];

  // 定义所需变量
  int i , j;

  // 叫用户输入 6 个数
  puts("Enter 6 number:");
  // 进行循环赋值
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d" , &a[i][j]);
      // 打印数组 a
      printf("%d\t" , a[i][j]);
      b[j][i] = a[i][j];
    }
    // 输出换行
    putchar('\n');
  }
  // 输出换行
  putchar('\n');

  // 循环输入互换后的值
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      // 输出互换后的结果
      printf("%d\t" , b[i][j]);
    }
    // 输出换行
    putchar('\n');
  }

  return 0;
}
