/*
 * 强制类型转换
 *
 * const_cast<MyClass *>(value)
 * 用了改变 value 的常量性
 *
 * dynamic_cast<MyClass *>(value)
 * 如果 value 不是
 * MyClass 类型
 * (或者不是 MyClass 的子类) 指针
 * 这个操作符将返回 NULL
 *
 * reinterpret_cast<T>(value)
 * 在不进行任何实质性的赚的情况下
 * 把一种类型的指针
 * 解释为另一种类型
 * 指针或者把一种整数
 * 解释为另一种整数
 *
 * static_cast<T>(value)
 * 用来进行强制类型转换而
 * 不做任何运行时检查
 * 老式强制类型转换
 * 操作的替代品
 */

// 导入函数库 iostream
#include <iostream>
/*
 * 因为要使用 NULL
 * 所以导入函数库 stdlib
 */
#include <cstdlib>

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
  // 定义存储产品的变量
  string product;

// 公有
public:
  // 定义构造函数
  Company(string name , string product) {

    // 给相应变量赋值
    (*this).name = name;
    (*this).product = product;

  }

  /*
   * 定义虚函数 Print
   * 实现打印信息
   */
  void Print() {

    // 输出信息
    cout << "The company is called " << name << endl;

  }

  // 定义析构函数
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

public:
  /*
   * 定义构造函数
   * 并调用基类函数
   * 给变量 name 赋值
   */
  TechCompany(string thisName , string thisProduct) : Company(thisName , thisProduct) {

    // ctor

  }

  // 覆盖 Print 函数
  void Print() {

    // 输出信息
    cout << name << " company produced " << product << " this product" << endl;

  }

  // 定义析构函数
  virtual ~TechCompany() {

    // dtor

  }

};

// 程序入口
int main(int argc , const char *argv[]) {

  /*
   * new 一块 techCompany
   * 类型内存 (空间)
   * 此内存在堆区中
   * 定义 Company 类型
   * 指针变量
   * 让指针指向新建内存
   */
  Company *company = new Company("MineWorld" , "MineProduct");

  /*
   * 这段代码错误
   * 因为尽管 company
   * 指针变量指向的内存是
   * techCompany 类型
   * 但是 company 变量本身
   * 是 Company 类型
   * 所以定义 TechCompany
   * 类型指针变量无法给它
   * 赋值 Company 类型数据
   */
  // TechCompany *techCompany = company;

  // 此时需要使用强制类型转换
  // TechCompany *techCompany = (TechCompany *)company;

  /*
   * 高级强制类型转换
   * 如果 company 不是
   * TechCompany 类型
   * (或者不是 TechCompany 的子类)
   * 这个操作符将返回 NULL
   */
  TechCompany *techCompany = dynamic_cast<TechCompany *>(company);

  // 判断是否成功转换
  if (NULL != techCompany) {

    // 输出
    cout << "success" << '\n';

  } else {

    // 输出
    cout << "failure" << '\n';

  }

  // 调用对象的成员函数
  // techCompany -> Print();

  // 释放指针指向的内存
  delete company;
  /*
   * 只需要释放 company
   * 指向的内存即可
   * 因为 company 将它
   * 指向的内存赋值给
   * 指针变量 techCompany
   * 那么两个指针变量
   * 都指向同一个内存 (地址)
   * 所以如果释放两个指针变量
   * 指向的内存
   * 那么就会重复释放
   * 则会错误 (终止程序执行)
   */
  // delete techCompany;

  /*
   * 将 NULL 赋给指针变量
   * 让它不为野指针
   */
  company = NULL;
  techCompany = NULL;

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
