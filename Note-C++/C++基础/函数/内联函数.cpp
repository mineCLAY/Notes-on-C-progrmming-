/*
 * 内联 (inline) 函数
 *
 * 如果执行函数代码的时间比
 * 处理函数调用机制的时间长
 * 则节省的时间将之占整个过程
 * 的很小一部分
 * 如果代码执行时间很短
 * 内联调用可以节省大部分时间
 * 虽然提升了效率
 * 但是如果代码段太复杂
 * 内存开销会很大
 * 这是提升效率的副作用
 * (内存开销大) 可能大于本身
 */

#include <iostream>

using namespace std;

/*
 * 以后在使用 N 的所有地方
 * 都会被自动替换成 5
 */
#define N 5
/*
 * 宏定义了一个 s(num) 函数
 * 以后在所有调用 s(num) 的地方
 * 就自动被替换成 num * num
 */
#define s(num) num * num

// 声明内联函数实现替换
inline int number(int);

int main(void) {

  // 定义测试宏定义的变量
  double rt = (2.5);
  int result = s(5 + 10);

  // 打印 5
  cout << N << endl;
  /*
   * 打印 6.25
   * 这时体现宏定义 #define
   * 有重载的功能
   * 前期可以理解为:
   * 它能自动判断进行
   * 什么类型的运算
   */
  cout << rt << endl;
  /*
   * 打印 65
   * 因为:
   * s(5 + 10) 是替换成
   * 5 + 10 * 5 + 10
   * 它不会先计算 5 + 10 = 15
   * 再去执行函数内容
   * 它是直接替换的
   * 所以他无法完全代替函数
   * 因为它并不是那么智能
   * 这时需要改为:
   * #define s(num) (num) * (num)
   */
  cout << result << endl;

  // 或者使用内联函数代替 #define
  cout << number(5 + 10) << endl;

  return 0;
}

int number(int num) {

  // 将结果返回 main 主函数
  return num * num;

}
