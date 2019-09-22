/*
 * 动态内存管理
 *
 * 动态内存由一些没有名字
 * 只有地址的内存块构成
 * 那些内存块是在程序运行
 * 期间动态分配的
 * 它们来自一个由标准 C++
 * 库替你管理的 "大池子"
 * (专业术语为 "内存池")
 *
 * 1. 从内存池申请一些内存需要用 new 语句
 *    如果有足够可用的内存能满足你的申请
 *    new 语句返回新分配地址块的起始地址
 *    如果没有足够可用的内存空间
 *    那么 new 语句将
 *    抛出 std::bad_alloc 异常
 *
 * 2. 在用完内存块之后
 *    应该用 delete 语句将内存还给内存池
 *    在释放内存块之后还应该把与之关联的
 *    指针设置为 NULL
 *    当把指针变量设置为 NULL
 *    它的含义是哪个指针不再指向任何东西
 *    无法通过一个被设置为
 *    NULL 的指针去访问数据
 *
 * 3. 静态内存折个术语与 C++
 *    保留字 static 没有任何关系
 *    new 语句返回的内存块很可能充满 "垃圾"
 *    所以通常先往里边写一些数据覆盖
 * 4. 如果不 delete 指针指向的内存块
 *    哪个指针将得到一个新内存块的地址
 *    而程序将永远也无法释放原先那个内存块
 *    因为它的内存已经被覆盖掉了
 *    delete 语句只释放给定指针变量
 *    正指向的内存块
 *    不影响这个指针
 *    在执行 delete 语句之后
 *    那个内存块被释放了
 *    但指针变量还依然健在
 */

// 导入函数库 iostream
#include <iostream>
/*
 * 导入函数库 stddef
 * 因为要使用 NULL
 */
#include <cstddef>

using namespace std;

/*
 * 声明类 Company
 *
 * 让用户建立一个公司
 */
class Company {

// 私有 (子类可以用)
protected:
  // 定义存储公司名字的变量
  string name;

// 公有
public:
  // 定义构造函数
  Company(string name) {

    // 给相应变量赋值
    (*this).name = name;

  }

  /*
   * 定义虚函数 Print
   * 实现打印信息
   */
  virtual void Print() {

    // 输出信息
    cout << "The company is called " << name << endl;

    return;
  }

  // 定义虚析构函数
  virtual ~Company() {

    // dtor

  }

};

/*
 * 声明类 TechCompany
 * 继承类: Company
 *
 * 让用户建立科技公司
 */
class TechCompany : public Company {

private:
  // 定义存储产品的变量
  string product;

public:
  /*
   * 定义构造函数
   * 并调用基类函数
   * 给变量 name 赋值
   */
  TechCompany(string thisName , string product) : Company(thisName) {

    // 给相应变量赋值
    (*this).product = product;

  }

  // 覆盖 Print 函数
  virtual void Print() {

    // 输出信息
    cout << name << " company produced " << product << " this product" << endl;

  }

  // 定义虚析构函数
  virtual ~TechCompany() {

    // dtor

  }

};

// 程序入口
int main(int argc , const char *argv[]) {

  /*
   * new 一块 Company
   * 类型内存 (空间)
   * 此内存在堆区中
   * 定义指针变量
   * 让指针指向新建内存
   */
  Company *company = new Company("MineWorld");

  // 调用对象的成员函数
  company -> Print();

  // 释放指针指向的内存
  delete company;
  /*
   * 将 NULL 赋给指针变量
   * 让它不为野指针
   */
  company = NULL;

  /*
   * 让指针变量 company
   * 重新指向一个新建 (new)
   * TechCompany 类型内存
   * 此内存在堆区中
   */
  company = new TechCompany("MyWorld" , "MineWorld");

  // 调用对象的成员函数
  company -> Print();

  // 释放指针指向的内存
  delete company;
  /*
   * 将 NULL 赋给指针变量
   * 让它不为野指针
   */
  company = NULL;

  return 0;
}
