/*
 * 编写一个程序
 * 输入 a , b , c 三个整数
 * 输出其中最大值
 */

#include <stdio.h>

int main(void) {

  int a , b , c , max;               // 

  scanf("%d %d %d" , &a ,  &b , &c); // 用户输入 3 个整数 存入变量 a b c
  if ((a > b) && (a > c)) {          // 判断 a 是否大于 b , c
    max = a;                         // 如果是 则 max = a 的值
  } else if ((b > a) && (b > c)) {   // 判断 b 是否大于 a , c
    max = b                          // 如果是 则 max = b 的值
  } else if ((c > a) && (c > b)) {   // 判断 c 是否大于 a , b
    max = c;                         // 如果是 则 max = c 的值
  }

  printf("%d\n" , max);              // 输出结果: 最大数
                                     // outputs result max
  return 0;
}
