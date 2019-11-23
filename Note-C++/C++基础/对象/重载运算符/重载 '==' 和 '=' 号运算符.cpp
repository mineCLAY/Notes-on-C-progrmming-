/*
 * 定义 People 类
 * 定义变量 id
 * 重载 "==" 运算符和 "=" 运算符
 *
 * 1. "==" 运算符判断两个
 *    People 类对象的 id
 *     属性大小是否相等
 * 2. "=" 运算符实现
 *    People 类对象的赋值操作
 */

#include <iostream>

using namespace std;

// 定义类 People
class People {

// 私有
private:
  // 定义存储 id 的变量
  int id = 0;

// 公有
public:

  // 定义构造函数
  People(int thisId) : id(thisId) {

    // ctor

  }

  // 声明重载 "==" 运算符的两个函数
  friend int operator == (const People &t , const People *temp);
  // friend int operator == (const People &t , const int temp);
  // friend int operator == (const People *temp , const People &t);
  friend int operator == (const int temp , const People &t);

  // 声明重载 "=" 运算符的两个函数
  People operator = (const People *temp);
  People operator = (const int temp);

  // 定义输出函数
  void Print() {

    // 输出 id 值
    cout << "The id number is: " << this -> id << endl;

  }

  // 定义析构函数
  ~People() {

    // dtor

  }

};

// 定义函数实现重载 "==" 运算符
int operator == (const People &t , const People *temp) {

  // 判断运算符两边对象的 id 属性是否一样
  if (t.id == temp -> id) {

    // 返回 1 (相同)
    return 1;

  } else {

    // 返回 0 (不同)
    return 0;

  }

}

/*

// 定义函数实现重载 "==" 运算符
int operator == (const People *temp , const People &t) {

  // 判断运算符两边对象的 id 属性是否一样
  if (t.id == temp -> id) {

    // 返回 1 (相同)
    return 1;

  } else {

    // 返回 0 (不同)
    return 0;

  }

}

*/

/*

// 定义函数实现重载 "==" 运算符
int operator == (const People &t , const int temp) {

  // 判断运算符两边对象的 id 属性是否一样
  if (temp == t.id) {

    // 返回 1 (相同)
    return 1;

  } else {

    // 返回 0 (不同)
    return 0;

  }

}

*/

// 定义函数实现重载 "==" 运算符
int operator == (const int temp , const People &t) {

  // 判断运算符两边对象的 id 属性是否一样
  if (temp == t.id) {

    // 返回 1 (相同)
    return 1;

  } else {

    // 返回 0 (不同)
    return 0;

  }

}

// 定义重载 "=" 运算符的两个函数
People People::operator = (const People *temp) {

  // 开始赋值
  this -> id = temp -> id;

  // 返回对象
  return *this;

}

// 定义重载 "=" 运算符的两个函数
People People::operator = (const int temp) {

  // 开始赋值
  this -> id = temp;

  // 返回对象
  return *this;

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义对象
  People test(0);
  People t(666);

  // 判断两个对象的 id 值是否一样
  if (&test == &t) {

    // 输出一样
    cout << "Two objects have the same id value" << endl;

  } else {

    // 输出不一样
    cout << "The two object id values inconsistent" << endl;

  }

  // 判断 t 的 id 值是否与 0 一样
  if (0 == test) {

    // 输出一样
    cout << "Two objects have the same id value" << endl;

  } else {

    // 输出不一样
    cout << "The two object id values inconsistent" << endl;

  }

  // 调用函数输出 id 值
  t.Print();

  // 开始测试 '==' 运算符
  t = test;

  // 调用函数输出 id 值
  t.Print();

  return 0;
}
