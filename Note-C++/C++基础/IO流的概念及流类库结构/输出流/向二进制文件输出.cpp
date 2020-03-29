/*
 * 向二进制文件输出
 */

#include <iostream>
// 文件流
#include <fstream>

using namespace std;

// 定义结构体 Date
struct Date {

  // 定义成员
  int mon;
  int day;
  int year;

};

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义结构体变量
  Date dt = { 6 , 10 , 0 };

  // 定义二进制文件输出流对象
  ofstream file("date.dat" , ios_base::binary);

  // 定义文件流并判断是否出错
  if (!file)
    // 输出错误信息
    cerr << "Error message " << '\n';

  // 将 dt 写进 file 指向的二进制文件
  file.write(reinterpret_cast <char *> (&dt) , sizeof(dt));

  // 关闭二进制输出流对象
  file.close();

  cin.get();

  return 0;
}
