/*
 * 容器 vector (向量)
 * 数组的替代品
 */

#include <iostream>
/*
 * 使用 vector
 * 需要导入库函数 vector
 * 因为它包含很多函数
 */
#include <vector>
/*
 * 导入函数库 algorithm
 * 里面包含算法函数
 */
#include <algorithm>

using namespace std;

int main(void) {

  vector<double> vec_double = {
    98.5 , 6666 , 67.9
  };

  /*
   * 向容器中插入数字
   * 在容器尾部插入一个数字
   */
  vec_double.push_back(100.8);

  // 遍历 (打印)
  for (int i = 0; i < vec_double.size(); i++) {

    // 打印
    cout << vec_double[i] << ' ';

  }

  // 打印换行
  cout << endl;
  cout << endl;

  /*
   * 集合的通用遍历方法:
   * 使用迭代器
   *
   * 得到迭代器对象
   * 迭代器实际上是一个指针对象
   */
  vector<double>::iterator it;

  /*
   * 迭代器函数 it.begin
   * 从第一个元素开始迭代
   */
  for (it = vec_double.begin(); it != vec_double.end(); ++it) {

    // 打印
    cout << *it << endl;

  }

  // 打印换行
  cout << endl;

  // sort 函数实现冒泡排序
  sort(vec_double.begin() , vec_double.end());
  // reverse 函数实现倒逆序
  reverse(vec_double.begin() , vec_double.end());
  // 从第一个元素开始迭代
  for (it = vec_double.begin(); it != vec_double.end(); ++it) {

    // 打印
    cout << *it << ' ';

  }

  // 打印换行
  cout << endl;
  /*
   * clear 函数实现
   * 移除容器中的所有数据
   */
  vec_double.clear();

  return 0;
}
