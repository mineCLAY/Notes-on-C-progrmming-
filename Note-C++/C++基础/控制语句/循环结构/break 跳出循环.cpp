/*
 * break 跳出循环
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  int age;

  // 循环
  for (; ;) {

    // 叫用户输入
    cout << "Enter age:" << endl;
    // 将用户输入的的年龄赋给变量
    cin >> age;

    // 判断是否非法
    if (0 > age) {

      // 打印出错
      cout << "Input error" << endl;
      // 退出循环
      break;

    }

  }

  return 0;
}
