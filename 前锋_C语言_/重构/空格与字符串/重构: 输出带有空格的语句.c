/*
 * 重构: 输出带有空格的语句(scanf)
 *
 * 11.02 String_Spaces_Refactoring.c
 */

#include <stdio.h>

int main(void) {

  printf("说出你最想和他、她说的一句话:\n");
  char str[128];
  // 输出 换行 以外一行的字符串
  scanf("%[^\n]" , str);
  printf("%s\n" , str);

  return 0;
}
