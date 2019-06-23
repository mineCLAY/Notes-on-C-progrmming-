//do while 语句求 1 + 2 + 3 + ...... + 100

#include <stdio.h>

int main( ){
  int i , sum = 0;
  i = 1;
  do{
    sum = sum + i;
    i++;
  } while (i <= 100);
  printf("sum = %d\n" , sum);
  return 0;
}
