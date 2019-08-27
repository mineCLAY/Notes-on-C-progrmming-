/*
 * 覆盖 (overriding)
 *
 * 重载 (Overload)
 */

#include <iostream>

using namespace std;

// 定义类 TestOverriding
class TestOverriding {

// 公有
public:
  // 定义构造函数
  TestOverriding() {

    // ctor

  }

  // 定义函数 Print
  void Print() {

    // 输出
    cout << "I'm GOD" << endl;

  }

  // 定义析构函数
  ~TestOverriding() {

    // dtor

  }

};

/*
 * 定义类 Class
 * 继承类: TestOverriding
 */
class Class : public TestOverriding {

// 公有
public:
  // 定义构造函数
  Class() {

    // ctor

  }

  // 覆盖 (重写) 基类的函数
  void Print() {

    // 调用基类的成员函数
    TestOverriding::Print();

    // 输出
    cout << "Yes" << endl;

  }

  // 定义析构函数
  ~Class() {

    // dtor

  }

};

// 定义类 TestOverload
class TestOverload {

// 私有
private:
  // 定义变量
  string name;
  int number;
  long num;

// 公有
public:
  /*
   * 定义构造函数
   * 构成重载 
   */
  TestOverload() {

    // 输出
    cout << '\n' << "默认构造函数" << endl;

  }

  /*
   * 定义构造函数
   * 构成重载 
   */
  TestOverload(string name) {

    // 给相应的变量赋值
    this -> name = name;

    // 输出
    cout << '\n' << "TestOverload(string name)" << endl;

    // 调用函数 Print
    Print(name);

  }
  
  /*
   * 定义构造函数
   * 构成重载 
   */
  TestOverload(string name , int number , long num) {

    // 给相应的变量赋值
    this -> name = name;
    this -> number = number;
    this -> num = num;

    // 输出
    cout << '\n' << "TestOverload(string name , int number , long num)" << endl;

    // 调用函数 Print
    Print(name , number , num);

  }

  /*
   * 定义函数 Print
   * 构成重载
   */
  void Print(string name) {

    // 输出
    cout << '\n' << "I'm " << name << endl;

  }

  /*
   * 定义函数 Print
   * 构成重载
   */
  void Print(string name , int number , long num) {

    // 输出
    cout << '\n' << "I'm " << name << endl;
    cout << '\n' << number << endl;
    cout << num << '\n' << endl;

  }

  // 定义析构函数
  ~TestOverload() {

    // 输出
    cout << name << endl;

  }

};

// 程序入口
int main(void) {

  /*
   * new 一块内存 (空间)
   * 定义指针变量
   * 让指针指向它
   */
  Class* testOverriding = new Class;

  // 调用对象的成员函数
  (*testOverriding).Print();

  // 定义对象
  TestOverload testOverload;
  TestOverload test("GOD");
  TestOverload testOver("GOD" , 0 , 0L);

  // 清除指针指向的内存
  delete testOverriding;

  // 将 nullptr 赋给指针
  testOverriding = nullptr;

  return 0;
}
