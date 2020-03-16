/*
 * 程序涉及
 * 输入迭代器和输出迭代器与随机访问迭代器
 * 这三个迭代器概念
 * 并且之前两个概念为基础
 * 编写了一个通用算法
 */

#include <iostream>
// STL 迭代器
#include <iterator>
// vectrer 容器
#include <vector>
// STL 算法
#include <algorithm>

using namespace std;

/*
 * 将来自输入迭代器的n个
 * T 类型的数值排序
 * 将结果通过输出迭代器
 * result 输出
 */
template <typename T , typename InputIterator , typename OutputIterator>
void Sort(InputIterator first , InputIterator last , OutputIterator result) {

  /*
   * 通过输入迭代器将
   * 输入数据存入向量容器 test 中
   */
  vector <T> test;

  // 遍历传入的参数
  for (; first != last; ++first)
    // 压入数据到容器 test 中
    test.push_back(*first);

  /*
   * 对 test 进行排序
   * sort 函数的参数
   * 必须是随机访问迭代器
   */
  sort(test.begin() , test.end());

  // 将 test 序列通过输出迭代器输出
  copy(test.begin() , test.end() , result);

}

int main(int argc, char const *argv[]) {

  // 定义数组 test
  double test[4] = { 0 , 66.666 , 233.33 , 99.999 };

  // 将数组的内容排序后输出
  Sort <double> (test , test + 4 , ostream_iterator <double> (cout , " "));

  // 释放输出流缓存
  cout << endl;

  /*
   * 从标准输入读取若干个整数
   * 将排序后的结果输出
   */
  Sort <int> (istream_iterator <int> (cin) , istream_iterator <int> () , ostream_iterator <int> (cout , " "));

  // 释放输出流缓存
  cout << endl;

  cin.get();
  cin.get();

  return 0;
}
