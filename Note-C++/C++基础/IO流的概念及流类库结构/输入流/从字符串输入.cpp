/*
 * 用 istringstream 将字符串转换为数值
 */

#include <iostream>
// 字符串流
#include <sstream>

// 将字符串转换为指定的类型
template <typename T>
inline T FromString(const std::string &str) {

  // 创建字符串输入流
  std::istringstream is(str);

  // 存储转换的结果
  T result;
  // 从字符串输入流读取数据转换后赋值给变量 result
  is >> result;

  // 返回变量 result
  return result;

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义变量存储转换的字符串
  int testInt = FromString <int> ("666");
  // 输出转换后的结果
  std::cout << testInt << std::endl;

  // 定义变量存储转换的字符串
  double testDouble = FromString <double> ("0.666");
  // 输出转换后的结果
  std::cout << testDouble << std::endl;

  std::cin.get();

  return 0;
}
