/*
 * 虚析构函数
 */

#include <iostream>

using namespace std;

// 声明类 Base
class Base {

// 公有
public:
  // 声明构造函数
  Base();

  // 声明虚析构函数
  virtual ~Base();

};

// 定义 Base 类的构造函数
Base::Base() {

  cout << "Base constructor" << endl;

}

// 定义 Base 类的析构函数
Base::~Base() {

  cout << "Base destructor" << endl;

}

/*
 * 声明类 Derived
 * 继承类: Base
 */
class Derived : public Base{

// 私有
private:
  // 定义用来测试的指针变量
  int *test;

// 公有
public:
  // 声明构造函数
  Derived();

  // 声明虚析构函数
  virtual ~Derived();
};

// 定义 Derived 的构造函数
Derived::Derived() {

  /*
   * new 一块 int
   * 类型的内存 (空间)
   * 此内存在堆中
   * 给指针变量赋值
   */
  test = new int(0);

}

// 定义 Derived 的析构函数
Derived::~Derived() {

  // 输出
  cout << "Derived destructor" << endl;

  /*
   * 释放 test
   * 指针变量中存储的内存
   */
  delete test;

}

// 声明函数 DleteObjectPointer
void DleteObjectPointer(const Base *);

// 程序入口
int main(int argc, char const *argv[]) {

  /*
   * new 一块 Derived
   * 类型的内存 (空间)
   * 此内存在堆中
   * 定义一个 Base
   * 类型的对象指针
   * 让对象指针指向新建的内存
   */
  Base *b = new Derived();

  // 调用函数 DleteObjectPointer
  DleteObjectPointer(b);

  return 0;
}

/*
 * 定义函数 DleteObjectPointer
 * 实现释放对象指针
 * 中存储的对象的内存
 */
void DleteObjectPointer(const Base *b) {

  /*
   * 释放对象指针中
   * 存储的对象的内存
   *
   * 动态绑定
   * 会调用 Derived
   */
  delete b;

}
