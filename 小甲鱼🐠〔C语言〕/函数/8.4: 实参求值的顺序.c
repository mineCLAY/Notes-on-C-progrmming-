#include <stdio.h>

int main(void) {

  // 函数声明
  int f(int a , int b);
  // 定义所需变量
  int i = 2 , p;

  // 函数调用
  p = f(i , ++i);
  // 输出结果
  printf("%d\n" , p);


  return 0;
}

// 函数定义
int f(int a , int b) {

  int c;

  if (a > b) {
    c = 1;
  } else if (a == b) {
    c = 0;
  } else {
    c = -1;
  }

  return c;
}
