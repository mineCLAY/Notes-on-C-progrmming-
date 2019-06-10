/*
 * 4.11. IPP_snprintf.c
 *
 * 黑客艺术
 */

#include <stdio.h>

int main(void) {

  char buf[32];
  int pos = 0;
  int x = 0;

  snprintf(buf , sizeof(buf) , "%.100d%n" , x , &pos);
  printf("buf = %s\n" , buf);
  printf("pos = %d\n" , pos);

  sprintf(buf , "%.100d%n" , x , &pos);
  printf("buf = %s\n" , buf);
  printf("pos = %d\n" , pos);

  return 0;
}
