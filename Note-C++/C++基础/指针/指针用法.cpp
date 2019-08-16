/*
 * 指针
 *
 * 1. int* p 的写法偏向于地址
 *    即 p 就是一个地址变量
 *    表示一个十六进制地址
 * 2. int *p 的写法偏向于值
 *    *p 是一个整型变量
 *    能够表示一个整型值
 * 3. 声明中的 * 号和
 *    使用中的 * 号含义安全不同
 *
 * 1. void * 指针存放一个内存地址
 *    地址指向的内容是什么类型不能确定
 * 2. void * 类型指针一般用来:
 *    拿来和别的指针比较、作为函数的
 *    输入和输出
 *    或赋值给另一个 void * 指针
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  double pi = 3.14;
  // 声明指针指向 pi
  double * ptr_pi1 = &pi;
  void * ptr_pi2 = &pi;

  /*
   * void * 指针无法确定
   * 指向的内容是什么类型
   * 所以不能改变其指向的变量的值
   */
  // *ptr_pi2 = 0000;

  // 设置打印真或假时打印布尔值
  cout << boolalpha;
  // 打印 true
  cout << (ptr_pi1 == ptr_pi2) << endl;

  // 定义变量 num
  double num = 1024.5;
  // 声明一个指针指向变量 num
  double * ptr_num = &num;

  // 打印 ptr_num 指向的地址
  cout << "prt_num point o the address: " << ptr_num << endl;
  // 打印 ptr_num 指向变量的值
  cout << "ptr_num point to the number: " << *ptr_num << endl;

  // 定义 char 型变量 ch
  char ch = 'a';
  // 定义一个指针变量指向变量 ch
  char * ptr_ch = &ch;

  // 打印 a*j  a
  cout << ptr_ch << "  " << *ptr_ch << endl;

  return 0;
}
