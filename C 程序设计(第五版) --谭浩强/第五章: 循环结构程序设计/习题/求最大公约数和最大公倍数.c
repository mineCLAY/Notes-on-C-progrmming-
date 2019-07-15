/*
 * 输入两个整数
 * m 和 n 
 * 求其最大公约数
 * 和最小公倍数
 */

#include <stdio.h>

// 定义函数 process(0
int process(int a , int b , int *(fun)(int , int)) {

  // 定义存储结果的变量
  int result;
  // 将函数返回值赋给变量 result
  result = fun(a , b);

  // 输出结果
  printf("%d\n" , result);

}

int main(void) {

  // 声明两个函数
  int max_divisor(int , int);
  int min_multple(int , int);
  // 定义所需变量
  int m , n;

  // 叫用户输入两个数
  puts("Enter 2 number:");
  scanf("%d %d" , &m , &n);

  // 输出最大公约数
  puts("Maximum commom divisor:");
  // 调用函数 process
  process(m , n , max_divisor);

  // 输出最小公倍数
  puts("\nLeast commom multple:");
  // 调用函数 process
  process(m , n , min_multple);

  return 0;
}

// 定义函数 max_divisor()
int max_divisor(int a , int b) {

  // 定义所需变量
  int divisor;
  int min = a < b ? a:b;
  int temp = 1;

  // 循环计算最大公约数
  for (int i = 1; i <= min; i++) {
    // 判断变量是否可以被整除
    if ((0 == a % i) && (0 == b % i)) {
      // 再判断是否比较前一个公约数大
      if (i > temp)
        // 替换最大公约数
        temp = i;
    }
  }
  // 将最大公约数赋给变量 divisor
  divisor = temp;

  // 返回结果
  return divisor;
}

// 定义函数 min_multple()
int min_multple(int a , int b) {

  // 定义所需变量
  int multple;
  int max = a > b ? a:b;
  int temp;

  // 循环计算最大公倍数
  for (int i = max; 1; i++) {
    // 判断是否可以被整除
    if ((0 == i % a) && (0 == i % b)) {
      // 替换最小公倍数
      temp = i;
      break;
    }
  }
  // 将最大公约数赋给变量 multple
  multple = temp;

  // 返回结果
  return multple;
}
