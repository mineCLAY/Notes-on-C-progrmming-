/*
 * 实现对象属性加法
 * (不知道重载前)
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

  NegativeAddition(double left , double right) : rightValue(right) , leftValue(left) {

    // ctor

  }

  // 定义函数实现加法
  NegativeAddition* Addition(const NegativeAddition* test) {

    /*
     * new 一块内存 (空间)
     * 此内存在堆区
     * 定义指针变量
     * 让指针指向新建的内存
     */
    NegativeAddition* temp = new NegativeAddition;

    // 开始相加
    (*temp).leftValue = (*test).leftValue + (*this).leftValue;
    (*temp).rightValue = (*test).rightValue + (*this).rightValue;

    // 清除指针变量存储的内存
    delete test;

    /*
     * 将 NULL 赋给指针变量
     * 让它不是野指针
     */
    test = NULL;

    // 返回对象 temp
    return temp;

  }

  // 定义函数 Print
  void Print() {

    // 输出
    cout << "left number: " << (*this).leftValue << endl;
    cout << "right number: " << (*this).rightValue << endl;

  }

  // 定义析构函数
  virtual ~NegativeAddition() {

    // dtor

  }

};

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
  test = (*leftValue).Addition(rightValue);

  /＊
   * 这样实现不方便
   * 如果是五个对象
   * 属性相加则是:
   ＊/
  // test = (*number).Addition((*num).Addition((*digital).Addtiton((*temp).Addition(intger))));

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
