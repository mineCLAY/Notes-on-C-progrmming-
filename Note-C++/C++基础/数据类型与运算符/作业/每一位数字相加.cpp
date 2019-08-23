/*
 * 编写一个C++程序
 * 接收用户输入的
 * 四位整数
 * 将该数的每一位数字
 * 相加并显示结果
 */

#include <iostream>
// 导入函数库 stdio
#include <cstdio>

using namespace std;

int main(void) {

  // 定义变量
  int a;
  int b;
  int c;
  int d;
  int fourDigit;

  // 叫用户输入一个四位数
  cout << "Enter a four digit number: " << endl;
  /*
   * 将用户输入的四位数
   * 把每个位的数取出来
   */
	scanf("%1d%1d%1d%1d" , &a , &b , &c , &d);

  // 另一种方法
  cin >> fourDigit;

  // 使用取膜的方法去每个位的数
  a = fourDigit % 10;
  b = fourDigit / 10 % 10;
  c = fourDigit / 10 / 10 % 10;
  d = fourDigit / 10 / 10 / 10 % 10;

  // 打印四个数相加结果
  cout << "result: "
       << a + b + c + d << endl;

  return 0;
}
