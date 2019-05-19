//01. 填空求出下列表达式的值 . 假设 x 和 y 的字节为 0x66 和 0x39 ; 填写下表 , 指明各个 C 表达式的字节值.

表达式           值          表达式           值
=====           ==          =====           ==

x & y           1           x && y          1
x | y           1           x || y          1
~x | ~y         0           !x || ！y       0
x & !y          0           x && ~y         0

//02. 键盘输入一个整数 , 然后再输入整数的倍数 , 编程计算并打印

#include <stdio.h> //编辑头文件 stdio.h 标准输出输入

int main(void){ //定义主函数 main 并开始
  int a , b; //定义两个整型变量 a , b 
  printf("输入一个数 与它的倍值:\n"); //叫用户输入 a 的倍值
  scanf("%d%d" , &a , &b); //让用户输入 a 的倍值
  printf("%d 的 %d 倍是 %d\n" , a , b , a << b); //输出结果
  return 0; //函数返回值 0
} //main 主函数结束

//03. 根据前锋讲过的位运算 , 分别编写如下函数: 要取得指定位的值、把指定位设置 1、把指定位清 0、把指定位翻转 最后结果, 这四个函数 , 并打印示例

#include <stdio.h> //编辑头文件 stdio.h 标准输出输入

int main(void){ //定义主函数 main 并开始
  int resulf , real_resulf , Specified1 = 1, Specified2 = 0 , Specified3; //定义五个整型的基本需要完成的变量
  printf("输入 本来指定值、指定位:\n"); //叫用户输入 resulf & Specified3
  scanf("%d%d" , &resulf , &Specified3); //让用户输入 resulf & Specified3
  real_resulf = resulf << Specified3; //初始化值 real_resulf
  printf(" 本来指定值: %d\n 指定位清零: %d\n 现在指定位: %d\n 结果: %d\n" , Specified1 , Specified2 , Specified3 , real_resulf); //输出结果
  return 0; //函数返回值 0
} //main 主函数结束
