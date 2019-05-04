//Output ASCLL Table , 输出 ASCLL 对应的数字和字符

#include <stdio.h>

int main(void){
  unsigned char c; //如果不是 unsigned 就会循环
  for(c = 1 ; c= <= 128 ; ++c){
    printf("数字 = %d 字符 = %c\n" , c , c);
  }
  return 0;
}
