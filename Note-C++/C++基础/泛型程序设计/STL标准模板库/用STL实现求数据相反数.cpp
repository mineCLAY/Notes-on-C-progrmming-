/*
 * 从标准输入读入几个整数
 * 存入向量容器
 * 输出其相反数
 */

#include <iostream>
// 向量
#include <vector>
// 迭代器
#include <iterator>
// STL 定义的算法
#include <algorithm>
// STL 定义的函数对象
#include <functional>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义常数
  const int N = 6;

  // 容器
  vector <int> test(N);

  // 读取输入的数据
  for (int i = 0; i < N; i ++)
    // 读取数据
    cin >> test[i];

  // 算法 (求相反数后输出)
  transform( /* 迭代器 */ test.begin() , test.end() , ostream_iterator <int> (cout , " ") , /* 函数对象 */ negate <int> ());

  // 释放输出流缓存
  cout << endl;

  return 0;
}
