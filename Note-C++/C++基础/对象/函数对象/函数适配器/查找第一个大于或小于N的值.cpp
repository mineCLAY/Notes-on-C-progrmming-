　/*
 * 使用函数适配器查找向量
 * 第一个大于或小于 N 的数
 */

#include <iostream>
// STL 算法
#include <algorithm>
// 向量
#include <vector>
// STL 函数对象
#include <functional>

using namespace std;

// 定义类似 greater 函数对象的函数
bool Greater(int x , int y) {

  // 如果结果为真返回 true
  return x > y;

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 构造向量的数组
  int array[] = { 30 , 90 , 10 , 40 , 233 , 999 , 0 };
  // 数组元素个数
  const int N = sizeof(array) / sizeof(int);

  // 构造向量
  vector <int> test(array , array + N);
  // 定义迭代器
  vector <int>::iterator point;
  /*
   * 查找第一个大于 233 的元素
   * ptr_fun 构造一个函数对象
   * (将函数 Greater 的指针也就是名称构造)
   */
  point = find_if(test.begin() , test.end() , bind2nd(ptr_fun(Greater) , 233));

  // 判断是否未找到
  if (test.end() == point)
    // 输出未找到
    cout << "No element greater than 233" << endl;
  else
    // 输出元素
    cout << "First element greater than 233 is " << *point << endl;

  // 查找第一个比 666 小的元素
  point = find_if(test.begin() , test.end() , not1(bind2nd(greater <int> () , 666)));
  // 判断是否未找到
  if (test.end() == point)
    // 输出未找到
    cout << "No element is not greater than 666" << endl;
  else
    // 输出元素
    cout << "First element that is nor greater than 666 is " << *point << endl;

  // 查找第一个比 666 小的元素
  point = find_if(test.begin() , test.end() , bind2nd(not2(greater <int> ()) , 666));
  // 判断是否未找到
  if (test.end() == point)
    // 输出未找到
    cout << "No element is not greater than 666" << endl;
  else
    // 输出元素
    cout << "First element that is nor greater than 666 is " << *point << endl;

  cin.get();

  return 0;
}
