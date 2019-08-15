/*
 * 数组的排序方法
 *
 * 1. 冒泡排序
 * 2. 选择排序
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义数组
  int num[] = { 0000 , 233 , 666 , 888 , 999 , 444 , 520 , 777 };
  // 定义中间变量
  int temp;

  // 循环实现冒泡排序
  for (int i = 0; i < sizeof(num) / sizeof(num[0]) - 1; i++) {

    // 内层嵌套控制比较次数
    for (int j = 0; j < sizeof(num) / sizeof(num[0]) - i - 1; j++) {

      /*
       * 判断前面一个数组元素
       * 是否小于后一个数组元素
       */
      if (num[j] < num[j + 1]) {

        // 开始交换
        temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;

      }

    }

  }

  // 循环打印
  for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {

    // 打印
    cout << num[i] << ' ';

  }

  // 打印换行
  cout << endl;

  // 定义数组
  int nums[] = { 0000 , 233 , 999 , 666 , 520 , 888 };
  // 假设第一个元素是最小值
  int min = nums[0];
  // 去除假设最小值的下标
  int minIndex = 0;
  /*
   * 定义变量存储数组的长度
   * (字节)
   * 不能用于 string 数组
   */
  int numsLen = sizeof(nums) / sizeof(nums[0]);

  // 循环实现选择排序
  for (int i = 0; i < numsLen - 1; i++) {

    // 假设第 i 个元素是最小值
    min = nums[i];
    // 将其下标存储赋给变量
    minIndex = i;

    // 嵌套循环
    for (int j = 0; j < numsLen; j++) {

      /*
       * 判断当前数组元素是否
       * 小于 min 存储的元素
       */
      if (num[j] < min) {

        // 元素交换
        min = nums[j];
        // 下标赋值
        minIndex = j;

      }

    }

    /*
     * 判断最小值的下标是否比
     * 此时循环次数大
     */
    if (minIndex > i) {

      // 交换
      temp = nums[minIndex];
      nums[minIndex] = nums[i];
      nums[i] = temp;

    }

  }

  // 打印换行
  cout << endl;

  // 循环打印
  for (int i = 0; i < numsLen; i++) {

    cout << nums[i] << endl;

  }

  // 打印提示
  cout << "\n逆序后:\n" << endl;

  // 循环打印
  for (int i = numsLen - 1; i >= 0; i--) {

    // 打印
    cout << nums[i] << endl;

  }

  return 0;
}
