#include <stdio.h> //编辑头文件 stdio.h 标准输出输入

int main(void){ //定义主函数 main 并开始
  int a = 8 . b = 9 , c = 10 , d = 11; //定义几个整数类型变量
  d = a++ || ++b && --c; //逻辑运算
  printf(" a = %d\n b = %d\n c = %d\n d = %d" , a , b , c , d); //输出 a , b , c , d 的值
  return 0; //函数返回值 0
} //main 主函数结束
