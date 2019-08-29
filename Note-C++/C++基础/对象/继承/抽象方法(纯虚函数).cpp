/*
 * 抽象方法 (纯虚函数)
 * abstract method
 *
 * 抽象语法定义:
 * 在声明虚方法的基础上
 * 在函数的末尾加上 " = 0"
 * 告诉苏编译器不用浪费
 * 时间在这个类里寻找
 * 这个方法的实现
 */

// 导入函数库 iostream
#include <iostream>
// 导入函数库 stdlib
#include <cstdlib>

using namespace std;

// 定义类 Person
class Person {

// 私有 (仅子类可用)
protected:
  // 定义变量
  string name;

// 公有
public:
  /*
   * 定义构造函数
   * 并初始化参数列表
   */
  Person(string thisName) : name(thisName) {

    // ctor

  }

  // 定义抽象方法 Play
  virtual void Hit(string) = 0;

  // 定义析构函数
  ~Person() {

    // dtor

  }

};

/*
 * 定义类 Lolkl
 * 继承类: Person
 */
class Lolkl : public Person {

// 公有
public:
  /*
   * 定义构造函数
   * 并调用基类构造函数
   */
  Lolkl(string thisName) : Person(thisName) {

    // ctor

  }

  // 定义 (实现) 函数 Hit
  void Hit(string name) {

    // 输出
    cout << this -> name << " hit " << name << endl;

  }

  // 定义析构函数
  ~Lolkl() {

    // dtor

  }

};

/*
 * 定义类 JinPiPi
 * 继承类: Person
 */
class JinPiPi : public Person {

// 公有
public:
  /*
   * 定义构造函数
   * 并调用基类构造函数
   */
  JinPiPi(string thisName) : Person(thisName) {

    // ctor

  }

  // 定义 (实现) 函数 Hit
  void Hit(string name) {

    // 输出
    cout << this -> name << " hit " << name << endl;

  }

  // 定义析构函数
  ~JinPiPi() {

    // dtor

  }

};

// 程序入口
int main(void) {

  /*
   * new 一块内存 (空间)
   * 此内存在堆区中
   * 定义指针变量
   * 让指针指向新建的内存
   */
  Person* lolkl = new Lolkl("lolkl");
  Person* jinPiPi = new JinPiPi("金屁屁");

  // 调用对象的成员函数
  (*lolkl).Hit("金屁屁");
  (*jinPiPi).Hit("lolkl");

  // 清除指针变量存储的内存
  delete lolkl;
  delete jinPiPi;

  /*
   * 将 NULL 赋给指针变量
   * 使它不是野指针
   */
  lolkl = NULL;
  jinPiPi = NULL;

  return 0;
}
