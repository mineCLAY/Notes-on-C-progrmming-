/*
 * 数据的存储区域
 */

#include <iostream>

using namespace std;

// 全局区
int number;

int main(void) {

  // 定义变量 (栈区)
  int num;
  // 定义数组 (栈区)
  double nums[6] = { 233 , 888 , 666 , 0000 };

  /*
   * 用 new 关键字后面的
   * 数据存放在 堆区
   * 真正做事情的是堆区
   *
   * 这里是在堆区新建 10 个
   * double 型数据
   * 让左边的指针指向它
   */
  double * array = new double[10];

  /*
   * "I'm GOD"
   * 以及 '\0' 在常量区
   * pointer 在栈区
   */
  char *pointer = "I'm GOD";

  /*
   * 定义的指针 array
   * 和 pointer 在栈区
   */

  // 删除指针存储的内存
  delete array;
  delete pointer;
  // 将 nullptr 赋给指针
  array = nullptr;
  pointer = nullptr;

  return 0;
}
