/*
 * 打印挖空的长方形
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义常量
  const int NUM = 9;

  // 循环打印
  for (int i = 0; i < NUM; i++) {

    // 判断是否在开头、末尾一行
    if ((0 == i) || (i == NUM - 1)) {

      // 循环打印
      for (int j = 0; j < NUM; j++) {

        // 打印
        cout << '*';

      }

      // 打印换行
      cout << endl;

      // 执行下一次循环
      continue;

    }

    // 打印空格或者 '*'
    for (int j = 0; j < NUM; j++) {
      // 判断是否在开头、末尾
      if ((j == 0) || (j == NUM - 1)) {

        // 打印 '*'
        cout << '*';

        // 执行下一次循环
        continue;

      }

      // 打印空格
      cout << ' ';

    }

    // 打印换行
    cout << endl;

  }

  return 0;
}
