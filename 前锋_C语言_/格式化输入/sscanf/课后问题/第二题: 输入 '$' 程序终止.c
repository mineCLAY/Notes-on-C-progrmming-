/*
 * 02. 键盘输入字符
 * 知道读取到指定字符 '$'(原文的符号无法打出所以换成 '$') 为止
 */

#include <stdio.h>

int main(void) {

  printf("Enter a character:\n");
  for (char character; ;) {
    scanf("%c" , &character);

    // 判断是否为 '$'
    if ('$' == character) {
      printf("Program termination.\n");
      break;
    }
  }

  return 0;
}
