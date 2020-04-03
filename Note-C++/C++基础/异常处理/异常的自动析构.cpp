/*
 * 带析构语义的类的 C++ 异常处理
 */

#include <iostream>
// 字符串操作
#include <string>

using namespace std;

// 异常类
class Exception {

// 私有
private:
  // 字符串
  string message;

// 公有
public:
  // 构造函数
  Exception(const string &message) : message(message) {}

  // 返回 message
  const string &GetMessage() const { return message; }

  // 虚析构函数
  virtual ~Exception() {}

};

// 异常处理类
class Demo {

// 公有
public:
  // 构造函数
  Demo() { /* 输出构造信息 */ cout << "Constructor of Demo" << endl; }

  // 虚析构函数
  virtual ~Demo() { /* 输出析构信息 */ cout << "Destructor of Demo" << endl; }

};

// 异常函数
void func() /* throw (Exception) */ {

  // 定义对象
  Demo test;

  // 输出准备抛出异常信息
  cout << "Throw Exception in func()" << endl;
  // 抛出异常
  throw Exception("exception thrown by func()");

}

// 程序入口
int main() {

  cout << "In main function" << endl;

  // 尝试执行保护段的代码
  try {

    // 调用函数
    func();

  } /* 异常处理 */ catch (Exception &temp) {

    // 输出异常信息
    cout << "Caught an excepion: " << temp.GetMessage() << endl;

  }

  cout << "Resume the execution of main()" << endl;

  cin.get();

  return 0;
}
