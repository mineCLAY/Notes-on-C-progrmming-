// 奇偶排序 (顺序容器实现)

#include <iostream>
// STL 迭代器
#include <iterator>
// 双端队列
#include <deque>
// 向量
#include <vector>
// STL 算法
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {

  // 建立一队输入流迭代器
  istream_iterator <int> iterOne(cin) , iterTwo;

  // 通过输入流迭代器从标准输入流中输入数据
  vector <int> sOne(iterOne , iterTwo);

  // 将输入的整数排序
  sort(sOne.begin() , sOne.end());
  deque <int> sTwo;

  // 循环遍历 sOne
  for (vector <int>::iterator iter = sOne.begin(); iter != sOne.end(); ++iter) {

    // 偶数放到 sTwo 尾部
    if (0 == *iter % 2)
      // 压入数据
      sTwo.push_back(*iter);
    // 奇数放到 sTwo 首部
    else
      sTwo.push_front(*iter);

    }

    // 将 sTwo 的结果输出
    copy(sTwo.begin() , sTwo.end() , ostream_iterator <int> (cout , " "));

    // 释放输出流缓存
    cout << endl;

    cin.get();
    cin.get();

  return 0;
}
