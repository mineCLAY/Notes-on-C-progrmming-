/*
 * 读一个文件并显示出其中 0 元素的位置
 */

#include <iostream>
// 文件流
#include <fstream>
// 字符串操作
#include <cstring>

// 程序入口
int main(int argc, char const *argv[]) {

  // 创建文件输入流对象
  std::ifstream file("payroll" , /* 可以不写 */ std::ios_base::in | std::ios_base::binary);

  // 判断是否打开
  if (file) {

    // 督导文件尾 file 为 0
    while (file) {

      // 取得当前位置指针指向的数据
      std::streampos here = file.tellg();

      // 存储数据
      int result;
      // 读取当前数据
      file.read(reinterpret_cast <char *> (&result) , sizeof(int));

      // 判断当前的数据是不是目前要查找的数据
      if (file && result == 0)
        // 输出要查找数据的位置
        std::cout << "Position " << here << " is 0" << std::endl;

    }

  } else {

    // 输出错误信息
    std::cout << "ERROR: Cannot open file 'payroll'" << std::endl;

  }

  // 关闭输入文件流
  file.close();

  std::cin.get();

  return 0;
}
