#include <stdio.h>

int main(void){
  int x = 8 , y = 4;
  int *p = &y;

  y = x / (*p);
  /*
   * 有些人 太贪心(想偷懒) 
   * 可能会错写成 y = x /* p
   * 这样会被视为注释
   * 所以最好有时不要贪心
   */
  printf("y = %d\n" , y);

  return 0;
}
