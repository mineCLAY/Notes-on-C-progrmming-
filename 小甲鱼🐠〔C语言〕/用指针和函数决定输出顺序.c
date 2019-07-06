/*
 * 对输入的两个整数
 * 按整数大小顺序输出
 * 用指针作为函数参数
 * 实现判断大小功能
 */

#include <stdio.h>

int main() {

  // 定义两个变量
  int a , b;
  // 声明两个有参函数
  int point1(int *pointer1 , int *pointer2);
  int point2(int *pointer1 , int *pointer2);

  // 叫用户输入两个数
  puts("Enter 2 number:");
  scanf("%d" , &a);
  scanf("%d" , &b);

  // 定义最大数
  int max;
  // 将函数 point1() 返回值赋给 max
  max = point1(&a , &b);
  // 定义，最小数
  int min;
  // 将函数 point2() 返回值赋给 min
  min = point2(&a , &b);
  // 输出结果
  printf("max: %d\nmin: %d\n" ,
          max , min);

  return 0;
}

// 定义函数 point1()
int point1(int *pointer1 , int *pointer2) {

  /*
   * 将变量的值取出
   * 赋给指针变量
   * 比较大小
   * 算出比较大的那个数
   */
  if ((*pointer1) > (*pointer2))
    // 返回较大数
    return *pointer1;
  else
    // 返回较大数
    return *pointer2;
}

// 定义函数 point2()
int point2(int *pointer1 , int *pointer2) {

  /*
   * 将变量的值取出
   * 赋给指针变量
   * 比较大小
   * 算出比较小的那个数
   */
  if ((*pointer1) < (*pointer2))
    // 返回较小数
    return *pointer1;
  else
    // 返回较小数
    return *pointer2;
}
