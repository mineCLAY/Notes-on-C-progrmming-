/*
 * 虚函数 (VirtualFunction)
 *
 * virtual 关键字是告诉编译器
 * 先不要给此函数作静态绑定
 * (不要马上做决定不要马上去调用函数)
 * 为运行时作动态绑定作准备
 */

// 导入函数库 iostream
#include <iostream>

using namespace std;

// 声明基类 BaseOne
class BaseOne {

// 公有
public:

  // 定义虚函数 DisPlay
  virtual void DisPlay() const {

    // 输出
    cout << "BaseOne::DisPlay()" << endl;

  }

};

/*
 * 声明类 BaseTwo
 * 继承类: BaseOne
 */
class BaseTwo : public BaseOne {

// 公有
public:
  // 定义虚函数
  virtual void DisPlay() const {

    // 输出
    cout << "BaseTwo::DisPlay()" << endl;

  }

};

/*
 * 声明类 Derived
 * 继承类: BaseTwo
 */
class Derived : public BaseTwo {

// 公有
public:
  // 定义虚函数
  virtual void DisPlay() const {

    // 输出
    cout << "Derived::DisPlay()" << endl;

  }

};

// 声明函数 fun
void fun(BaseOne *);

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义 BaseOne 类型的对象 (实现)
  BaseOne baseOne;
  // 定义 BaseTow 类型的对象 (实现)
  BaseTwo baseTwo;
  // 定义 Derived 类型的对象 (实现)
  Derived derived;

  /*
   * 三个对象调用
   * 公有函数 fun
   *
   * 输出:
   * BaseOne::DisPlay()
   * baseTwo::DisPlay()
   * Derived::DisPlay()
   */
  fun(&baseOne);
  fun(&baseTwo);
  fun(&derived);

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}

/*
 * 定义函数 fun
 * 实现指针调用
 * 某个类的函数 DisPlay()
 */
void fun(BaseOne *pointer) {

  // 调用函数 DisPlay
  pointer -> DisPlay();

}
