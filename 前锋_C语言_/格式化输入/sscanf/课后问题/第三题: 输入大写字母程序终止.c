/*
 * 03. 键盘输入字符
 * 知道读取到大写字母为止
 */

#include <stdio.h>

int main(void) {

  char character;
  printf("Enter a character:\n"); // 叫用户输入大写字母

  // 循环开始 直到输入大写字母为止
  for (; ;) {
    scanf("%c" , &character);
    // 判断 用户是否输入大写字母
    if (('A' <= character) && (character <= 'Z')) {
      printf("Program termination.\n");
      break;
    }
  }

  return 0;
}
