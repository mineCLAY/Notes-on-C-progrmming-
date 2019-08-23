/*
 * 编写一个程序
 * 要求根据输入
 * 矩形的长和宽
 * 计算矩形的
 * 面积和周长
 */

#include <iostream>
// 导入包 stdio
#include <cstdio>

using namespace std;

int main(void) {

  // 定义变量
  int length , width;

  // 叫用户输入长和宽
  puts("Enter length and width");
  // 将用户输入的数赋给变量
  cin >> length  , width;

  // 打印结果
  cout << "Perimeter: " << length * width << endl;
  cout << "Area: " << 2 * (length + width) << endl;

  return 0;
}
