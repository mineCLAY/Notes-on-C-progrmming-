/*
 * 声明一个整型数组
 * 使用 STL (标准模板库)
 * 查找算法 find() 进行数据的查找
 * 然后应用排序算法 sort()
 * 并配合使用标准话术对象 greater <T>
 * 对数据进行升序和降序排序
 */

#include <iostream>
// STL 函数对象
#include <functional>
// STL 算法
#include <algorithm>
// STL 迭代器
#include <iterator>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义数组
  int array[] = { 0 , 2 , 1 , 3 , 6 , 5 };
  // 数组的元素个数
  const int N = sizeof(array) / sizeof(int);
  // 要查找的元素
  short emlement;
  // 要查找元素的下标
  short index;

  // 存储用户要查找的元素
  cin >> emlement;

  // 查找元素并存储下标
  index = find(array , array + N , emlement) - array + 1;
  // 输出下标
  cout << "The index of the emlement to find is " << index;

  cout << endl;

  // 调用函数进行数组的降序排序
  sort(array , array + N , not2(greater <int> ()));
  cout << "降序排序:" << endl;


  // 输出 array 降序排序后的
  for (int i = 0; i < N; i++)
    // 输出数组元素
    cout << array[i] << ' ';

  cout << endl;

  // 调用函数进行数组的降序排序
  sort(array , array + N , greater <int> ());
  cout << "降序排序:" << endl;

  // 输出 array 降序排序后的
  for (int i = 0; i < N; i++)
    // 输出数组元素
    cout << array[i] << ' ';

  cout << endl;

  cin.get();
  cin.get();

  return 0;
}
