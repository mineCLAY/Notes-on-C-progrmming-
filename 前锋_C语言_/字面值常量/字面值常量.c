/*
 * 3.01 Example_Literal_Constants.c
 *
 * 写出下面程序的输出结果
 */

#include <stdio.h>

int main(void) {
  int a , b , c;
  a = 5;
  b = 6;
  c = 7;

  printf("%d\n\t%d %d\n %d %d\t\b%d\n" ,
          a , b , c , a , b , c); // 输出结果

  return 0;
}
