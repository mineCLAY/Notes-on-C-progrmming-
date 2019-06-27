/*
 * 11.01 String_Spaces_Original.c
 */

#include <stdio.h>

int main(void) {

  printf("说出你最想和他、她说的一句话:\n");
  char str[128];
  // 错误 不能输出整段有空格语句
  // scanf("%s" , str);
  gets();
  printf("%s\n");

  return 0;
}
