/*
 * 打印挖空的菱形
 */

#include <iostream>

using namespace std;

int main(void) {

  // 打印上半部分
  for (int i = 0; i < 4; i++) {

    // 打印空格
    for (int j = 0; j <= 2 - i; j++) {

      // 打印
      cout << ' ';

    }

    // 打印 '*' 和中间空格
    for (int j = 0; j <= i * 2; j++) {

      // 判断是否在开头或句末
      if ((0 == j) || (j == i * 2)) {

        // 打印 '*'
        cout << '*';

      } else {

        // 打印
        cout << ' ';

      }

    }

    // 打印换行
    cout << endl;

  }

  // 打印下半部分
  for (int i = 0; i < 3; i++) {

    // 打印空格
    for (int j = 0; j <= i; j++) {

      // 打印
      cout << ' ';

    }

    // 打印 '*' 和中间空格
    for (int j = 0; j <= 4 - i * 2; j++) {

      // 判断是否在开头或句末
      if ((0 == j) || (j == 4 - i * 2)) {

        // 打印
        cout << '*';

      } else {

        // 打印
        cout << ' ';
  
      }

    }

    // 打印换行
    cout << endl;

  }

  return 0;
}
