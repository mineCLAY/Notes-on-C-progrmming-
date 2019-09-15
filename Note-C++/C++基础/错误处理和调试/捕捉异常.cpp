/*
 * 捕捉异常 (CatchException)
 *
 * 如果打算使用对象作为异常:
 *    以 "值传递" 抛出对象
 *    以 "引用传递" 方式捕捉对象
 */

// 导入函数库
#include <iostream>
#include <cassert>

using namespace std;

// 声明函数 ReturnFactorial
unsigned long ReturnFactorial(unsigned short num) throw (const char *);

int main(int argc , char const *argv[]) {

  /*
   * 定义存储阶乘
   * 次数的变量
   */
  unsigned long num = 0;

  // 叫用户输入阶乘次数
  cout << "Enter factorial number: ";

  /*
   * 如果不符合阶乘条件
   * 则开始循环
   */
  while (!(cin >> num) || (num < 1)) {

    // 清除状态
    cin.clear();
    // 清除缓冲区
    cin.ignore(100 , '\n');
    /*
     * 重新叫用户
     * 输入阶乘次数
     */
    cout << "Enter factorial number: ";

  }

  // 清除缓冲区
  cin.ignore(100 , '\n');

  /*
   * 如果没有错误
   * 就执行
   * try 中的语句块
   */
  try {

    /*
     * 定义存储阶乘
     * 结果的变量
     * 将函数 ReturnFactorial
     * 返回值赋给变量
     */
    unsigned long factorial = ReturnFactorial(num);

    // 输出结果
    cout << "The factorial of " << num << " is " << factorial << endl;;

  }
  /*
   * 如果出错
   * 就捕捉异常
   * 把异常赋给
   * 指针变量 exception
   */
  catch(const char *exception) {

    // 输出错误信息
    cout << exception << endl;

  }

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();
  cin.get();

  return 0;
}

/*
 * 定义函数 ReturnFactorial
 * 实现阶乘计算
 */
unsigned long ReturnFactorial(unsigned short num) throw (const char *) {

  /*
   * 定义存储阶乘
   * 计算结果的变量
   */
  unsigned long sum = 1;
  /*
   * 定义存储 unsigned long
   * 最大值的变量
   */
  unsigned long max = ULONG_MAX;

  // 开始计算
  for (int i = 1; i <= num; i++) {

    sum *= i;
    max /= i;

  }

  // 如果阶乘错误
  if (1 > max) {

    /*
     * 抛出异常
     * (返回异常)
     */
    throw "The value you entered is error\n";

  } else {

    // 返回计算结果
    return sum;

  }

}
