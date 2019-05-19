//02. 通过位操作符 , 提高效率
//位运算 

#include <stdio.h>

int main(void){
  int x = 512 >> 3;
  int y = 1000 % 16;
  int y1 = 1000 & (16 - 1);
  printf("x = %d , y = %d , y1 = %d\n" , x , y , y1);
  return 0;
}
