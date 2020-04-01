/*
 * 文件输出流的使用
 */

#include <iostream>
// 字符串流
#include <fstream>
// 输出输入格式控制
#include <iomanip>

// 定义输出文件流对象关联文件
std::ofstream F("output.out");
/*
 * 调用宏 D(t) 的效果为:
 * 把语句 "t" 的文字输出到
 * 文件 "output.out"
 * 并且执行语句 "t"
 */
#define D(t) std::cout << #t << std::endl; t

// 程序入口
int main(int argc, char const *argv[]) {

  // 将 53 写入文件
  D(int i = 53);
  // 将 0.66666666 写入文件
  D(float f = 0.66666666);

  // 每次输入输出都立即刷新
  D(F << setprecision(std::ios::unitbuf);)

  // 输出时显示所有数值的基数
  D(F.setf(std::ios::showbase);)
  /*
   * 以大写的形式显示科学记数法
   * 中的 "e" 和十六进制格式的 "x"
   */
  D(F.setf(std::ios::uppercase);)
  // 在非负数值前面显示 "+" (正号)
  D(F.setf(std::ios::showpos);)

  // 输出 i 的值到文件
  D(F << i << std::endl;)

  // 用十六进制格式显示数并清理位值 (复位)
  D(F.setf(std::ios::hex , std::ios::basefield);)

  // 输出 i 的值到文件
  D(F << i << std::endl;)

  // 清除与当前流相关的给定的标志
  D(F.unsetf(std::ios::uppercase);)
  // 用八进制格式显示数据并清理位值 (复位)
  D(F.setf(std::ios::oct , std::ios::basefield);)

  // 输出 i 的值到文件
  D(F << i << std::endl;)

  // 清除与当前流相关的给定的标志
  D(F.unsetf(std::ios::showbase);)
  // 用十进制格式显示数据并清理位值 (复位)
  D(F.setf(std::ios::dec , std::ios::basefield);)
  // 设置左对齐 (设置对齐方式)
  D(F.setf(std::ios::left , std::ios::adjustfield);)

  // 将填充符设置为 '0'
  D(F.fill('0');)
  // 设置小数位数为 60
  D(F << std::setw(60);)

  // 输出 f 的值
  D(F << f << std::endl;)

  std::cin.get();

  return 0;
}
