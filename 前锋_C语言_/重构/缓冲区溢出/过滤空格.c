/*
 * 过滤空格[失败]
 *
 * 11.03 Buffer_Residue_Original.c 
 */

#include <stdio.h>

int main(void) {

  char vote[6];

  // 叫用户输入一行字符串
  puts("Enter string:");
  // 开始循环 赋值
  for (int i = 0; i <5; ++i) {
    scanf("%c" , &vote[i]);
  }

  // 开始循环 输出
  for (int i = 0; i < 5; ++i) {
    printf("%c " , vote[i]);
  }

  // 输换行出
  putchar('\n');

  return 0;
}
