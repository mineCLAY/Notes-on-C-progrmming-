/*
 * 利用 STL 的二元谓词函数对象
 * 实现讲一个容器按照
 * 从大到小的顺序排序
 */

#include <iostream>
// 向量
#include <vector>
// STL 算法
#include <algorithm>
// STL 函数对象
#include <functional>
// 迭代器
#include <iterator>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义构造容器的数组
  int array[] = { 20 , 10 , 80 , 70 , 666 , 233 , 0 , 888 , 999 };
  // 数组元素个数
  const int N = sizeof(array) / sizeof(int);

  // 构造容器 test
  vector <int> test(array , array + N);

  // 输出未排序的容器
  cout << "Before sorting:" << endl;
  copy(test.begin() , test.end() , ostream_iterator <int> (cout , "\t"));
  cout << endl;

  // 排序容器元素
  sort(test.begin() , test.end() , greater <int> ());

  // 输出排序后的容器
  cout << "After sorting:" << endl;
  copy(test.begin() , test.end() , ostream_iterator <int> (cout , "\t"));
  cout << endl;

  cin.get();

  return 0;
}
