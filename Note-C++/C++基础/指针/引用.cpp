/*
 * 引用 (reference)
 *    为对象起了另外一个名字
 */

#include <iostream>

using namespace std;

int main(void) {

  // 指向常量的引用是非法的
  // double& ref = 000;
  // 除非加上 const 前缀
  const double& ref = 0000;

  // 定义变量
  int int_value = 0000;
  /*
   * refValue 指向 int_value
   * 是 int_value
   */
  int& refValue = int_value;
  // 错误: 引用必须被初始化
  // int& refValue;

  int num;
  int& rel_num = num;
  rel_num = 0000;
  cout << &num << '\t' << &rel_num << endl;

  /*
   * 等价于 (效率不一样)

   int num;
   int * rel_num = &num;
   *rel_num = 0000;
   cout << &num << '\t' rel_num << endl;

   */

  // 定义 double[5] 类型的数组
  double score [] = { 00 , 999 , 520 , 233 , 666 };
  // 声明指针让它指向数组 score
  double * ptr_score = score;

  // 打印数字和数组的字节
  cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl;

  return 0;
}
