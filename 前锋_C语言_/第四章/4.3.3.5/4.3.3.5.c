//自加自减运算

#include <stdio.h>

int main(void){
  int i = 0; //定义 i = 0
  printf("i++ = %d\n" , i++); //先输出再 +1
  printf("i = %d\n" , i); //输出 i 的初始化值
  printf("\t++i = %d\n" , ++i); //先 +1 再输出
  printf("i = %d\n" , i); //输出加加后的 i
  return 0; //函数返回值为 0
}
