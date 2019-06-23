//while 语句中的表达式一般是关系表达式或逻辑表达式 , 只要表达式的值为真(非 0)即可继续循环

#include <stdio.h>

int main( ){
  int a = 0 , n;
  printf("input n:\n");
  scanf("%d" , &n);
  while (n--){
    printf("%d" , a++*2); //a++*2 相当于 a * 2; a++
  }
}
