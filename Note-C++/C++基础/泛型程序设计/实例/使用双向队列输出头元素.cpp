/*
 * 使用双向队列
 * 来实现一个单向的队列
 * 往队列尾部一次插入 5 个元素
 * 然后再一次从队列头部出队
 * 直到队列被取空
 */

#include <iostream>
// 双向队列
#include <deque>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义双向队列
  deque <int> test;

  // 插入 5 个元素
  test.push_back(0);
  test.push_back(1);
  test.push_back(2);
  test.push_back(3);
  test.push_back(4);

  while (!test.empty()) {

    // 输出
    cout << "取出元素 (" << test.front() << ')' << endl;;
    // 删除第一个元素
    test.pop_front();

  }

  cin.get();

  return 0;
}

#if 0

/* 自己设计 */

int main(int argc, char const *argv[]) {

  // 定义双向队列
  deque <int> test;

  // 插入 5 个元素
  test.push_back(0);
  test.push_back(1);
  test.push_back(2);
  test.push_back(3);
  test.push_back(4);

  // 从头部输出
  for (deque <int>::iterator iter = test.begin(); iter != test.end(); iter--)
    // 输出
    cout << *iter << ' ';

  // 释放输出流缓存
  cout << endl;

  cin.get();

  return 0;
}

#endif
