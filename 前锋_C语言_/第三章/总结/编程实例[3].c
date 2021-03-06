/*
分析: 设计编程思路
01. 首先 , 理解 '0' 和 0 是否一样
    查 Ascii 表 , 字符型 '0' 是 48 (0x30)
    打印一下 , ch = '0' , 按 %c %d 显示结果
    发现字符 '0' 在内存中存的就是整数 48
02. 字符型数字和对应的整型数字之间差 48
    字符型 '0' 当然减去 48 就是 0
03. 结论: 把字符型数字转换成整型数字需要减去 48
最后 我让用户自己输入一个 字符型数字 然后转换为 整型数字
*/

//编程 , 把一个一位字符型数字 , 转换成对应的整型数字

#include <stdio.h>

int main(){
  char ch = '0' , a;
  printf("字符型数字: %c\n整型数字是: %d\n" , ch , ch);
  int num = ch - 0x30; //定义一个整型变量 num 让 ch 减去 0x30(48)
  printf("%d\n" , num);
  printf("输入一个字符型数字: \n");
  scanf("%c" , &a);
  printf("\n整型数字是: %d\n" , a);
  return 0;
}
