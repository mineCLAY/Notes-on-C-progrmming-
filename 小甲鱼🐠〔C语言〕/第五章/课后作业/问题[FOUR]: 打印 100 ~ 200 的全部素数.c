/*
 * proble NO.FOUR
 *
 * 题目升级: 
 * 求 100 ~ 200 间的
 * 全部素数并打印出来
 */

#include <stdio.h>

int main(void) {

  // 定义所需变量
  int NO = 100 , i = 1 , n = 0;

  // 开始嵌套循环
  for (; NO <= 200; NO++) {
    // 开始循环判断
    for (; NO >= i; i++) {
      if (0 == NO % i)
        n++;
    }
  if (n == 2)
    printf("%d\n" , NO);
  n = 0;
  i = 1;
  }

  return 0;
}
