/*
 * 用循环打印
 * 字母组成的菱形
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量 shap
  char shap = 'A';

  // 打印上半部分
  for (int i = 0; i < 4; i++) {

    // 打印空格
    for (int j = 0; j <= 2 - i; j++) {

      // 打印
      cout << ' ';

    }

    // 打印字母
    for (int j = 0; j <= i * 2; j++) {

      // 打印
      cout << shap;

    }

    // 让 shap 自加
    shap++;

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

    // 打印字母
    for (int j = 0; j <= 4 - i * 2; j++) {

      // 打印
      cout << shap;

    }

    // 让 shap 自加
    shap++;

    // 打印换行
    cout << endl;

  }

  return 0;
}
