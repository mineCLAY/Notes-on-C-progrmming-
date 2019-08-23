/*
 * 编写一个程序
 * 要求用户输入一个小写字母
 * 然后显示相应的大写字母
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  char character;

  // 叫用户输入一个字符
  cout << "Enter a lowercase letter: ";
  // 将用户输入的字符赋给变量
  cin >> character;

  // 打印转换前
  cout << "Before conversion: " << character << endl;

  // 打印转换后
  cout << "After conversion: " << (char)(character - 32) << endl;

  return 0;
}
