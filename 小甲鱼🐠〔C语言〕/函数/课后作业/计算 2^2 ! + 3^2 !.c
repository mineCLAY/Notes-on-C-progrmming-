/*
 *  计算 s = 2^2 ! + 3^2 !
 *  ("!" 在高等数学里是阶乘的意思
 *  ! 4 == 4 * 3 * 2 * 1)
 */

#include <stdio.h>

// 定义函数 square2
int square2(int b) {

  // 进行计算 b 的平方值
  b *= b;

  // 返回 b 的平方值
  return b;
}

int main(void) {

  // 声明计算阶乘值得函数 factorial
  int factorial(int x , int y);
  // 定义所需变量
  int square = 2;
  int number = 3;

  /*
   * 将函数 factorial 返回值赋给变量 s
   */
  int s = factorial(square , number);
  // 输出结果
  puts("s = 2^2 ! + 3^2 !");
  printf("s = %d" , s);

  return 0;
}

// 定义函数 factorial
int factorial(int x , int y) {

  // 声明计算平方值的函数 square2
  int square1(int a);
  // 声明计算平方值的函数 square2
  int square2(int b);
  // 定义所需变量
  int sqrtMC = 2;
  int number2 = 3;
  int z;
  int mediant1 = 1 , mediant2 = 1;

  // 将函数 square 返回值赋给变量 x
  x = square1(sqrtMC);
  y = square2(number2);
  
  // 开始循环进行阶乘计算
  for (int a = 2; a <= x;a++) {
    mediant1 *= a;
  }

  for (int a = 2; a <= y ;a++) {
    mediant2 *= a;
  }

  z = mediant1 + mediant2;

  // 将计算出的值返回给主函数 main
  return z;
}

// 定义函数 square1
int square1(int a) {

  // 进行计算 a 的平方值
  a *= a;

  // 返回 a 的平方值
  return a;
}
