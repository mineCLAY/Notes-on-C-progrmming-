/*
 * ConstructorInheritanceExample
 */

#include <iostream>
#include <string>

using namespace std;

// 定义类 BaseClass
class BaseClass {

// 公有
public:
  // 定义构造函数
  BaseClass() {

    // 输出
    cout << "进入基类构造函数" << endl;

  }

  // 定义析构函数
  ~BaseClass() {

    // 输出
    cout << "进入基类析构函数" << endl;

  }

};

/*
 * 定义类 SubClass
 * 继承类: BaseClass
 */
class SubClass : public BaseClass {

// 公有
public:
  // 定义构造函数
  SubClass() {

    // 输出
    cout << "进入构造函数\n" << endl;

  }

  // 定义析构函数
  ~SubClass() {

    // 输出
    cout << "进入析构函数" << endl;

  }

  // 定义函数 Print
  void Print(string name) {

    // 输出
    cout << "Name: " << name << endl;

  }

};

// 程序入口
int main(void) {

  /*
   * 定义对象
   * 此内存在栈中
   */
  SubClass test;

  // 调用对象的成员函数
  test.Print("GOD");

  // 输出
  cout << "End\n" << endl;

  return 0;
}
