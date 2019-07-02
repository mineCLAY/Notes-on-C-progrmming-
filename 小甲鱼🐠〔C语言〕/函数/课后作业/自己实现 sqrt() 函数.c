/*
 * 猜想下 sqrt() 函数的原理
 * 并尝试编程(暂时只要求整型数据)
 *
 * sqrt() 函数:
 * 存放于 math.h 头文件中
 * 作用:
 * 计算平方根
 */

#include <stdio.h>

int main(void) {

  // 声明 sqrt() 函数
  int sqrt(int x);
  // 定义所需变量
  int a , square;

  // 叫用户输入 1 个值
  puts("Enter a number:");
  // 将用户输入的值赋给变量 a
  scanf("%d" , &a);

  // 将函数返回值赋给变量 square 
  square = sqrt(a);
  // 输出结果
  printf("The square root of %d is %d" ,
          a , square);

  return 0;
}

// 定义 sqrt() 函数
int sqrt(int x) {

  // 声明存储结果的变量
  int square , i;

  // 开始循环找出平方根
  for (i = 1; i <= x; i++) {
    // 判断是否求出平方根
    if (i == x / i) {
      // 如果求出.则退出循环
      break;
    }
  }

  // 将求出的值赋给变量 square
  square = i;

  // 返回求出的值
  return square;
