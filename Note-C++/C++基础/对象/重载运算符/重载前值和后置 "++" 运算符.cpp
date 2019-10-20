/*
 * 复数类四则运算重载为成员函数
 */

#include <iostream>

using namespace std;

/*
 * 定义类 FourOperator
 * 实现重载四则运算符
 */
class FourOperator {

// 私有
private:
  // 声明存储复数实部的变量
  double real;
  // 声明存储复数虚部的变量
  double imag;

// 私有
public:
  /*
   * 声明构造函数
   * 并初始化参数列表中的变量
   */
  FourOperator(double real = 0.0 , double imag = 0.0);

  // 声明重载 '+' 运算符的函数
  FourOperator operator + (const FourOperator &temp) const;

  // 声明重载 '-' 运算符的函数
  FourOperator operator - (const FourOperator &temp) const;

  // 声明输出复数的函数
  void Print() const;

  // 声明析构函数
  virtual ~FourOperator();

};

// 定义 FourOperator 类的构造函数
FourOperator::FourOperator(double real , double imag) {

  // 给相应变量赋值
  this -> real = real;
  this -> imag = imag;

}

/*
 * 定义重载 FourOperator 类对象
 * '+' 运算符的函数
 * 此函数无法修改类中的变量
 * 因为函数体后面加上了 const
 */
FourOperator FourOperator::operator + (const FourOperator &temp) const {

  // 创建一个临时无名对象作为返回值
  return FourOperator(this -> real + temp.real , this -> imag + temp.imag);

}

/*
 * 定义重载 FourOperator 类对象
 * '-' 运算符的函数
 * 此函数无法修改类中的变量
 * 因为函数体后面加上了 const
 */
FourOperator FourOperator::operator - (const FourOperator &temp) const {

  // 创建一个临时无名对象作为返回值
  return FourOperator(this -> real - temp.real , this -> imag - temp.imag);

}

/*
 * 定义 FourOperator 类
 * 函数 Print
 * 实现输出复数
 */
void FourOperator::Print() const {

  // 输出
  cout << '(' << this -> real << " , " << this -> imag << ')' << endl;

}

// 定义 FourOperator 类的析构函数
FourOperator::~FourOperator() {

  // dtor

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义对象
  FourOperator test(0 , 0);
  FourOperator t(520 , 1024);
  FourOperator result;

  // 输出运算前
  cout << "test: ";
  test.Print();
  cout << "t: ";
  t.Print();
  cout << '\n';

  // 使用重载运算符完成复数减法
  result = test - t;

  /*
   * 输出使用重载运算符
   * '-' 进行减法后的复数
   */
  cout << "result = test - t = ";
  result.Print();

  // 使用重载运算符完成复数加法
  result = test + t;

  /*
   * 输出使用重载运算符
   * '+' 进行减法后的复数
   */
  cout << "result = test + t = ";
  result.Print();

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
