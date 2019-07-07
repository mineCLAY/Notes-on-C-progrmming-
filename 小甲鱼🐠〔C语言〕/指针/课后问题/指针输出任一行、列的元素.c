/*
 * 通过输入指定行数
 * 和列数打印出
 * 二维数组元素对应
 * 任一行、任一列
 * 元素的值
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

  // 叫用户输入想列出的任意元素的值
  puts("Enter any row , column:");
  scanf("%d %d" , &i , &j);
  // 输出结果
  printf("%d 列 %d 行元素的值是: %d" ,
          i , j , *(*(p + i) + j));

  return 0;
}
