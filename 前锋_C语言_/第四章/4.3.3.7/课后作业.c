//01. 写出逻辑运算符 , 假设一个程序同时满足条件 a < b 和 b == 7 时 ， 必须执行某些操作.

#include <stdio.h> //编辑头文件 stdio.h 标准输出输入

int main(void){ //定义主函数 main 并且开始
  int a , b; //声明两个整数类型的变量 a , b
  printf("input tow numbers:\n"); //叫用户输入两个数
  scanf("%d%d" , &a , &b); //让用户输入 a , b 的值并赋值
  if((a < 10) && (b == 7)){ //判断 a < 10 与 b == 7 是否成立
    printf("a < 10\nb == 7\n"); //如果成立就输出结果
  } else { //如果不成立就执行 else 其它
    printf("a !< 10\nb != 7\n"); //输出结果
  } //else 结束
  return 0; //主函数返回值 0
} //main 主函数结束

//02. 求出下面要打印的程序结果.

#include <stdio.h> //编辑头文件 stdio.h 标准输出输入

int main(void){ //定义主函数 main 并且开始
  char c = 'k'; //定义字符型变量 c  = 'k'
  int i = 1 , j =  2 , k = 3; //定义三个整数类型变量并赋值 i = 1 , j = 2 , k = 3
  float x = 3e+5 , y = 0.85; //定义两个单精度浮点型变量并赋值 x = 3e+5 , y = 0.85
  printf("%d , %d\n" , !x * !y , !!!x); //输出结果
  printf("%d , %d\n" , x || i && j - 3 , i < j && x < y); //输出结果
  printf("%d , %d\n" , i == 5 && c && (j = 8) , x + y || i + j + k); //输出结果
  return 0; //函数返回值 0
} //main 主函数结束
