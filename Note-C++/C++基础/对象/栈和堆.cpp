/*
 * 析构函数
 *
 * 对象国旗时自动
 * 调用的特殊成员函数
 * 析构函数一般用来
 * 完成清理工作
 * 析构函数的名称
 * 是在类名前加上 ~
 * 析构函数没有参数
 * 只能有一个
 *
 * 1. 析构函数用来释放
 *    对象使用的资源
 *    并销毁对象的
 *    非 static 数据成员
 * 2. 无论何时一个
 *    对象被销毁
 *    都会自动调用
 *    其析构函数 (隐式析构)
 *
 * 栈内存与堆内存
 *
 * 栈(操作系统):
 *    栈用于存储基本类型变量
 *    由操作系统自动分配释放 
 *    存放函数的参数值
 *    局部变量的值等
 *    其操作方式类似于
 *    数据结构中的栈
 * 堆(操作系统):
 *    一般由程序员分配释放
 *    若程序员不释放
 *    程序结束时可能
 *    由OS回收
 *    分配方式倒是类似于链表
 */

#include <iostream>

using namespace std;

// 定义类 TestDestructor
class TestDestructor {

// 私有
private:

  // 定义指针
  int * test;

  // 定义成员变量
  string thisName;
  int thisNum;

// 共有
public:
  // 声明构造函数构成重载
  TestDestructor(string , int);
  TestDestructor(string);
  // 声明析构函数
  ~TestDestructor();

  // 定义函数 Print
  void Print(void) {

    // 打印
    cout << "name: " << thisName << '\n'
         << "num: " << thisNum << endl;

  }

};

// 定义构造函数并初始化函数列表
TestDestructor::TestDestructor(string name , int num) : thisNum(num) , thisName(name) {

  /*
   * new 分配一块新的内存
   * 让指针指向它
   */
  test = new int[5];

  // 打印
  cout << "Constructed successfully" << endl;

}

// 定义构造函数并初始化函数列表
TestDestructor::TestDestructor(string name) : thisName(name) {

  // 打印
  cout << "Cconstructed successfully" << endl;

}

// 定义析构函数
TestDestructor::~TestDestructor() {

  // 打印
  cout << thisName << " 被释放" << endl;

  // 释放资源
  // delete test;

  /*
   * 尽管不自己释放资源
   * 析构函数也会
   * 自动释放对象
   * (除了堆内存的对象)
   */

}

int main(void) {

  /*
   * 定义对象
   * 此内存在栈中
   */
  TestDestructor test1("杰**" , 8848);
  TestDestructor test2("比*** facker");

  /*
   * new 分配一块
   * 新的内存 (空间)
   * 此内存在堆中
   * 定义指针
   * 让指针指向它
   */
  TestDestructor* test3 = new TestDestructor("马**" , 233);

  // 调用对象的成员函数
  test1.Print();
  test2.Print();
  test3 -> Print();

  /*
   * 当对象使用关闭
   * 要 delete 释放内存
   * 因为其它对象都自动释放了
   * 所以就只释放 test3 对象
   */
  // delete test1;
  // delete test2;
  delete test3;

}
