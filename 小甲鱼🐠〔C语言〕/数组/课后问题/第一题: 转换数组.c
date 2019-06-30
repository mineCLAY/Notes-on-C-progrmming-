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
      b[j][i] = a[i][j];
    } putchar('\n');
  }

  // 循环输入互换后的值
  for (int a = 0; a <= i; a++) {
    for (int t = 0; t <= j; t++) {
      // 输出互换后的结果
      printf("%d\t" , b[t][i]);
    } putchar('\n'); /*
                      * 输出换行
                      * 使结构完美
                      */
  }

  return 0;
}
