//Input/Output Character , 从键盘输入一个字符 , 在屏幕上输出出来

#include <stdio.h>

int main(void){
  char c;
  printf("从键盘上输入一个字符:\n");
  scanf("%c" , &c);
  printf("你刚才输入的字符是: %c\n" , c);
  return 0;
}
