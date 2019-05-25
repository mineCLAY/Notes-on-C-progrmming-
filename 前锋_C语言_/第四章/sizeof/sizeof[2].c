#include <stdio.h>

int main(void){
  static char heroname[64];
  static int swordman;
  printf("sizeof(heroname) = %lu\n" , sizeof(heroname));
  printf("sizeof(swordman) = %lu\n" , sizeof(swordman));
  printf("sizeof(heroname + 8 - 3) = %lu\n" , sizeof(heroname + 8 - 3));
  return 0;
}
