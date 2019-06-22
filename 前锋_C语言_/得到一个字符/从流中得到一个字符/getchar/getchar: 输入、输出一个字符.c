/*
 * 6.01 getchar.c
 *
 * 输入、输出一个字符
 */

#inlcude <stdio.h>

int main(void) {

  char c; // 定义一个存放字符的变量

  printf("Enter a character:\n"); // 叫用户输入一个字符

  printf("你输入的字符是: %c\n" ,
          c = getchar()); // 输出用户输入的字符

  return 0;
}
