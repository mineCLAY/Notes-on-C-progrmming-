/*
 * 对比三种函数参数
 */

#include <iostream>

// 声明函数实现普通交换
void swap1(int , int);
// 声明函数实现指针交换
void swap2(int * , int*);
// 声明函数实现引用交换
void swap3(int& , int&);
// 声明函数 print 打印结果
void print(const int& , const int&);

using namespace std;

int main(void) {

  // 定义变量
  int number = 0;
  int num = 525;

  // 调用函数在自己空间交换
  swap1(number , num);
  // 调用函数 print 打印 0 525
  print(number , num);
  // cout << "Test swap1: " << number << ' ' << num << endl;

  // 调用函数交换地址
  swap2(&number , &num);
  // 调用函数 print 打印 0 525
  print(number , num);
  // cout << "Test swap2: " << number << ' ' << num << endl;

  // 调用函数交换值
  swap3(number , num);
  // 调用 print 打印 525 0
  print(number , num);
  // cout << "Test swap3: " << number << ' ' << num << endl;

  return 0;
}

// 定义函数 (实现函数)
void print(const int &number , const int& num) {

  // 定义静态变量
  static int a = 0;
  // 让 a 自加
  a++;

  // 打印
  cout << "Test swap" << a << ": "
       << number << ' ' << num << endl;

  /*
   * 不能修改变量的值
   * 因为它作为参数时
   * 加上了前缀 const
   * 此时它常量
   * (不可变)
   */
  // number = 0;

}

// 定义函数 (实现函数)
void swap1(int number , int num) {

  // 定义临时变量
  int temp;
  // 开始交换
  temp = number;
  number = num;
  num = number;
  /*
   * 原变量的没有变化
   * 因为这里交换的变量
   * 只在此函数有效
   */

}

// 定义函数 (实现函数)
void swap2(int * number , int * num) {

  // 定义临时变量
  int * temp;
  // 开始交换
  temp = number;
  number = num;
  num = temp;
  /*
   * 原变量值并没有变化
   * 只不过指针 p1 && p2
   * 指向的地址交换了
   * 所以需要改成 *p1 && *p2
   * 这样才能取出两个变量的地址
   * 然后交换地址
   */

}

// 定义函数 (实现函数)
void swap3(int& number , int& num) {

  // 定义临时变量
  int temp;
  // 开始交换
  temp = number;
  number = num;
  num = temp;
  /*
   * 原变量值交换了
   * 这里算是前两种
   * 交换方法的优化
   * 即是第一种方法
   * 的写法
   * 又交换了地址
   *
   * 使用引用的理由:
   * 1. 可以更加简便
   *    的书写代码
   * 2. 可以直接传递
   *    某个对象
   *    而不只是
   *    把对象复制一份
   */

}
