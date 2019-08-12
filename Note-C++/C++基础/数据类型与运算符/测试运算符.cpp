/*
 * 测试运算符
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  int num1 = 5 , num2 = 2;

  // 进行运算然后打印
  cout << num1 / num2 << endl;

  /*
   * 取模的场景:
   *
   * 1. 取某个数字的个位
   *    5 % 10
   * 2. 45 天是 1 个月零几天
   *    45 % 30
   */
  cout << num1 % num2 << endl;

  // 自加、减然后赋值
  int num = (num2++) - (--num2);

  // 打印 0  2
  cout << num << '\t' << num2 << endl;

	 double num3 = num1 / num2;
  // 打印 2
		cout << num3 << endl;
  // 可以用强制类型转换
  num3 = (double)num1 / num2;
  // 打印 2.5
  cout << num3 << endl;

  return 0;
}
