/*
 * 声明 STRING 为字符指针类型
 *
 * typedef char* STRING
 */

#include <stdio.h>

// 用 typedef 声明字符指针类型
typedef char* P;

int main(void) {

  // 定义字符指针变量
  P pointer;
  // 给它赋初值
  pointer = "I'm GOD!!!";

  // 输出结果
  puts(pointer);

  return 0;
}
