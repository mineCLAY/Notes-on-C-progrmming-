/*
 * 01. Exchange Content
 *     有两个整数 a = 8 , b = 16 , 编程实现 a 和 b 的值进行交换
 */

#include <stdio.h>

int main(void){
  int a = 8 , b = 16;
  printf("交换前:\na = %d\nb = %d\n" , a , b);
  int c = a;
  a = b;
  b = c;
  printf("交换后:\na = %d\nb = %d\n" , a , b);
}
