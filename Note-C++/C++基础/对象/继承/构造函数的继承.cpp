/*
 * 构造函数的继承
 *
 * 当调用子类构造器时
 * (假如有一个输入参数)
 * 父类构造器也将被调用
 * (输入参数将传递给它)
 * 写法:
 * 子类构造函数() : 父类构造器 (参数) {
 *
 *   // ctor
 *
 * }
 */

#include <iostream>

using namespace std;

// 定义类 FatherClass
class A {

// 公有
public:
  // 定义变量
  string name;

  // 定义构造器
  A(string name) {

    // 给相应变量赋值
    this -> name = name;

  }

  // 定义析构函数
  ~A() {

    // dtor

  }

};

/*
 * 定义类  B
 * 继承类: A
 */
class B : public A {

// 公有
public:

  /*
   * 定义构造函数
   * 继承父类构造函数
   */
  B(string name) : A(name) {

    // ctor

  }

  // 定义函数 PrintName
  void PrintName() {

    // 输出
    cout << "Name: " << name << endl;

  }

  // 定义析构函数
  ~B() {

    // dtor

  }

};

// 程序入口
int main(void) {

  /*
   * new 一块内存 (空间)
   * 此内存在堆区中
   * 定义指针变量
   * 让指针指向它
   */
  B* test = new B("GOD");

  // 调用对象的成员函数
  (*test).PrintName();

  // 清除指针指向的内存
  delete test;

  /*
   * 将 nullptr
   * 赋给指针
   * 让它不为野指针
   */
  test = nullptr;

  return 0;
}
