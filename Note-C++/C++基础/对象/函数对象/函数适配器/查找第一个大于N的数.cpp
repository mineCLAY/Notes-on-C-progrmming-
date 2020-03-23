/*
 * 使用函数适配器查找向量
 * 第一个大于 N 的数
 */

#include <iostream>
// STL 算法
#include <algorithm>
// 向量
#include <vector>
// STL 函数对象
#include <functional>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 构造向量的数组
  int array[] = { 90 , 30 , 10 , 233 , 666 , 999 , 0 , 888 };
  // 数组元素个数
  const int I = sizeof(array) / sizeof(int);
  const int N = 0;

  // 用数组构造向量
  vector <int> test(array , array + I);

  /*
   * 查找第一个大于 N 的元素
   * 然后赋值给迭代器
   */
  vector <int>::iterator iter = find_if(test.begin() , test.end() , bind2nd(greater <int> () , N));
  /*
   * find_if 算法在 STL 中的原型声明为:
   * template <class InputIterator , class Unary Predicate>
   * InputIter find_if(InputIterator first , InputIterator last , UnaryPerdicate)
   * 其功能是查找数组 [first , last) 区间中第一个 pred(x) 为真的元素
   */

  // 判断是否找到大于 N 的元素
  if (test.end() == iter)
    // 输出未找到
    cout << "No element greater than 0" << endl;
  else
    // 输出第一个大于 N 的元素
    cout << "First element greater than 40 is " << *iter << endl;

  cin.get();

  return 0;
}
