/*
 * 输出数组中的全部元素
 *
 * 假设有一个 a 数组
 * 整型
 * 有 10 个元素
 * 输出各元素的值有三种方法
 * (1) 下标法
 * (2) 通过数组名计算数组元素地址
 *     找出元素的值
 * (3) 用指针变量指向数组元素
 */

// 用指针指向数组元素
#include <stdio.h>

// 定义函数　number()
int num(int *number) {

  // 输出结果
  printf("%d " , *number);

}

int main(void) {

  // 定义所需数组
  int number[10];
  // 叫用户输入 10 个数
  puts("Enter 10 number:");
  for (int i = 0; i < 10; i++) {
    // 将用户输入的值循环赋给数组
    scanf("%d" , &number[i]);
  }

  // 循环输出结果
  for (int i = 0; i < 10; i++) {
    // 调用函数 number()
    num(&number[i]);
  }
  // 输出换行
  putchar('\n');

  return 0;
}

#if 0

// 下标法
#include <stdio.h>

int main(void) {

  // 定义所需数组
  int number[10];
  // 叫用户输入 10 个数
  puts("Enter 10 number:");
  // 将用户输入的数循环赋给数组
  for (int i = 0; i < 10; i++) {
    scanf("%d" , &number[i]);
  }

  // 循环输出
  for (int i = 0; i < 10; i++) {
    printf("%d " , number[i]);
  }
  // 输出换行
  putchar('\n');

  return 0;
}

/*
 * 通过数组名计算数组元素地址
 * 找出元素的值
 */

#include <stdio.h>

int main(void) {

  // 定义所需数组
  int number[10];
  /*
   * 定义一个指针变量
   * 将其指向数组 number
   */
  int *pointer;
  pointer = &number[0];
  // 叫用户输入 10 个数
  puts("Enter 10 number:");
  // 将用户输入的数循环赋给数组
  for (int i = 0; i < 10; i++) {
    scanf("%d" , &number[i]);
  }

  // 循环输出
  for (int i = 0; i < 10; i++) {
    printf("%d " , *(pointer + i));
  }
  // 输出换行
  putchar('\n');

  return 0;
}

#endif
