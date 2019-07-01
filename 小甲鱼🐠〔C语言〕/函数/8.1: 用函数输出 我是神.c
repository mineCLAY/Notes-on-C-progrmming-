#include <stdio.h>

int main(void) {

  // 对 pritstar 函数声明
  void printstar();
  // 对 print_message 函数声明
  void print_message();

  // 调用 printstar 函数
  printstar();
  // 调用 print_message 函数
  print_message();
  // 调用 printstar 函数
  printstar();

  return 0;
}

// 定义 printstar 函数
void printstar() {

  printf("*************\n");

}

// 定义 print_message 函数
void print_message() {

  printf("\t我是神!\n");

}
