//表达式 01: int a = , b =5;

#include <stdio.h>

int main(void){
  int a = 2 , b = 5;
  int c = (a++ , b = 2 * a , a * ++b);
  //逗号表达式的求值顺序是自左向右:
  //01. 先计算 a++ 的值是: 2
  //02. 再计算 b = 2 * b 的值是: 6
  //03. 再计算 a * ++b 的值是: 21
  //04. 最后 把 a * ++b 的值 21 赋值给 c
  printf(" a = %d\n b = %d\n c = %d\n" , a , b , c);
  return 0;
}
