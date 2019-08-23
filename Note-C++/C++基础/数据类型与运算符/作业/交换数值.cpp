/*
 * 接收两个整数
 * 分别保存在两个变量中
 * 通过第三个变量将
 * 这两个变量的值互换
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  int a;
  int b;

  // 定义临时变量
  int temp;

  // 叫用户输入第一个数
  cout << "Enter the first number: ";
  // 将用户输入的数赋给变量
  cin >> a;

  // 叫用户输入第二个数
  cout << "Enter the second number: ";
  // 将用户输入的数赋给变量
  cin >> b;

  // 打印交换前
  cout << "Before exchange:" << endl;
  // 打印
  cout << a << endl;
  cout << b << endl;
  // 打印到换行
  cout << endl;

  // 开始交换
  temp = a;
  a = b;
  b = temp;

  // 打印交换后
  cout << "After exchange:" << endl;
  // 打印
  cout << a << endl;
  cout << b << endl;

  return 0;
}
