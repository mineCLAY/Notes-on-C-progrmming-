/*
 * 乘法的函数对象
 * 定义普通函数
 */

#include <iostream>
// 数值算法
#include <numeric>

using namespace std;

// 定义一个普通函数
int mult(int x , int y) { return x + y; }

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义数组
  int array[] = { 1 , 2 , 3 , 4 , 5 , 6 };
  // 数组的元素个数
  const int N = sizeof(array) / sizeof(int);

  // 输出
  cout << "The result by multpling all elements in array is: "
       << accumulate(array , array + N , 1 , mult) // 调用函数执行 mult 函数运算
       << endl;

  cin.get();
  cin.get();

  return 0;
}
