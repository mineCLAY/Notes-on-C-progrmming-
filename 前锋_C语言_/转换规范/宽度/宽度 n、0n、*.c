/*
 * 2.03_Example_Width.c
 * 宽度:
 * 宽度 , 用于规定输出宽度
 * 宽度符有: n、0n、*.
 */

#include <stdio.h>

int main(void) {
  // 01. n
  int id = 9527;
  printf("%8d\n" , id);
  printf("%-8\n" , id);

  // b. 如果字符串的长度、整型数位走过说明的宽度 ,
  //                      将按其实长度输出
  printf("%3d\n" , id);

  // c. 浮点数 , 若整数部分位超过了说明的整数位宽度
  //             按实际整数位输出
  double weight = 142.1415926;
  printf("%2f\n" , weight);
  printf("%10f\n" , weight);

  char char_var = 'a';
  // c. 空格之后有 7 个空格
  printf("char_var = %c , %8c\n" , char_var , char_var);

  // 02. 0n
  // 至少输出 n 个字符 (n 是正整数)
  // 如果输出值少于 n 个字符 , 则再左端填满 0.
  printf("%04d\n" , id);

  // 03. *
  // 输出字符个数由下一个输出参数指定 (其必须为一个整型量)
  printf("%*d10d\n" , id ,id);

  return 0;
}
