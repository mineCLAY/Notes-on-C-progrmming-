/*
 * 非成员函数
 *
 * 运算符重载为非成员函数的规则
 *
 * 1. 函数的形参代表依
 *    自左至右次序排序的各操作数
 *
 * 2. 重载为非成员函数时
 *    参数个数 = 原操作数个数
 *    (后置 "++" 和 "--" 除外)
 *
 * 3. 后置单目运算符 ++ 和 -- 的重载函数
 *    形参列表中要增加一个 int
 *    但不必写形参名
 *
 * 4. 如果在运算符的重载函数中需要
 *    操作某类对象的私有成员
 *    可以将此函数声明为该类的友元
 */

#include <iostream>

using namespace std;

// 定义类 Complex
class Complex {

// 私有
private:
  // 定义存储复数实部的变量
  double real;
  // 定义存储复数虚部的变量
  double imag;

// 公有
public:
  /*
   * 定义构造函数
   * 并初始化参数列表
   */
  Complex(double r = 0.0 , double i = 0.0) : real(r) , imag(i) {

    // ctor

  }

  // 声明友元函数 (全局函数)
  friend Complex operator + (const Complex &test , const Complex &t);
  friend Complex operator - (const Complex &test , const Complex &t);
  friend ostream & operator << (ostream &out , const Complex &test);

  // 定义析构函数
  virtual ~Complex() {

    // dtor

  }

};

// 定义重载 '+' 运算符的函数
Complex operator + (const Complex &test , const Complex &t) {

  // 返回 Complex 类对象相加后的结果
  return Complex(test.real + t.real , test.imag + t.imag);

}

// 定义重载 '-' 运算符的函数
Complex operator - (const Complex &test , const Complex &t) {

  // 返回 Complex 类对象相减后的结果
  return Complex(test.real - t.real , test.imag - t.imag);

}

/*
 * 定义重载 "<<" 运算符的函数
 * 实现直接输出对象属性 (变量)
 */
ostream & operator << (ostream &out , const Complex &test) {

  // 输出对象的属性 (变量)
  out << '(' << test.real << " , " << test.imag << ')' << endl;

  // 返回已经插入要输出结果的 out
  return out;

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义 Complex 类的对象 (实现)
  Complex test(0 , 0);
  Complex t(520 , 10000010000);
  Complex result;

  /*
   * 调用重载后的 "<<" 运算符
   * 实现输出没有进行运算
   * 对象的属性 (变量)
   */
  cout << "test: " << test << endl;
  cout << "t: " << t << endl;

  /*
   * 调用重载后的 '+'
   * 运算符实现对象相加
   * 然后结果赋值给
   * result 变量
   */
  result = test + t;

  /*
   * 调用重载后的 "<<" 运算符
   * 实现输出进行运算后
   * 对象的属性 (变量)
   */
  cout << "After test + t , result: " << result << endl;

  /*
   * 调用重载后的 '-'
   * 运算符实现对象相减
   * 然后结果赋值给
   * result 变量
   */
  result = test - t;

  /*
   * 调用重载后的 "<<" 运算符
   * 实现输出进行运算后
   * 对象的属性 (变量)
   */
  cout << "After test - t , result: " << result << endl;

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
