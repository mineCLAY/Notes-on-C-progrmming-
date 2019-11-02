/*
 * override 关键字
 *
 * 1. C++ 11 引入显式函数覆盖
 *    在编译而非运行期捕获此类错误
 * 2. 在虚函数显式重载中运用
 *    编译器会检查基类是否存在虚拟函数
 *    与派生类中带有 overried 声明的虚拟函数
 *    有相同的函数签名 (signature)
 *    若不存在
 *    则会回报错误
 */

// 导入函数库
#include <iostream>

using namespace std;

/*
 * 声明类 Base
 */
class Base {

// 公有
public:
  // 用 override 修饰函数要被派生类覆盖
  virtual void Print() const {

    // 输出
    cout << "I'm GOD. I am insisting." << endl;

  }

};

/*
 * 声明类 Derived
 * 继承类: Base
 */
class Derived : public Base {

// 公有
public:
  // 覆盖函数 printf
  virtual void Print() const override {

    // 输出
    cout << "I'm GOD. I'm insisting." << endl;

  }

};
