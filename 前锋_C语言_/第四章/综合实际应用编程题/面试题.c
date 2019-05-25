/*
01. 求出打印结果
#include <stdio.h>
int mian(void){
  int i = 8;
  printf("%d\n%d\n%d\n%d\n%d\n%d\n" , ++i , --i , i++ , i-- , -i++ , -i--);
  //      8   8   7   8  -7  -8
  return 0;
}
