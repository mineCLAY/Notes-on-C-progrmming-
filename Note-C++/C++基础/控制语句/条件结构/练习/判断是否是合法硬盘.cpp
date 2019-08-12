/*
 * 使用程序判断用户
 * 输入的字符是否是
 * 合法的硬盘盘符
 */

#include <iostream>

using namespace std;

int main() {

  // 定义变量
  char plate;

  // 叫用户输入一个硬盘盘符
  cout << "Enter the hard drive letter" << endl;
  // 将用户输入的字符盘符赋给变量 plate
  cin >> plate;

  // 判断是否在 A ~ Z 的范围
  if ((plate >= 'A') && ('Z' >= plate)) {

    // 打印错误
    cout << "创建成功" << endl;

  } else {

    // 打印错误
    cout << "error" << endl;

  }

  return 0;
}
