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
  int two_array[6][6] = {
    {6 ,  6 ,  6 , 6 , 6 , 6} , {6 , 6 , 6 ,
    6 ,  6 ,  6} , {6 , 6 , 6 , 6 , 6 , 6} ,
    {6 ,  6 ,  6 , 6 , 6 , 6} , {6 , 6 , 6 ,
    6 ,  6 ,  6} , {6 , 6 , 6 , 6 , 6 , 6} ,
  };
  /*
   * 定义指针变量
   * 让它指向数组
   */
  int (*p)[6];
  p = two_array;

  // 用户输入想列出的任一行元素的值
  JW: puts("Enter row(max: 6):");
  scanf("%d" , &i);
  // 判断是否超出数组元素范围
  if (i > 6)
    // 返回 JW 的步骤重新输入行
    goto JW;
  // 用户输入想列出的任一行元素的值
  TF: puts("Enter column(max: 6):");
  scanf("%d" , &j);
  if (j > 6)
    // 返回 TF 的步骤重新输入行
    goto TF;
  /*
   * 因为数组是从 0 行、列开始
   * 所以用户可能会输入 3 行 3 列
   * 这时真正的 3 行 3 列
   * 应该是:
   * *(*(p + 2) + 2)
   * 所以应该减一
   */
  i -= 1;
  j -= 1;
  // 输出结果
  printf("%d 列 %d 行元素的值是: %d" ,
          i + 1 , j + 1, *(*(p + i) + j));

  return 0;
}
