/*
 * 用二进制方式打开指定的一个文件
 * 在每一行前加行号
 */

#include <iostream>
// 字符串流
#include <fstream>

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义输入流对象
  std::ifstream in;
  // 打开用户输入的第一个文件
  in.open(argv[1] , std::ios::binary);

  // 判断是不是没有打开
  if (!in) {

    // 输出错误信息
    std::cout << "Cannot open file";
    // 退出程序
    exit(EXIT_FAILURE);

  }

  // 读入数据最大字节
  const int bsz = 1024;
  // 存储数据
  char buf[bsz];
  // 行号
  int line = 0;

  // 循环读入数据
  while (in.getline(buf , bsz))
    // 输入行号到 buf 数组中
    std::cout << ++line << ": " << buf << std::endl;

  std::cin.get();

  return 0;
}
