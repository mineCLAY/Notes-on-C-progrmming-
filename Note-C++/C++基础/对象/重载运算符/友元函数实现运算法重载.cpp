/*
 * 友元函数实现运算符重载
 */

#include <iostream>
#include <cstdlib>

using namespace std;

// 定义类 NegativeAddition
class NegativeAddition{

private:
  // 定义变量
  double leftValue;
  double rightValue;

public:
  /*
   * 定义构造函数
   * 构成重载
   */
  NegativeAddition() {

    // ctor

  }

  NegativeAddition(double left , double right) : leftValue(left) , rightValue(right) {

    // ctor

  }

  /*
   * 声明友元函数
   * 重载 '+' 运算符
   */
  friend NegativeAddition operator + (NegativeAddition & , NegativeAddition &);

  // 定义函数 Print
  void Print() {

    // 输出
    cout << "left number: " << (*this).leftValue << endl;
    cout << "right number: " << (*this).rightValue << endl;

  }

  // 定义析构函数
  ~NegativeAddition() {

    // dtor

  }

};

/*
 * 定义函数
 * 实现友元
 */
NegativeAddition operator + (NegativeAddition &test , NegativeAddition &temp) {

  // 返回计算结果
  return NegativeAddition(test.leftValue + temp.leftValue , test.rightValue + temp.rightValue);

}

// 程序入口
int main(void) {

  /*
   * new 一块内存 (空间)
   * 此内存在堆区
   * 定义指针变量
   * 让指针指向新建内存
   */
  NegativeAddition* test = new NegativeAddition();
  NegativeAddition* leftValue = new NegativeAddition(3 , 4);
  NegativeAddition* rightValue = new NegativeAddition(5 , -10);

  /*
   * 将对象成员函数
   * 返回值赋给指针变量
   */
  (*test) = *(leftValue) + (*rightValue);
  // 编译器会解释为:
  // (*test) = (*leftValue).operator + (*rightValue);

  // 调用对象成员函数
  (*test).Print();

  // 清除指针指向的内存
  delete test;
  delete leftValue;
  delete rightValue;

  /*
   * 将 NULL 赋给指针变量
   * 让它不是野指针
   */
  test = NULL;
  leftValue = NULL;
  rightValue = NULL;

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  system("pause");

  return 0;
}
