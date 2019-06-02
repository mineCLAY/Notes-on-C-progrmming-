/*
 * 三个数排序
 * 要求:
 * 只使用条件运算符
 * 求三个数中从小到大的顺序排列
 * 方法 1:
 * 不交换变量
 * 方法 2:
 * 交换变量
 * 方法 3:
 * 不声明其它变量
 */

#include <stdio.h>

int main() {
  int a , b , c;
  printf("input a , b , c:\n");
  scanf("%d %d %d" , &a , &b , &c);
  char max , min , zhongjian;

    if ((a < b) && (a < c)) {
      min = a;
    } else {
      max = a;
    }

    if ((b < a) && (b < c)) {
      min = b;
    } else {
      max = b;
    }

    if (((c < a) && ( c < b))) {
      min = c;
    } else {
      max = c;
    }

    if ((a < max) && (a > min)) {
      zhongjian = a;
    } else if ((b < max) && (b > min)) {
      zhongjian = b;
    } else if ((c < max) && (c > min)) {
      zhongjian = c;
    }

  printf("%d < %d < %d" , min , zhongjian , max);
  return 0;
}
