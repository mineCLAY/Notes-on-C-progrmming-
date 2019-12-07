/*
 * 求绝对值的函数模板
 */

#include <iostream>

using namespace std;

/*
 * 定义模板
 */
template<typename Type>
// 定义模板函数
Type abs(Type num) {

  // 返回 num 的绝对值
  return num > 0 ? num : -num;

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义实验的变量
  int interNum = 0;
  float floatNum = -6.66;

  /*
   * 推导出 float 类型
   * 所以调用实际上是
   * float abs(float) 函数
   */
  cout << "The absolute value of " << floatNum << " is " << abs(floatNum) << '\n';
  /*
   * 推导出 int 类型
   * 所以调用实际上是
   * int abs(int) 函数
   */
  cout << "The absolute value of " << interNum << " is " << abs(interNum) << endl;

  return 0;
}
