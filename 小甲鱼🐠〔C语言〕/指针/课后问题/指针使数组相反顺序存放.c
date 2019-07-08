/*
 * 将 a 数组中
 * 10 个整数按相反顺序存放
 */

#include <stdio.h>

// 定义函数　reserve
int reserve(int *reserve) {

  // 定义中间交换变量
  int temp = 0;
  int tamp = 0;

  // 调换数组顺序
  for (int i = 0 , a = 10 - 1; i < 10 / 2; i++ , a--) {
    // 用中间交换变量存放数组变量
    temp = *(reserve + a);
    tamp = *(reserve + i);
    // 让指针指向不同数组元素并交换数值
    *(reserve + i) = temp;
    *(reserve + a) = tamp;
  }

  // 循环输出结果
  for (int i = 0; i < 10; i++) {
    // 输出数组每个元素
    printf("%d " , *(reserve + i));
  }
}

int main(void) {

  // 定义数组 a
  int a[10];

  // 叫用户输入 n 个数
  printf("Enter 10 number:\n");
  // 循环输入
  for (int i = 0; i < 10; i++) {
    scanf("%d" , &a[i]);
  }

  // 调用函数 reserv()
  reserve(a);
  // 输出换行
  putchar('\n');

  return 0;
}
