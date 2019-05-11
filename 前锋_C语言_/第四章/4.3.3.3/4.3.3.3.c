//赋值运算符

#include <stdio.h>

int main(void){
  double PI = 3.141592654;
  int x , m; //定义整型变量 x
  x = 8; //把 8 赋值给 x
  m = ++x; //让 x 自加 赋值给 m
  printf("x = %d\nm = %d\n" , x , m); //输出 x , m 的值 结果: 9 9
  getchar(); //让可执行程序停留
  return 0;
}
