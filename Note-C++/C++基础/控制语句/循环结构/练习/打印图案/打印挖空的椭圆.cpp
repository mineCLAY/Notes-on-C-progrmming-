/*
 * 打印挖空的椭圆
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义整型常量
  const int NUM = 7;
  // 定义存储循环次数的变量
  int a = 0;

  // 打印第一部分
  for (int i = 2; i >= 0; i -= 2) {

    // 打印空格
    for (int j = 0; j <= i; j++) {

      // 打印
      cout << ' ';

      // 判断是否要删除空格
      if (i == 2) {

        // 让 a 自加
        a++;

        // 判断 a 是否为 1
        if (1 == a) {

          // 删除空格
          cout << "\b";

        }

      }

    }

    // 打印 '*'
    for (int j = 0; j <= i; j++
    ) {

      // 打印
      cout << '*';

      /*
       * 判断是否到了
       * 需要打印空格的地方
       */
      if (i == 0) {

        // 打印 3 个空格
        cout << "   ";

        // 打印 '*'
        cout << '*';

      }

    }

    // 打印换行
    cout << endl;

  }

  // 打印第二部分
  for (int i = 0; i < NUM; i++) {

    // 打印
    cout << "*     *" << endl;

  }

  // 打印第三部分
  for (int i = 0; i < 2; i++) {

    // 打印空格
    for (int j = 1; j <= i + 1; j++) {

      // 打印空格
      cout << ' ';

    }

    // 打印 '*'
    for (int j = 0; j <= i + 1; j++) {

      // 打印
      cout << '*';

      /*
       * 判断是否到了
       * 需要打印空格的地方
       */
      if (i == 0)
        // 打印 3 个空格
        cout << "   ";

    }

    // 打印换行
    cout << endl;

  }

  return 0;
}
