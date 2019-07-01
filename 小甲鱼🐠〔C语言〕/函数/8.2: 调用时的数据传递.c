#include <stdio.h>

int main(void) {

  // 对 max 函数的声明
  int max(int x , int y);
  int a , b , c;
  scanf("%d %d" , &a , &b);
  c = max(a , b);
  printf("Max is %d\n" , c);

  return 0;
}

// 定义有参函数
int max(int x , int y) {

  int z;
  z = x > y ? x : y;

  return z;
}
