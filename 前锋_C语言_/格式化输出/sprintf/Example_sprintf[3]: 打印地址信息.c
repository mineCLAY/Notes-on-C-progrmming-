/*
 * 4.05. Example_sprintf.c
 *
 * 打印地址信息
 */

#include <stdio.h>

int main(void) {

  char str[64];
  int i = 100;

  sprintf(str , "%u" , (unsigned int)&i);
  printf("%s\n" , str);

  sprintf(str , "%8X" , (unsigned int)&i);
  printf("%s\n" , str);

  sprintf(str , "%p" , &i);
  printf("%s\n" , str);

  sprintf(str , "%0*x" , (int)(2 * sizeof(void *)) ,
	        (unsigned int)&i);
  printf("%s\n" , str);

  return 0;
}
