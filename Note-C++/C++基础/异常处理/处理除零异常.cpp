/*
 * 处理除零异常
 */

#include <iostream>

using namespace std;

// 可能出现异常的函数
int Divide(int x , int y) {

  // 判断 y 是否等于 0
  if (0 == y)
    // 抛出异常
    throw x;

  return x / y;

}

// 程序入口
int main() {

  // 尝试运行保护段代码
  try {

    // 判断传入数据是否能进行除法
    cout << "5 / 2 = " << Divide(5 , 2) << endl;
    // 发生异常
    cout << "666 / 0 = " << Divide(666 , 0) << endl;
    // 不执行
    cout << "7 / 1 = " << Divide(7 , 1) << endl;

  } /* 捕获异常 */ catch (int temp) {

    // 输出异常信息
    cout << temp << " is divided by zero!" << endl;

  }

  cin.get();

  return 0;
}
