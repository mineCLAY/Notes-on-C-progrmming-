/*
 * 指针的运算
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义数组
  double num[] = { 0000 , 233 , 666 , 888 , 999 };
  double nums[] = { 0000 , 233 , 666 , 88 , 999 };
  /*
   * 声明指针让它指向
   * 数组 score
   * 数组名是数组的首地址
   */
  double * pointer = num;

  // 使用 ++pointer 的方法打印
  cout << *(++pointer) << endl;

  // 打印数组和指针的字节
  cout << sizeof(num) << '\t' << sizeof(pointer) << endl;

  /*
   * 让指针移位
   * 这时指向了其它数组
   * (数据)
   * 打印
   */
  cout << *(pointer - 5) << endl;

  // 释放指针原来指向的内存
  free(pointer);
  // 将 nullptr 赋给指针
  pointer = nullptr;

  return 0;
}
