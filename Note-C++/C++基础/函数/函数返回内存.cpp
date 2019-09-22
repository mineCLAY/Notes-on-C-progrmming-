/*
 * 函数返回内存
 */

// 导入函数库 iostream
#include <iostream>

// 声明函数 NewInt
int *NewInt(int);

// 程序入口
int main(int argc, char const *argv[]) {

  /*
   * 定义指针变量
   * 让它指向函数
   * NewInt
   */
  int *test = NewInt(20);

  // 输出函数返回值
  std::cout << *test << std::endl;

  // 释放指针变量指向的内存
  delete test;
  /*
   * 将 NULL 赋给指针变量
   * 使它不是野指针
   */
  test = NULL;

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  std::cin.get();

  return 0;
}

int *NewInt(int value) {

  /*
   * new 一块
   * int 类型的内存 (空间)
   * 此内存在堆区中
   * 定义指针变量
   * 让指针变量
   * 指向新建的内存
   */
  int *myInt = new int;
  // 将传递来的参数赋给指针
  *myInt = value;

  // 返回 myInt 指针变量
  return myInt;
}
