/*
 * 用指针变量输出
 * 二维数组元素的值
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  int i = 0;
  int j = 0;
  // 定义所需数组二维
  int two_array[3][3] = {
    {6 ,  6 ,  6} , {6 , 6 , 6} , {6 , 6 , 6}
  };
  /*
   * 定义指针变量
   * 让它指向数组
   */
  int (*p)[3];
  p = two_array;

  // 循环输出
  for (; i < 3; i++) {
    for (; j < 3; j++) {
      printf("%d " , *(*(p + i) + j));
    }
    // 输出换行
    putchar('\n');
  }

  return 0;
}
