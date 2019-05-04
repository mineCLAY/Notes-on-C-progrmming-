#include <stdio.h>

int main(){ //主函数
  int a = 88 , b = 89; //定义变量 a , b 的值
  printf("%d , %d\n" , a , b); //以整型输出变量 a , b
  printf("%c , %c\n" , a , b); //以字符型输出变量 a , b
  printf("a = %d , b = %d" , a , b); //更加准确地以整型输出变量 a , b
  return 0; //使函数返回值为 0
}
