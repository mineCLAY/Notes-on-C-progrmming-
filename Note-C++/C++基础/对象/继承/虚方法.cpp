/*
 * 虚方法 (virtual)
 *
 * 如果方法不是虚方法
 * 编译器就会根据它们
 * 在编译时的类型而调用
 * 那个类里定义的版本 (函数)
 * 那样往往会导致内存泄露
 */

// 导入函数库 iostream
#include <iostream>
// 导入函数库 stdlib
#include <cstdlib>

using namespace std;

// 定义类 Pet
class Pet {

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
  Pet(string thisName) : name(thisName) {

    // ctor

  }

  // 定义虚方法 Play
  virtual void Play() {

    // 输出
    cout << "playing" << endl;

  }

  // 定义析构函数
  ~Pet() {

    // dtor

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
  Cat(string thisName) : Pet(thisName) {

    // ctor

  }

  // 覆盖函数 Play
  void Play() {

    // 调用基类函数
    Pet::Play();

    // 输出
    cout << this -> name << " and" << " dog are playing" << endl;

  }

  // 定义析构函数
  ~Cat() {

    // dtor

  }

};

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
  Dog(string thisName) : Pet(thisName) {

    // ctor

  }

  // 覆盖函数 Play
  void Play() {

    // 调用基类函数
    Pet::Play();

    // 输出
    cout << this -> name << " and" << " cat are playing" << endl;

  }

  // 定义析构函数
  ~Dog() {

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
  Pet* cat = new Cat("加菲");
  Pet* dog = new Dog("欧迪");

  // 调用对象的成员函数
  (*cat).Play();
  (*dog).Play();

  // 清除指针变量存储的内存
  delete cat;
  delete dog;

  /*
   * 将 NULL 赋给指针变量
   * 使它不是野指针
   */
  cat = NULL;
  dog = NULL;

  return 0;
}
