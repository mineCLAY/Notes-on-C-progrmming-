/*
 * final 关键字
 */

// 导入函数库
#include <iostream>

using namespace std;

/*
 * 声明类 Base
 * 如果加上 final 修饰符
 * 别的类无法继承 Base
 */
class Base /* final */ {

// 公有
public:
  // 用 final 修饰函数不允许被覆盖
  virtual void Print() final {

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
  /*
   * 编译错误:
   * Base::Print 为 final
   * 不允许被覆盖
   */

  /*
  void Print() {

    // Code

  }

  */

};
