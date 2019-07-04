/*
 * 用递归的方法求 n !
 * 求 n ! 也可以用递归方法
 * 即 5 ! 等于 4 ! * 5
 * 而 4 ! = 3 ! * 4
 * ...... 1 ! = 1
 * 可用下面的递归公式表示:
 * n = 1      (n = 0 or 1)
 * n * (n - 1) !   (n > 1)
 */

#include <stdio.h>

int main(void) {

  // 声明函数 f(n , a)
  int f(int n , int a);
  // 定义所需变量
  int b;
  int result;

  puts("Enter a factorial number:");
  // 将用户输入的值赋给变量 b
  scanf("%d" , &b);

  // 将函数 f() 返回值赋给变量 result
  result = f(b , 0);
  // 输出 result
  printf("%d factorial equals %d" , b , result);

  return 0;
}

// 定义函数 f(n)
int f(int n , int a) {

  // 判断 n 是否等于 1
  if (n == 1) {
    a = 1;
  }
  // 开始循环进行阶乘计算
  for (int i = 1; i < n; i++) {
    // 将递归函数 f(n - 1) 的返回值赋给变量 a
    a = n * f(n - 1 , a);
  }

  // 将计算出的值返回给主函数 main
  return a;
}
