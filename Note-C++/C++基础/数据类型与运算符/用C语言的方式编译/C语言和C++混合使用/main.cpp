/*
 * extern "C" 的举例
 *
 * extern "C" 通常利用于 C++ 和 C 语言
 * 之间的互通互用
 * 比如头文件的实现是 C 语言编写
 * 而 C++ 要使用就要使用 extern "C"
 * 为什么 C 语言实现的函数 C++ 不能直接使用
 * 因为 C++ 有 name mangling 使将头文件的函数声明
 * 会自动进行改名
 * 而 C 语言却没有 name mangling
 * 所以 C++ 找不到 name mangling 后的函数实现
 *
 * 命令行指令:
 * g++ -c main.cpp -o mian.o
 * gcc -c other.c -o other.o
 * gcc -c math.c -o math.o
 * gcc main.o other.o math.o -lstdc++ -o main.exe
 */

#include <iostream>
// 自己定义的数学头文件
#include "math.h"

// 声明 other 函数
extern "C" void other();

// 程序入口
int main() {

  // 调用 C 语言编写的 other 函数
  other();

  // 测试头文件的函数是否能调用
  std::cout << sum(10 , 20) << '\n';
  std::cout << sum(666 , 0) << '\n';
  std::cout << sum(30 , 3) << std::endl;

  std::cin.get();

  return 0;
}
