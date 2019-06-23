//用 goto 语句和 if 语句构成循环求 1 + 2 + 3 + ...... + 100

#include <stdio.h>

int main( ){
 int i , sum = 0;
 i = 1;
 loop: if (i <= 100){
    sum = sum + i;
    i++;
    goto loop;
  }
  printf("%d\n" , sum);
  return 0;
}
