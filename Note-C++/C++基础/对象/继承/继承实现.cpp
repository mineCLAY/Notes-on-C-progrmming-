/*
 * 继承实现
 *
 * 基类是可以派生出
 * 其它的类也称为父类
 * 或超类比如
 * 这里 Animal 是基类
 *
 * 子类是从基类
 * 派生出来的类
 * 比如这里的 Turtle
 * 和 Pig 类是子类
 */

#include <iostream>
#include <cstring>

using namespace std;

// 定义类 Animal;
class Animal {

// 公有
public:
  // 定义变量
  string mouth;

  // 声明函数
  void eat();
  void sleep();

};

/*
 * 定义类 Pig
 * 继承类: Animal
 */
class Pig : public Animal {

// 公有
public:
  // 声明函数 climb
  void climb();

};

/*
 * 定义类 Turtle
 * 继承类: Animal
 */
class Turtle : public Animal {

// 公有
public:
  // 声明函数 swim
  void swim();

};

/*
 * 定义 (实现)
 * 类: Animal 的
 * 成员函数 eat
 */
void Animal::eat() {

  // 输出
  cout << "You are eatting" << endl;

}

/*
 * 定义 (实现)
 * 类: Animal 的
 * 成员函数 sleep
 */
void Animal::sleep() {

  // 输出
  cout << "You are sleeping" << endl;

}

/*
 * 定义 (实现)
 * 类: Pig 的
 * 成员函数 climb
 */
void Pig::climb() {

  // 输出
  cout << "You can climb" << endl;

}

/*
 * 定义 (实现)
 * 类: Turtle 的
 * 成员函数 swim
 */
void Turtle::swim() {

  // 输出
  cout << "You can swim" << endl;

}

// 程序入口
int main(void) {

  /*
   * new 一块内存 (空间)
   * 此内存在堆中
   * 定义指针
   * 让指针指向它
   */
  Pig* pig = new Pig;
  Turtle* turtle = new Turtle;

  // 调用对象的成员函数 (方法)
  (*pig).eat();
  (*pig).sleep();
  (*pig).climb();
  (*turtle).eat();
  (*turtle).sleep();
  (*turtle).swim();

  // 清除指针指向的内存
  delete pig;
  delete turtle;
  /*
   * 将 nullptr 赋给指针
   * 是它不是野指针
   */
  pig = nullptr;
  turtle = nullptr;


  return 0;
}
