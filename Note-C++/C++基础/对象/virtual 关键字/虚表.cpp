/*
 * 虚表 (VirtualTable)
 *
 * 1. 每个多态类都有一个虚表
 *
 * 2. 虚表中有当前类
 *    各个虚函数的入口地址
 *
 * 3. 每个对象有一个指向
 *    当前类的虚表的指针 (虚指针 vptr)
 *
 * 动态绑定的实现
 *
 * 1. 构造函数为对象的虚指针赋值
 *
 * 2. 通过多态类型的指针
 *    或引用调用成员函数时
 *    通过虚指针找到虚表
 *    进而找到所调用
 *    虚函数的入口地址
 *
 * 3. 通过该入口地址调用虚函数
 */

// 声明类 Base
class Base {

// 私有
private:
  // 定义变量
  int i;

// 公有
public:

  // 声明函数 f
  virtual void f();

  // 声明函数 g
  virtual void g();

};

/*
 * 声明类 Derved
 * 继承类: Base
 */
class Derved {

// 私有
private:
  // 定义变量
  int j;

// 公有
public:
  // 覆盖 Base::f
  virtual void f();

  // 新增的虚函数
  virtual void h();

};
