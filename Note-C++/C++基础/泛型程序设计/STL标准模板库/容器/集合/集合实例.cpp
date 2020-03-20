/*
 * 输入一串实数
 * 将重复的去掉
 * 取最大和最小者的中值
 * 分别输出小于等于此中值
 * 和大于等于此中值的实数
 */

#include <iostream>
// 集合
#include <set>
// pair 类型
#include <utility>
// 迭代器
#include <iterator>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义集合
  set <double> test;

  // 输入数据
  while (true) {

    double temp;
    cin >> temp;

    // 输入 0 表示结束
    if (0 == temp)
      /*
       * 本程序并不安全
       * 如果用户直接输入零
       * 集合 (set) 为空
       * 后续访问 *iterOne 时会导致
       * 未定义行为
       */
      break;

    // 尝试将 temp 插入
    pair <set <double>::iterator , bool> t = test.insert(temp);

    /*
     * 如果 temp 已存在
     * 输出提示信息
     */
    if (!t.second)
      cout << temp << " is duplicated" << endl;

  }

  // 得到第一个元素的迭代器
  set <double>::iterator iterOne = test.begin();
  // 得到末尾的迭代器
  set <double>::iterator iterTwo = test.end();
  // 得到最小和最大元素的中值
  double medium = (*iterOne + *(--iterTwo)) / 2;

  // 输出小于或等于中值的元素
  cout << " <= medium: ";
  copy(test.begin() , test.upper_bound(medium) , ostream_iterator <double> (cout , " "));
  // 释放输出流缓存
  cout << endl;

  // 输出大于或等于中值的元素
  cout << " >= medium: ";
  copy(test.lower_bound(medium) , test.end() , ostream_iterator <double> (cout , " "));
  // 释放输出流缓存
  cout << endl;

  cin.get();
  cin.get();

  return 0;
}
