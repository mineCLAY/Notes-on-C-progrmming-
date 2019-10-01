/*
 * 动态数组
 */

// 导入函数库 iostream
#include <iostream>
/*
 * 导入函数库 stddef
 * 因为要使用 NULL
 */
#include <cstddef>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义存储数组元素个数的变量
  unsigned int count = 0;

  // 叫用户输入数组元素
  cout << "Enter the number of array element: ";
  // 将函数元素赋给变量
  cin >> count;

  /*
   * new 一块 int[] 类型内存
   * (空间) 此内存在堆中
   * 定义指针变量
   * 让指针变量指向新建内存
   */
  int *test = new int[count];

  // 开始循环
  for (int i = 0; i < count; i++) {

    // 给数组第 i 个元素赋值
    test[i] = i;

    /*
     * 判断是否到了最后
     * 一个要输出的数组元素
     */
    if (count - 1 == i) {

      // 输出数组元素
      cout << "Array[" << i << "] number is: " << test[i];

      // 退出循环
      break;

    }

    // 输出数组元素
    cout << "Array[" << i << "] number is: " << test[i] << '\n';

  }

  /*
   * 刷新输出流缓冲区
   * 并输出换行
   */
  cout << endl;

  // 释放指针存储的内存
  delete[] test;
  /*
   * 将 NULL 赋给指针变量
   * 让它不是野指针
   */
  test = NULL;

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();
  cin.get();

  return 0;
}
