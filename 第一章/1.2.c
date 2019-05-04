// 求两个整数之和

#include <stdio.h> //这时变异预处理指令

int main() //定义主函数
{ //函数开始
  int a , b , sum; //本行是程序的声明部分 , 定义 a , b , sum 为整型变量
  a = 123; //对变量 a 赋值
  b = 456; //对变量 b 赋值
  sum = a + b; //进行 a + b 的运算 , 并把结果存放在变量 sum 中
  printf("sum = %d\n" , sum); //输出结果
  return 0; //使函数返回值为 0
} //函数结束
