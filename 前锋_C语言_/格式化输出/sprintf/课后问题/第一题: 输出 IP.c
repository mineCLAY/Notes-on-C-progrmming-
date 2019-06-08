/*
 * 01.
 *
 * 键盘输入 IP 地址(隐私用假的)
 * 然后把它打印到屏幕上
 */

#include <stdio.h>

int main(void) {

  char str[666];

  sprintf(str , "%s%s%s%s" , "192." , "168." , "1." , "66"); // 连接 IP 段
  printf("%s\n" , str);

  return 0;
}
