#include <stdio.h>

int main(void){
  int a , b , c;
  printf("input a , b , c:\n");
  scanf("%d %d %d" , &a , &b , &c);
  int max;
  if((a > b) && (a > c))max = a;
  if((b > a) && (b > c))max = b;
  if((c > a) && (c > b))max = c;
  printf("max = %d" , max);
}
