/*
//编程求出单精度和双精度浮点数能表达的最大范围

#include <stdio.h>

int main(void){
  float a = 3.4E38;
  double b = 1.7E308;
  printf("float最大代表 = %f\n" , a);
  printf("double最大代表 = %f\n" , b);
}
*/

//编程求出 1234.5678 和 98765.4321 的加、减、乘、除运算

#include <stdio.h>

int main(void){
  double a = 1234.5678;
  double b = 98765.4321;
  double jia = a + b;
  printf("两个数的加 = %f\n" , jia);
  double jian = b - a;
  printf("两个数的差 = %f\n" , jian);
  printf("两个数的积 = %f\n" , a * b);
  printf("两个数的商 = %f\n" , b / a);
  return 0;
}
*/
