/*
 * 静态属性和静态方法
 *   (变量)   (函数)
 */

#include <iostream>
#include <string>

using namespace std;

// 定义类 Pet
class Pet {

// 私有
private:
  // 定义宠物只数
  static int count;

// 私有 (子类可以使用)
protected:
  // 定义变量
  string name;

// 公有
public:
  // 定义构造函数
  Pet(string name) {

    // 给相应的变量赋值
    this -> name = name;

    // 让 count 自加
    count++;

    // 告诉用户宠物出生了
    cout << this -> name << " 出生了" << endl;

  }

  /*
   * 定义函数 GetCount
   * 实现返回 count
   */
  int GetCount() {

    // 返回 count
    return this -> count;

  }

  // 定义析构函数
  ~Pet() {

    // 让 count 自减
    count--;

    // 告诉用户宠物 kill 了
    cout << this -> name << " is kill" << endl;

  }

};

// 定义静态变量 (宠物只数)
int Pet::count = 0;

/*
 * 定义类 Dog
 * 继承类: Pet 
 */
class Dog : public Pet {

// 公有
public:
  /*
   * 定义构造函数
   * 并调用基类构造函数
   */
  Dog(string name) : Pet(name) {

    // 输出此函数地址
    cout << "\nthis: " << this << '\n' << endl;;

  }

  // 定义析构函数
  ~Dog() {

    // 输出此函数地址
    cout << "\nthis: " << this << '\n' << endl;

  }

};

/*
 * 定义类 Cat
 * 继承类: Pet 
 */
class Cat : public Pet {

// 公有
public:
  /*
   * 定义构造函数
   * 并调用基类构造函数
   */
  Cat(string name) : Pet(name) {

    // ctor

  }

  // 定义析构函数
  ~Cat() {

    // dtor

  }

};

// 程序入口
int main(void) {

  // 定义对象
  Dog dogOne("dog one");
  Cat catOne("cat one");

  // 输出对象 dogOne 的地址
  cout << "\ndogOne: " << &dogOne << '\n' << endl;

  // 语句块
  {

    // 定义对象
    Dog dogTwo("dog two");
    Cat catTwo("cat two");

    // 输出现在有几只宠物
    cout << "\nAnd you're back to " << dogOne.GetCount() << " pets" << endl;

  }

  // 输出现在有几只宠物
  printf("And you're back to %d pets" , dogOne.GetCount());

  return 0;
}
