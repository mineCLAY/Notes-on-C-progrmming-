/*
 * get 函数应用举例
 */

#include <iostream>

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义字符变量
  char charactor;

  // 循环输入字符并且输出
  while (EOF != (charactor = std::cin.get()))
    // 输出字符
    std::cout.put(charactor);

  std::cin.get();
  std::cin.get();

  return 0;
}
