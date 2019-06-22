/*
 * 键盘输入字符
 * 如果是数字范围
 * 则打印:
 * 你输入的是数字
 * 如果是字母范围
 * 则打印:
 * 你输入的是字母
 * 如果是其它
 * 则打印:
 * 你输入的是其它字符
 */

#include <stdio.h>

int main(void) {

  char c;
  c = getchar();

  // 判断 c 属于数字吗
  if (('1' <= c) && (c <= '9')) {
    printf("你输入的是数字\n");
  }
  // 判断 c 属于字母吗
  else if (('A' <= c) && (c <= 'z')) {
    printf("你输入的是字母\n");
  } else { //判断 c 属于其它么
    printf("你输入的是其它\n");
  }

  return 0;
}
