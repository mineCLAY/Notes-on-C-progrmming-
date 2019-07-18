/*
 * 声明 INTEGER 为整型
 * 
 * typedef int INTEGER
 */

#include <stdio.h>

// 将标识符 INTEGER 代替 int 整型
typedef int INTEGER;

int main(void) {

  // 用标识符定义变量
  INTEGER i = 1;
  // 定义一个整型变量
  int  j = 2;

  // 打印结果
  printf("i: %d\nj: %d\n" , i , j);

  return 0;
}
