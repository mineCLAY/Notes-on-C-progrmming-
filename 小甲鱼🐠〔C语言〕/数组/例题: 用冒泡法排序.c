/*
 * 用冒泡法 (起泡法) 对 10 个数排序 (有小到大).
 * 冒泡法的思路是:
 * 将相邻两个数比较
 * 将小的调到前头
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  int bubble[10] = {0};

  // 叫用户输入 10 个数
  puts("Enter 10 number:");/*
 * 用冒泡法 (起泡法) 对 10 个数排序 (有小到大).
 * 冒泡法的思路是:
 * 将相邻两个数比较
 * 将小的调到前头
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  int bubble[10];
  // 定义中间变量
  int inter1;
  int inter2;

  // 叫用户输入 10 个数
  puts("Enter 10 number:");
  // 开始循环赋值
  for (int i = 0; i < 10; i++) {
    scanf("%d" , &bubble[i]);
  }

  // 开始循环比较
  for (int i = 1; i <= 10; i++) {
    if(bubble[i] < bubble[i - 1]) {
      // 将小的调到前头
      inter1 = bubble[i - 1];
      inter2 = bubble[i];
      bubble[i] = inter1;
      bubble[i - 1] = inter2;
    }
  }

  // 循环输出结果
  for (int i = 0; i < 10; i++) {
    printf("%d " , bubble[i]);
  }
  // 输出换行
  putchar('\n');

  return 0;
}
  // 开始循环赋值
  for (int i = 0; i < 10; i++) {
    scanf("%d" , &bubble[i]);
  }

  // 开始循环比较
  for (int i = 0, j = 1; i < 10; i++ , j++) {
    if(bubble[i] > bubble[j]) {
      // 将小的调到前头
      bubble[j] = bubble[i];
      // 输出结果
      printf("%d\n" , bubble[j]);
    }
    else if (bubble[j] > bubble[i]) {
      // 将小的调到前头
      bubble[i] = bubble[j];
      // 输出结果
      printf("%d\n" , bubble[i]);
    }
  }

  return 0;
}
