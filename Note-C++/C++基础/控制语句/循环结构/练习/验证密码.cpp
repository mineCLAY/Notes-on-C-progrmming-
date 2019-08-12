/*
 * 使用循环实现三次密码
 * 输入错误退出系统
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {

  // 定义变量
  string password;

  // 叫用户输入密码
  cout << "Enter password:" << endl;

  // 进行循环
  for (int i = 0; i < 3; i++) {

    // 将用户输入的密码赋给 password
    getline(cin , password);
    // 打印
    cout << "password: " << password << endl;

    // 如果用户输入正确
    if ("I'm GOD" == password) {

      // 打印
      cout << "yes" << endl;
      // 退出循环
      break;

    }

    // 输入错误
    else if ("I'm GOD" != password) {

      // 判断是否三次都输入错误
      if (i == 2) {

        // 打印
        cout << "Password error" << endl;
        // 退出循环
        exit(EXIT_FAILURE);

      }

    }

    // 叫用户重新输入密码
    cout << '\n' << "re - enter password:" << endl;

  }

  return 0;
}
