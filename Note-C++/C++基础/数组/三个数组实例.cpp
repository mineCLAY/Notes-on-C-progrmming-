/*
 * 1. 求数组中的
 *    最大值和最小值
 * 2. 定义一个整型 数组
 *    赋值后求出奇数个数和偶数个数
 * 3. 查找输入的数字在数组中的下标
 *    没有找到则下标为 -1
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义数组
  int num[] = { 233 , 666 , 888 , 0000 , 520 , 999 };
  // 假设第一个元素是最大值和最小值
  int max = num[0];
  int min = num[0];
  // 计算数组的长度 (字节)
  int numsLen = sizeof(num) / sizeof(int);
  /*
   * 定义存储最大值
   * 和最小值下标的变量
   */
  int maxIndex;
  int minIndex;

  // 循环找出真正最大值和最小值
  for (int i = 1; i < numsLen; i++) {

    /*
     * 循判后面的数组
     * 是否比 max 现存的大
     */
    if (num[i] > max) {

      // 将后面数据赋给 max
      max = num[i];
      // 记录最大值的下标
      maxIndex = i;

    }

    /*
     * 循判后面的数组
     * 是否比 max 现存的大
     */
    if (num[i] < min) {

      // 将后面数据赋给 max
      min = num[i];
      // 记录最大值的下标
      minIndex = i;

    }

  }

  // 打印
  cout << "Max number: " << max << endl;
  cout << "Max number index: " << maxIndex << endl;

  cout << "Min number: " << min << endl;
  cout << "Min number index: " << minIndex << endl;

  /*
   * 定义存储偶数个数
   * 和奇数个数的变量
   */
  int oCount = 0;
  int jCount = 0;

  // 循环记录奇数个数和偶数个数
  for (int i = 0; i < numsLen; i++) {

    // 判断当前数组远书是否是偶数
    if (0 == num[i] % 2) {

      // 让 oCount 自加
      oCount++;

    } else {

      // 让 jCount 自加
      jCount++;

    }

  }

  // 打印
  cout << "偶数个数: " << oCount << endl;
  cout << "奇数个数: " << jCount << endl;

  // 定义存储用户要查找数字的变量
  int searchNum;
  /*
   * 用户查找数字的下标
   * 初始化为整型最小值
   */
  int searchIndex = INT_MIN;

  // 叫用户输入一个数字
  cout << "Enter a number: " << endl;
  // 将用户输入的数字赋给变量
  cin >> searchNum;

  // 循环查找哦数字
  for (int i = 0; i < numsLen; i++) {

    // 判断是否是用户要查找的数字
    if (searchNum == num[i]) {

      // 将该数组下标赋给变量
      searchIndex = i;

    }

  }

  // 判断是否找到
  if (INT_MIN == searchIndex) {

    // 打印没有找到
    cout << "Not the number: " << searchNum << endl;

  } else {

    // 打印找到
    cout << "The number: " << searchNum
         << " Index is: " << searchIndex << endl;

  }

  return 0;
}
