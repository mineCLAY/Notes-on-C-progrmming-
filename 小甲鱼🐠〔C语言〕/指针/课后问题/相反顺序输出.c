/*
 * 将 a 数组中
 * n 个整数按相反顺序存放
 */

#include <stdio.h>

// 定义函数　reserve
int reserve(int *reserve) {

  // 输出结果
    printf("%d " , *reserve);

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

  // 循环输出
  for (int i = n - 1; i >= 0; i--) {
    reserve(&a[i]);
  }
  // 输出换行
  putchar('\n');

  return 0;
}
