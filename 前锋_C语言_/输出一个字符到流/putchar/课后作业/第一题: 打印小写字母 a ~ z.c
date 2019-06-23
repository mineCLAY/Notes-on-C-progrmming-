/*
 * 打印小写字母
 * a 到 z 到屏幕上
 */

#include <stdio.h>

int main(void) {

  // 定义存贮字符的变量
  char ch = 'a';

  for (int i = 0; i < 26; i++ , ch++) {
    putchar(ch);
    putchar('\n');
  }

  return 0;
}
