/*
 * divison
 */

#include <stdio.h>

int main (void){
  //01. Original Code 原版代码
  //首先 , 当两个数相除时 , 一个整数除以另一个整数总是返回一个整数
  //因此 , 下面这两条语句都是正确的: 4 / 2 == 2; 3 / 2 == 1;
  int dividend = 3;
  int divisor = 2;
  if (dividend / divisor == 1){
    printf("做整除运算.\n");
  } if (dividend / divisor == 1.5) {
    printf("做浮点运算.\n");
  }
  //02. Analysis and Thinking 分析与思考
  //第 2 个除法是许多错误的来源
  //这个错误很容易修正
  //a.  如果 dividend 是个整数 , 则 dividend + 0.0 就是与这个整数
  //    匹配的浮点数 , 这样就解决了问题.
  //b.  如果常量 2 是个整数 , 那么 2.0 或简单的 2 , 就是浮点数
  if (3 / (divisor + 0.0) == 1.5){
    printf("做浮点运算.\n");
  } if (3 / (2 + 0.0) == 1.5){
    printf("做浮点运算.\n");
  } if (3 / 2.0 ==1.5){
    printf("做浮点运算.\n");
  }
  //我们也可以使用类型转换的形式:
  if (dividend / (double) divisor == 1.5){
    printf("做浮点运算.\n");
  } if (dividend / (double)2 == 1.5){
    printf("做浮点运算.\n");
  }
  return 0;
}
