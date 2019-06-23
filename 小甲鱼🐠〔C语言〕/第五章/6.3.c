//统计从键盘输入一行字符的个数

#include <stdio.h>

int main( ){
  int n = 0;
  printf("input a string\n");
  look: if (getchar() != '\n'){
    n++;
    goto look;
  }
  printf("%d\n" , n);
  return 0;
}

//简介:
//本例程序中的循环条件为 getchar() != '\n' , 其含义是 , 只要从键盘输入的字符不是回车就继续循环 . 循环体 n++ 完成对输入字符个数计数 . 从而程序实现了对输入一行字符的字符个数计数
