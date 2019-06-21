/*
 * 01. 键盘输入数字 1 ~ 100 存到数组中
 * 遇到 4 的倍数全部过滤掉
 */

#include <stdio.h>

int main(void) {

  int str[256];
  printf("Enter a number from 1 to 100\n");

  for (int i = 0; i <= 100; i++) {
    scanf("%d" , &str[i]); // 用户输入的值存入 str 数组 i 中

    // 判断输入的数是否为 4 的倍数
    if (0 != str[i] % 4) {
      printf("%d\n" , str[i]);
    }
  }

  return 0;
}
