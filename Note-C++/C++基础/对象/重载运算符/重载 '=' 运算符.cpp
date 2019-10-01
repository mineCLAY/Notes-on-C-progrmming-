/*
 * 重载 '=' 运算符
 */

// 导入函数库 iostream
#include <iostream>
/*
 * 因为要使用 NULL
 * 所以要导入
 * 函数库 stdlib
 */
#include <cstdlib>

using namespace std;

// 声明类 OcerloadOperator
class OverloadOperator {

// 私有
private:
  // 定义指针
  int *ptr;

// 公有
public:

  // 定义构造函数
  OverloadOperator(int *pointer) {

    // 给相应变量赋值
    ptr = pointer;

  }

  /*
   * 定义构造函数
   * 重载 '=' 运算符
   */
  OverloadOperator &operator = (const OverloadOperator &rhs) {

    /*
     * 判断赋值号 '=' 两边
     * 是否为同个对象
     */
    if (&rhs != this) { // obj != obj

      // 释放指针指向的内存
      delete ptr;

      /*
       * new 一块 int 类型
       * 内存 (空间)
       * 此内存在堆中
       * 让指针指向
       * 新建的 int 类型内存
       */
      ptr = new int;
      /*
       * 把赋值号 '=' 右边
       * 对象的内存赋值
       * 给左边对象
       */
      *ptr = *rhs.ptr;

    } else { // obj = obj

      // 输出两边同个对象一致
      cout << "赋值号两边为同个对象不被处理" << '\n';

    }

    // 返回当前对象的指针
    return *this;

  }

  /*
   * 定义函数 Print
   * 实现输出
   */
  void Print() {

    // 输出对象
    cout << "result: " << *ptr << endl;

  }

  // 定义析构函数
  virtual ~OverloadOperator() {

    // 释放指针存储的内存
    delete ptr;
    /*
     * 把 NULL 赋给指针
     * 使它不是野指针
     */
    ptr = NULL;

  }

};

// 程序入口
int main(int argc , char const *argv[]) {

  // 定义变量

  // 定义对象
  OverloadOperator test(new int(0));
  OverloadOperator rvalue(new int(0));

  // 调用对象的成员函数 Print
  test.Print();
  rvalue.Print();

  /*
   * 将对象 rvalue 赋值
   * 给对象 test
   */
  test = rvalue;

  // 调用对象的成员函数 Print
  test.Print();
  rvalue.Print();

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
