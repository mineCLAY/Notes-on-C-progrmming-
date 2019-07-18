/*
 * 声明 POINTER 为指向函数的指针类型
 * 该函数返回整型值
 *
 * typedef int (*POINTER)();
 */

#include <stdio.h>

// 用 typedef 声明函数指针类型
typedef int (*POINTER)();

int main(void) {

  // 声明函数 P
  int P();

  // 定义函数指针 p
  POINTER p;
  // 将它指向函数 P
  p = P();

  // 调用函数
  p();

  return 0;
}

// 定义函数 P
int P(void) {

  // 输出
  puts("I'm GOD!!!");

}
