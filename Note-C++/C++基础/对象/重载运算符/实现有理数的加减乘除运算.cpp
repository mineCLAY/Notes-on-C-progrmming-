/*
 * Problem
 *
 * 重载运算符 '+' '-' '*' '/'
 * 实现有理数的加减乘除运算
 *
 * 如 1 / 8 + 7 / 8 = 1
 * 如 1 / 8 - 7 / 8 = -6 / 8
 * 如 1 / 8 * 7 / 8 = 7 / 64
 * 如 1 / 8 / 7 / 8 = 1 / 7
 */

#include <iostream>
#include <cstdlib>

using namespace std;

// 定义类 Operator
class Operator {

private:
  // 定义变量
  double molecule;
  double denominator;
  double result;

public:
  /*
   * 定义构造函数
   * 构成重载
   */
  Operator() {

    // ctor

  }

  Operator(double leftValue , double rightValue) : molecule(leftValue) , denominator(rightValue) {

    // ctor

  }

  // 重载 '+' 运算符
  const Operator operator + (const Operator &test) {

    /*
     * 定义对象
     * 此内存在栈中
     */
    Operator temp;

    // 相加
    temp.result = ((*this).molecule / (*this).denominator) + (test.molecule / test.denominator);

    // 返回对象
    return temp;
  }

  // 重载 '-' 运算符
  Operator operator - (Operator &test) {

    /*
     * 定义对象
     * 此内存在栈中
     */
    Operator temp;

    // 相减
    temp.result = ((*this).molecule / (*this).denominator) - (test.molecule / test.denominator);

    // 返回对象
    return temp;
  }

  // 重载 '*' 运算符
  Operator operator * (Operator &test) {

    /*
     * 定义对象
     * 此内存在栈中
     */
    Operator temp;

    // 相乘
    temp.result = ((*this).molecule / (*this).denominator) * (test.molecule / test.denominator);

     // 返回对象
     return temp;
  }

  // 重载 '/' 运算符
  Operator operator / (Operator &test) {

    /*
     * 定义对象
     * 此内存在栈中
     */
    Operator temp;

    // 相除
    temp.result = ((*this).molecule / (*this).denominator) / (test.molecule / test.denominator);

    // 返回对象
    return temp;
  }

  // 定义函数 Print
  void Print() {

    // 输出
    cout << "result: " << (*this).result << endl;

  }

  // 定义析构函数
  ~Operator() {

    // dtor

  }

};

// 程序入口
int main(void) {

  /*
   * new 一块内存 (空间)
   * 此内存在堆区
   * 定义指针变量
   * 让指针指向新建内存
   */
  Operator* test = new Operator();
  Operator* number = new Operator(5 , 5);
  Operator* rightValue = new Operator(5 , 5);

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
  system("pause");

  return 0;
}
