/*
 * 纯虚函数 (PureVirtualFunction)
 *
 * 纯虚函数
 *
 * 纯虚函数是一个在基类中
 * 声明的虚函数
 * 它在该基类中没有定义
 * 具体的操作内容要求
 * 各派生类根据实际需要
 * 定义自己的版本
 * 纯虚函数的声明格式为:
 * virtual 函数类型 函数名(参数表) = 0
 *
 * 抽象类的语法
 *
 * 带有纯虚函数的类称为抽象类:
 * class 类名 {
 *
 *   virtual 类型 函数名(参数表) = 0;
 *
 *   // 成员
 *
 * };
 */

#include <iostream>

using namespace std;

// 声明抽象类 BaseOne
class BaseOne {

// 公有
public:
  // 声明纯虚函数
  virtual void DisPlay() const = 0;

};

/*
 * 声明抽象类 BaseTwo
 * 继承类: BaseOne
 *
 * 因为这个类中并没有把
 * 基类的春旭函数定义 (实现)
 * 所以依然是抽象类
 */
class BaseTwo : public BaseOne {

// 公有
public:
  // 覆盖基类的虚函数 (依然没有定义)
  virtual void DisPlay() const = 0;

};

/*
 * 声明类 Derved
 * 继承类: BaseTwo
 *
 * Derived 将基类的
 * 纯虚函数定义 (实现)
 * 所以此类已不是抽象类
 */
class Derived : public BaseTwo {

// 公有
public:
  // 覆盖基类的虚函数
  virtual void DisPlay() const;

};

// 定义 Derived 类中的 DisPlay 函数
void Derived::DisPlay() const {

  // 输出
  cout << "Derived::DisPlay()" << endl;

}

// 声明函数 fun
void fun(BaseOne *);

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义对象
  Derived derived;

  // 调用函数 fun
  fun(&derived);

  return 0;
}

// 定义函数 fun
void fun(BaseOne *pointer) {

  // 调用对象的成员函数
  pointer -> DisPlay();

}
