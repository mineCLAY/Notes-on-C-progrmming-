/*
 * 高级类型转换
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
  void Print() {

    // 输出信息
    cout << "The company is called " << name << endl;

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
  void Print() {

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
   * new 一块 techCompany
   * 类型内存 (空间)
   * 此内存在堆区中
   * 定义 Company 类型
   * 指针变量
   * 让指针指向新建内存
   */
  Company *company = new TechCompany("MineWorld" , "MineProduct");

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

  // 高级强制类型转换
  TechCompany *techCompany = dynamic_cast<TechCompany *>(company);

  // 判断是否成功
  if (NULL != techCompany) {

    // 输出
    cout << "success" << '\n';

  } else {

    //
    cout << "failure" << '\n';

  }

  // 调用对象的成员函数
  techCompany -> Print();

  // 释放指针指向的内存
  delete company;
  delete techCompany;
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
