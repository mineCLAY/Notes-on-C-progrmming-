/*
 * 将 a 数组中
 * n 个整数按相反顺序存放
 */

#include <stdio.h>

// 定义函数　reserve
int reserve(int *reserve , int n) {

  // 定义中间交换变量
  int temp = 0;
  int tamp = 0;

  // 调换数组顺序
  for (int i = 0 , a = n - 1; i < n / 2; i++ , a--) {
    // 用中间交换变量存放数组变量
    temp = *(reserve + a);
    tamp = *(reserve + i);
    // 让指针指向不同数组元素并交换数值
    *(reserve + i) = temp;
    *(reserve + a) = tamp;
  }

  // 循环输出结果
  for (int i = 0; i < n; i++) {
    // 输出数组每个元素
    printf("%d " , *(reserve + i));
  }
}

int main(void) {

  // 叫用户输入要输入几个数字
  puts("You have to enter a few numbers:");
  // 定义存放它的数
  int n;
  // 将用户输入的值存入 n
  scanf("%d" , &n);

  // 定义数组 a
  int a[n];

  // 叫用户输入 n 个数
  printf("Enter %d number:\n" , n);
  // 循环输入
  for (int i = 0; i < n; i++) {
    scanf("%d" , &a[i]);
  }

  // 调用函数 reserv()
  reserve(a , n);
  // 输出换行
  putchar('\n');

  return 0;
}
