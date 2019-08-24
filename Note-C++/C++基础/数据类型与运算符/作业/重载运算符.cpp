/*
 * 运算符重载
 * (OperatorOverloading)
 *
 * 运算符重载就是 "想法转换"
 * 它的目标是简化函数调用的方式
 *
 *   把标准的函数使用方法
 *   重新定义为自己认为的方式
 *   所谓重载
 *   就是赋予新的含义
 *   运算符重载也是一个道理
 *   同一个运算符可以有不同的功能
 *
 * 实际上
 * 已经在不知不觉中使用了运算符重载
 *
 *   '+' 可以对
 *   不同类型 (int float 等)
 *   的数据进行加法操作
 *   << 既是位移运算符
 *   又可以配合 cout 向
 *   控制台打印数据
 *   C++ 本身已经对这些
 *   运算符进行了重载
 *
 * 整数 x 和 y 可以进行算术运算
 * 但是
 * 两个对象呢? 它们能不能直接相加?
 *
 *   不能直接相加
 *   但是
 *   如果运算符重载了
 *   那么就可以让两个对象相加
 *
 * C++ 允许程序员自己重载运算符
 * 这带来了很大的便利
 *
 * 定义一个运算符重载
 * 就像定义一个函数
 * 只不过这个函数名称以
 * operator 关键字开头
 * 1. 运算符重载的语法格式:
 *    返回类型 operator 被重载
 * 2. 编译器实际调用:
 *    * = *.operator + (*);
 */

#include <iostream>

using namespace std;

/*
 * 定义整型类 Integer
 * 将整型封装成类
 * 以便实现面向对象的封装
 */
class Integer {

// 私有
private:
  /*
   * 定义实际的
   * 整型数字 number
   */
  int thisNumber;

// 共有
public:
  /*
   * 定义构造函数构成重载
   * 并初始化参数列表
   * 作用:
   * 调用默认构造时
   * 会为 thisNumber
   * 赋一个默认值 0
   */
  Integer() : thisNumber(0) {}

  /*
   * 定义构造函数构成重载
   * 并初始化参数列表
   */
  Integer(int num) : thisNumber(num) {}

  /*
   * 定义内联 (封装)
   * 函数实现返回
   * 变量 GetThisNumber
   */
  int GetThisNumber() {

    // 返回变量 thisNumber
    return thisNumber;

  }

  /*
   * 定义构造函数构成重载
   * 重载 '+' 运算符
   * 调用构造函数
   */
  Integer operator + (Integer other) {

    // 用来计算结果对象
    Integer result(this -> thisNumber + other.thisNumber);

    // 返回结果
    return result;

  }

  // 定义析构函数
  ~Integer() {}

};

/*
 * 声明函数 TestInteger
 * 用来测试重载的 '+'
 */
void TestInteger();

int main(void) {

  /*
   * 调用函数测试
   * 重载运算符 '+'
   */
  TestInteger();

  return 0;
}

// 定义 (实现) 函数
void TestInteger() {

  // 定义对象此内存在栈中
  Integer number(1024);
  Integer num(525);
  Integer Int;

  // 使用重载的 '+' 运算符
  Int = number + num;

  // 定打印结果
  cout << "The result of int = number + num is " << Int.GetThisNumber() << endl;

}
