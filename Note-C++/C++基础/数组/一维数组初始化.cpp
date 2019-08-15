/*
 * 一维数组动态初始化
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义整型常量
  const int N = 5;
  // 定义数组
  int num[N];

  /*
   * 就算没有初始化数组
   * 定义时编译器自动赋值
   */
  cout << "array size: " << sizeof(num) / sizeof(int) << endl;

  // 循环动态赋值
  for (int i = 0; i < sizeof(num) / sizeof(int); i++) {

    // 叫用户输入
    cout << "Enter of " << (i + 1) << " array number";
    // 将用户输入的数据赋给变量
    cin >> num[i];

  }

  // 循环打印
  for (int i = 0; i < sizeof(num) / sizeof(int); i++) {

    // 打印
    cout << "You input of " << (i + 1)
         << " number is: " << num[i] << endl;

  }

  /*
   * C++ 允许不用
   * '=' 给数组初始化
   */
  int nums[] = { 8 , 4 , 2 , 1 , 23 , 344 , 12 };
  // 计算数组 nums 的长度
  int numsLen = sizeof(nums) / sizeof(int);
  // 定义变量
  int sum = 0;

  // 打印换行
  cout << endl;

  // 循环打印
  for (int i = 0; i < numsLen; i++) {

    // 打印
    cout << nums[i] << '\t';

  }

  // 打印换行
  cout << endl;

  // 累加操作
  for (int i = 0; i < numsLen; i++) {

    // 累加
    sum += nums[i];

  }

  // 打印结果
  cout << "Array sum: " << sum << '\t'
       << "avg number: " << sum / numsLen << endl;

  return 0;
}
