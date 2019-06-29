#include <stdio.h>
#include <math.h>

int main() {

  // 设置所需的变量
  long number;
  int i , n;

  // 叫用户输入一个数
  printf("Enter a number:\n");
  // 将用户输入的数赋给变量 number
  scanf("%ld" , &number);

  // 开始循环
  for (i = 1; number >= i; i++) {
    //判断 number 能不能被某数整除
    if (0 == number % i)
      // 如果能 n 就自加 1
      n++;
  }

  // 如果变量 n 大于 2 就输出是合数
  if (n > 2)
    // 则输出该数是 合数
    printf("%ld 是合数\n" , number);
  // 如果等于 2 就输出是素数
  else if(n == 2)
    // 输出该数是 素数
    printf("%ld 是素数\n" , number);
  // 如果只有一个
  else if(n == 1)
    // 就输出 不是素数也不是合数
    printf("%ld 不是素数也不是合数\n" , number);

  return 0;
