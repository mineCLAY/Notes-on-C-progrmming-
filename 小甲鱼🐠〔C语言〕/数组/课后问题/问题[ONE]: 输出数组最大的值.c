/*
 * Problem NO.ONE
 *
 * 有一个 3 * 4 的矩阵
 * 要求编程求出其中值
 * 最大的那个元素的值
 * 以及其所在的行号和列号
 */

#include <stdio.h>

int main(void) {

  // 定义所需数组
  int matrix[3][4];
  // 定义所需变量
  int max = matrix[0][0];
  int row , colum;

  // 叫用户输入 矩阵 的值
  puts("Enter the value of 3 * 4 matrix:");
  // 开始循环赋值
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; i <= 3; j++) {
      scanf("%d" , &matrix[i][j]);

      if (max < matrix[i][j]) {
        max = matrix[i][j];
        row = i;
        colum = j;
      } else {
        continue;
      }
    }
  }
  printf("max: %d: \t(%d , %d)\n" ,
               max , row , colum);

  return 0;
}
