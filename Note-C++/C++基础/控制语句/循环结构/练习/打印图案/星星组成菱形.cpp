/*
 * 循环打印图案
 */

#include <iostream>

using namespace std;

int main(void) {

  // 打印图案上半部分
  for (int i = 0; i < 4; i++) {

    // 打印空格
    for (int j = 0; j <= 2 - i; j++) {

      // 打印
      cout << ' ';

    }

    // 打印 '*'
    for (int j = 0; j <= i * 2; j++) {

      cout << '*' ;

    }

    // 打印换行
    cout << endl;

  }

  // 打印图案下半部分
  for (int i = 0; i < 3; i++) {

    // 打印空格
    for (int j = 0; j <= i; j++) {

      // 打印
      cout << ' ';

    }

    // 打印 '*'
    for (int j = 0; j <= 4 - i * 2; j++) {

      // 打印
      cout << '*';

    }

    // 打印换行
    cout << endl;

  }

  return 0;
}
