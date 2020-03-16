/*
 * 迭代器实例
 * 从标准输入读取几个实数
 * 分别将其的平方输出
 */

#include <iostream>
// STL 迭代器
#include <iterator>
// STL 算法
#include <algorithm>

using namespace std;

// 求平方的函数
double Square(double number) {

  // 计算平方并返回
  return number * number;

}

int main(int argc, char const *argv[]) {

  /*
   * 从标准输入读取几个实数
   * 分别将其的平方输出
   */
  transform( /* 迭代器 */ istream_iterator <double> (cin) , istream_iterator <double> () , ostream_iterator <double> (cout , " ") , Square);

  // 释放输出流的缓存
  cout << endl;

  return 0;
}
