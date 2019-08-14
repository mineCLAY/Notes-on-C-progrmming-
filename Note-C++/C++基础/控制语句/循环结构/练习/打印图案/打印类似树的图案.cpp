/*
 * 打印类似树的图案
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义整型常量
  const int NUM = 7;

  // 打印上半部分
  for (int i = 0; i < 3; i++) {

    // 打印空格
    for (int j = 0; j < 2 - i; j++) {

      // 打印
      cout << ' ';

    }

    // 打印 '*'
    for (int j = 0; j <= i * 2; j++) {

      // 打印
      cout << '*';

    }

    // 打印换行
    cout << endl;

  }

  // 打印下半部分
  for (int i = 0; i < NUM; i++) {

    // 打印
    cout << "  " << '*' << endl;

  }

  return 0;
}
