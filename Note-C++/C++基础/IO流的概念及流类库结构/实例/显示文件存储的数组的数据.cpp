/*
 * 创建一个数组
 * 通过键盘输入数据
 * 在屏幕显示出来
 * 使用 I/O 流把此数组的内容
 * 写入磁盘文件保存
 * 再显示出文件内容
 */

#include <iostream>
// 字符串流
#include <fstream>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义文件输出输入流
  fstream file(argv[1] , ios::out | ios::binary);

  // 判断是不是没有打开
  if (!file) {

    // 输出错误信息
    std::cout << "Cannot open file";
    // 退出程序
    exit(EXIT_FAILURE);

  }

  // 读入数据最大字节
  const int bsz = 1024;
  // 存储数据
  char buf[bsz];

  // 循环读入数据
  cin.getline(buf , bsz);

  // 输出数组
  cout << buf << endl;

  // 将数组存储的字符串存储进磁盘文件
  file << buf;

  // 将文件的位置指针设置为 0
  file.seekg(0);

  // 将文件存储的数据读取并输出
  file.read(buf , sizeof(buf));

  // 输出数据
  cout << buf << endl;

  // 关闭文件 (释放文件流的内存)
  file.close();

  std::cin.get();

  return 0;
}
