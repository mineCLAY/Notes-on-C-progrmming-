/*
 * 让函数返回错误代码
 */

// 导入函数库 iostream
#include <iostream>
/*
 * 导入 C 语言
 * 函数库 limits.h
 */
#include <climits>

using namespace std;

// 声明类 Factorial
class Factorial {

// 私有
private:
  /*
   * 定义存储阶乘
   * 次数的变量
   */
  unsigned short num;

// 公有
public:
  // 定义构造函数
  Factorial(unsigned short num) {

    // 给相应变量赋值
    (*this).num = num;

  }

  /*
   * 定义函数 GetFactorial
   * 实现阶乘计算
   */
  unsigned long GetFactorial() {

    /*
     * 定义存储阶乘
     * 计算结果的变量
     */
    unsigned long sum = 1;

    // 开始计算
    for (int i = 1; i <= (*this).num; i++) {

      sum *= i;

    }

    // 返回计算结果
    return sum;
  }

  /*
   * 定义函数 inRange
   * 判断阶乘结果
   * 是否错误
   */
  bool inRange() {

    /*
     * 定义变量 max
     * 将 unsigned long
     * 最大值赋给变量 max
     */
    unsigned long max = ULONG_MAX;

    // 开始循环
    for (int i = (*this).num; i >= 1; --i) {

      // 让 max 除以 i
      max /= i;

    }

    /*
     * 判断阶乘结果
     * 是否错误
     */
    if (1 > max) {

      // 返回 false (错误)
      return false;

    } else {

      // 返回 true (正确)
      return true;

    }

  }

};

int main(int argc , char const *argv[]) {

  /*
   * 定义存储阶乘
   * 次数的变量
   */
  unsigned long num = 0;

  // 叫用户输入阶乘次数
  cout << "Enter factorial number: ";
  // 将用户输入的值赋给变量
  cin >> num;

  /*
   * 定义对象 factorial
   * 此内存在栈中
   */
  Factorial factorial(num);

  /*
   * 将对象的成员函数的
   * 返回值进行判断
   */
  if (factorial.inRange()) {

    // 输出阶乘结果
    cout << "The factorial of " << num << " is " << factorial.GetFactorial() << endl;

  } else {

    // 输出错误
    cout << "The value you entered is error" << endl;

  }


  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();
  cin.get();

  return 0;
}
