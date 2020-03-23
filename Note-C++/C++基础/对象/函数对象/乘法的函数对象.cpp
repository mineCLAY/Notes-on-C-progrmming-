/*
 * 乘法的函数对象
 * 重载 "()" 运算符的类
 */

#include <iostream>
// 数值算法
#include <numeric>

using namespace std;

// 定义乘法类
class multClass {

// 公有
public:
  // 重载操作符 "()"
  int operator () (int x , int y) { return x * y; }

};

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义数组
  int array[] = { 1 , 2 , 3 , 4 , 5 , 6 };
  // 数组的元素个数
  const int N = sizeof(array) / sizeof(int);

  // 输出
  cout << "The result by multpling all elements in array is: "
       << accumulate(array , array + N , 1 , multClass()) // 调用函数执行 mult 函数运算
       << endl;

  return 0;
}
