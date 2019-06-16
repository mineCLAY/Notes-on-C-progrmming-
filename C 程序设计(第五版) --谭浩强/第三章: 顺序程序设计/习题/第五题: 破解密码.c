/*
 * 要将 "China" 译成密码
 * 译码规律是:
 * 用原来字母后面的第 4 个字母代替原来的字母.
 *
 * 编一程序
 * 用付出之的方法使 c1、c2、c3、c4、c5 五个变量的值分别为
 * 'C'、'h'、'i'、'n'、'a' 经过运算
 * 使 c1、c2、c3、c4、c5 分别变为
 * 'G'、'l'、'm'、'r'、'e'
 * 并输出
 */

#include <stdio.h>

int main(void) {

  char c1 , c2 , c3 , c4 , c5;
  scanf("%c%c%c%c%c" ,
         &c1 , &c2 , &c3 ,
         &c4 , &c5);

  c1 += 4;
  c2 += 4;
  c3 += 4;
  c4 += 4;
  c5 += 4;
  printf("%c%c%c%c%c" ,
          c1 , c2 , c3 ,
          c4 , c5);

  return 0;
}
