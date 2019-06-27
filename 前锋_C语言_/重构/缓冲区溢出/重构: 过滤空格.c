/*
 * 重构: 过滤空格
 *
 * 11.04 Buffer_Residue_Refactoring.c
 */

#include <stdio.h>

int main(void) {

  char vote[6];

  // 开始循环 赋值
  for (int i = 0; i < 5; ++i) {
    // %c 前加了一个空格
    scanf(" %c" , vote[i]);
  }

  // 开始循环 
  for (int i = 0; i < 5; ++i) {
    printf("%c " , vote[i]);
  }

  // 输出换行
  putchar('\n');

  return 0;
}
