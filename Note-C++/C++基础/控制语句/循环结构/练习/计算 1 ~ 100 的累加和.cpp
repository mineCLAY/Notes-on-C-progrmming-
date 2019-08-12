// 使用循环计算 1 ~ 100 的累加和

#include <iostream>

using namespace std;

int main() {

  // 定义变量
  int sum = 0;

  // 累加
  for (int i = 1; i <= 100; i++) {

    // 开始累加
    sum += i;

  }

  // 打印
  cout << "1 + 2 ...... + 100 = " << sum << endl;

  return 0;
}
