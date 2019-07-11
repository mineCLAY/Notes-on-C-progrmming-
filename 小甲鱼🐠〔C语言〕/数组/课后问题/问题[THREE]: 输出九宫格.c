/*
 * Problem NO.THREE
 *
 * 从键盘输入 9 个整数
 * 对照九宫格的形式
 * 输入三行
 * 每行输入三个数
 * 保存在二维数组中
 * 按数组原来位置输出
 * 第一行和第一列的所有元素
 */

#include <stdio.h>

int main(void) {

  // 定义存储九宫格的数组
  int number[3][3];
  // 定义所需变量
  int i , j;

  // 叫用户输入 9 个数
  puts("Enter 9 number:");
  // 开始循环赋值
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d" , &number[i][j]);
    }
  }

  // 循环输出
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if ((((0 == j) || (2 == j))) &&
           ((0 == i) || (2 == i))) {
        // 将不是十字架的元素输出空格
        putchar(' ');
        putchar('\t');
        continue;
      }
      // 输出数组元素
      printf("%d\t" , number[i][j]);
    }
    // 输出换行
    putchar('\n');
  }

  return 0;
}
