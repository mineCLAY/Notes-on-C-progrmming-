// Diligence_Resolve

#include <stdio.h>

int main(void){
  int a = 2 , b = 3 , c = 4 , d = 5 , e = 6;
  d = (a = b + c) * e; // 可读性低
  printf("a = %d , b = %d , c = %d , d = %d , e = %d\n" ,
          a , b , c , d , e);

  a = b + c; // 可读性
  d = a * e; // 高
  printf("a = %d , b = %d , c = %d , d = %d , e = 6\n" ,
          a , b , c , d , e);

  return 0;
}
