/*
 * 声明 NUM 为整型数组类型
 *
 * typedef int NUM[100];
 */

#include <stdio.h>

// 用 typedef 声明 NUM 代替整型数组
typedef int NUM[100];

int main(void) {

  NUM num;

  // 输出 num 占的字节
  printf("numer byte: %d\n" ,
          sizeof (num));

  return 0;
}
