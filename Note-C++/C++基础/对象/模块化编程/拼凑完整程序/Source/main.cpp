/*
 * 实现有理数的四则运算
 */

#include <iostream>

/*
 * 导入自己创建的
 * 头文件 statment
 */
#include "..//Header//statment.h"

// 程序入口
int main(void) {

  /*
   * new 一块内存 (空间)
   * 此内存在堆区
   * 定义指针变量
   * 让指针指向新建内存
   */
  Operator* test = new Operator();
  Operator* number = new Operator(0 , 10);
  Operator* rightValue = new Operator(5 , 10);

  /*
   * 将对象成员函数
   * 返回值赋给指针变量
   */
  (*test) = *(number) + (*rightValue);
  /*
   * 调用对象成员函数
   * 输出加法运算
   */
  (*test).Print();

  /*
   * 将对象成员函数
   * 返回值赋给指针变量
   */
  (*test) = *(number) - (*rightValue);
  /*
   * 调用对象成员函数
   * 输出减法运算
   */
  (*test).Print();

  /*
   * 将对象成员函数
   * 返回值赋给指针变量
   */
  (*test) = *(number) * (*rightValue);
  /*
   * 调用对象成员函数
   * 输出乘法运算
   */
  (*test).Print();

  /*
   * 将对象成员函数
   * 返回值赋给指针变量
   */
  (*test) = *(number) / (*rightValue);
  /*
   * 调用对象成员函数
   * 输出除法运算
   */
  (*test).Print();

  // 清除指针指向的内存
  delete test;
  delete number;
  delete rightValue;

  /*
   * 将 NULL 赋给指针变量
   * 让它不是野指针
   */
  test = NULL;
  number = NULL;
  rightValue = NULL;

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  std::cin.get();

  return 0;
}
