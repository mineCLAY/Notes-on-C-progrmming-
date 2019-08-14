/*
 * 判断输出结果
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  int k = 1;
  int n = 10;
  int m = 1;
  int a = 2;

  // 循环计算
  while (k <= n) {

    // 计算
    m *= 2;
    // 让 n 自减
    n--;

  }

  // 打印
  cout << m << endl;

  // 无限循环
 /*
  * while (a = 1) {
  *
  * // 让 a 减一
  * a -= 1;
  *
  * }
  */

  // 重新给 n 赋值
  n = 0;
  /*
   * 先让 n 与 2 比较
   * 0 <= 2 true
   * n 自加
   * 1 <= 2 true
   * n 自加
   * 2 <= 2 true
   * n 自加
   * 3 <= 2 false
   * n 自加
   * 最后 n = 4
   */
  while (n++ <= 2);
  // 打印
  cout << n << endl;

  return 0;
}
