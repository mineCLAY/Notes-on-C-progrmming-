/*
 * 4.07. Example_sprintf.c
 *
 * 看 sprintf 的返回值
 */

#include <stdio.h>

int main(void) {

  char buffer[128];
  char *str = "Dr.Yu";
  int cnt = sprintf(buffer , "%s" , str);

  char ch = 'a';
  cnt += sprintf(buffer + cnt , "%c" , ch);

  int data = 9527;
  cnt += sprintf(buffer + cnt , "%d" , data);

  double f = 1.6180339887;
  cnt += sprintf(buffer + cnt , "%f" , f);

  printf("buffer: %s\n , character cnt = %d\n" ,
	         buffer , cnt);
  return 0;
}
