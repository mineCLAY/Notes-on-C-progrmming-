/*
 * 02.
 *
 * 使用 sprintf 来把你最喜欢(因为没有所以瞎编)的一首诗写到文件里
 * 并查看一共写了多少个字节
 */

#include <stdio.h>

int main(void) {

  char byte[520];
  char *str = "Like Hu";
  int cnt = sprintf(byte , "%s" , str);

  int Love = 520;
  cnt = cnt + sprintf(byte + cnt , "%d\n" , Love);

  char *mine = "Hu JW I like you!";
  cnt = cnt + sprintf(byte + cnt , "%s" , mine);

  printf("byte: %s\ncharacter cnt = %d\n" ,
          byte , cnt);

  return 0;
}
