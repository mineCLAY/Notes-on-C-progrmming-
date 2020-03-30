/*
 * 为输出流指定一个终止符
 * (getline 函数应用举例)
 */

#include <iostream>

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义字符串变量
  std::string line;

  // 告诉用户输入 '\n' 结束字符串
  std::cout << "Type a line terminated '\\n'" << std::endl;
  // 存储用户输入的字符串
  getline(std::cin , line , '\n');

  // 输出字符串
  std::cout << line << std::endl;

  std::cin.get();

  return 0;
}
