/*
 * 输入直角三角形的两条直角边 a , b
 * 利用勾股定理 , 求斜边 c. 要求保留 2 位小数.
 */

#include <stdio.h>
#include <math.h>
int main(void){
  int a , b;
  printf("输入直角三角形的直角边长度 , a 和 b:\n");
  scanf("%d %d" , &a , &b);
  double c = sqrt(a * a + b * b);
  printf("直角三角形的斜边长度 c = %0.2f\n" , c);
  return 0;
}
