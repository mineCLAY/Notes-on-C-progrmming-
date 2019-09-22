/*
 * 在函数改变另一个函数的局部变量
 */

// 导入函数库 iostream
#include <iostream>

using namespace std;

// 声明函数 Swap
void Swap(int * , int *);

// 程序入口
int main(int argc , char const *argv[]) {

  // 定义变量
  int num = 3;
  int number = 5;

  // 调用函数 Swap
  Swap(&num , &number);

  // 输出两个变量的值
  cout << "The value of num is: " << num << endl;
  cout << "The value of number is: " << number << '\n';

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}

/*
 * 定义函数 Swap
 * 实现两个变量值的交换
 */
void Swap(int *temp , int *t) {

/*
 * 宏语句
 * 0 为不执行
 * 1 为执行
 */
#if 0

  /*
   * 因为 C / C++ 不允许
   * 注释嵌套
   * 所以这次使用宏语句
   */

  // 定义临时变量
  int tp;

  // 开始交换
  tp = *temp;
  *temp = *t;
  *t = tp;

// 宏语句结束
#endif

  /*
   * 利用位操作的
   * 异或进行交换
   * 假如 temp = 1
   *      t = 2
   * 1. temp = temp ^ t
   *    1 的二进制 0001
   *    2 的二进制 0010
   *`   执行异或运算
   *    结果为 3
   *    二进制 0011
   *    将 3 赋给 temp
   *
   * 2. t = t ^ temp
   *    2 的二进制 0010
   *    3 的二进制 0011
   *    进行异或运算
   *    结果为 1
   *    二进制 0001
   *    将 1 赋给 t
   *
   * 3. temp = temp ^ t
   *    3 的二进制 0011
   *    1 的二进制 0001
   *    进行异或运算
   *    结果为 2
   *    将 2 赋给 temp
   * 交换成功
   */
  *temp ^= *t;
  *t ^= *temp;
  *temp ^= *t;

}
