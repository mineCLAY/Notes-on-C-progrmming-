// while 语句的死循环
// 这样子循环永远不会退出 !

#include <stdio.h>

int main( ){
 int i , sum;
  i = 1;
  while (1 <= 100)
/************************
**不要迷恋哥 , 哥可是死循环**
************************/
  // {
    sum = sum + i;
    i++;
  // }
  printf("%d\n" , sum);
  return 0;
}
