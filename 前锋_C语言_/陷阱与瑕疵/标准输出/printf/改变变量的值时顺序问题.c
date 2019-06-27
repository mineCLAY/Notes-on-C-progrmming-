/*
 * 12.01 Traps_prntf.c
 */

#include <stdio.h>

int main(void) {

  int i = 8;

  // 编译器不知道执行顺序
  // printf("%d %d\n" , i , ++i);

  // 可以改成
  printf("%d\n" , i);
  printf("%d\n" , ++i);

  return 0;
}
