//'a' with 97 , 输出字符 'a' 和数字 97 的比较

#include <stdio.h>

int main(void){
  char c = 'a';
  int i = 97;
  if(i == c){
    printf("我们相等 , 这是怎么回事?\n");
  }
  printf("c = %d\n" , c);
  printf("i = %d\n" , i);
  printf("c = %c\n" , c);
  printf("i = %c\n" , i);
  return 0;
}
