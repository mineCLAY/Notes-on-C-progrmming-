// 顺序容器的基本操作

#include <iostream>
// 链表
#include <list>
// 双端队列
#include <deque>
// STL 迭代器
#include <iterator>

using namespace std;

// 输出指定的顺序容器的元素
template <typename T>
void PrintContainer(const char *msg , const T &s) {

  // 输出 msg 的内容
  cout << msg << ": ";
  /*
   * 将数据复制到输出流中
   * 并输出
   */
  copy(s.begin() , s.end() , ostream_iterator <int> (cout , " "));

  // 释放输出流缓存
  cout << endl;

}

int main(int argc, char const *argv[]) {

  /*
   * 从标准输入读入 10 个整数
   * 将它们分别从 s 的头部加入
   */
  deque <int> s;
  for (int i = 0; i < 10; i++) {

    int temp;
    cin >> temp;
    s.push_front(temp);

  }

  // 调用函数输出数据
  PrintContainer("Deque at first: " , s);

  // 用 s 容器的内容的逆序构造列表容器 L
  list <int> L(s.rbegin() , s.rend());

  // 调用函数输出数据
  PrintContainer("List at first: " , L);

  /*
   * 将列表容器 L 的每相邻
   * 两个元素顺序颠倒
   */
  list <int>::iterator iter = L.begin();
  while (iter != L.end()) {

    int temp = *iter;
    iter = L.erase(iter);
    L.insert(++iter , temp);

  }

  // 调用函数输出数据
  PrintContainer("List at last: " , L);

  /*
   * 用链表容器 L 的内容给 s 赋值
   * 将 s 输出
   */
  s.assign(L.begin() , L.end());

  // 调用函数输出数据
  PrintContainer("Deque at last: " , s);

  cin.get();
  cin.get();

  return 0;
}
