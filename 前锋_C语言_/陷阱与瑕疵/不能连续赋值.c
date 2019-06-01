#include <stdio.h>

int main(void){
  //int a = b = c = 8; // 这样是不行的
  int a = 8 , b = 8 , c = 8; // 这样分开赋值 OK
  printf("a = %d , b = %d , c = %d\n" , a , b , c);
  return 0;
}
