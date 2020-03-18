// 列表容器中的 splice 操作

#include <iostream>
// STL 迭代器
#include <iterator>
// STL 列表
#include <list>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义字符串数组
  string nameOne[] = { "YangQian" , "Bai" , "LOL" , "Hu" };
  string nameTwo[] = { "Hu" , "LOL" , "YangQian" , "L" };

  // 用 nameOne 中的内容构造列表 lOne
  list <string> lOne(nameOne , nameOne + 4);
  // 用 nameTwo 中的内容构造列表 lTwo
  list <string> lTwo(nameTwo , nameTwo + 4);

  // 将 lOne 第一个元素放到 lTwo 最后
  lTwo.splice(lTwo.end() , lOne , lOne.begin());

  // iterOne 指向 lOne 首部
  list <string>::iterator iterOne = lOne.begin();
  /*
   * iterOne 前进 2 个元素
   * 其将指向 lOne 第 3 个元素
   */
  advance(iterOne , 2);

  // iterTwo 指向 lTwo 首部
  list <string>::iterator iterTwo = lTwo.begin();
  /*
   * iterTwo 前进 1 个元素
   * 其将指向 lTwo 第 2 个元素
   */
  ++iterTwo;

  // 用 iterTwo 初始化 iterThree
  list <string>::iterator iterThree = iterTwo;
  /*
   * iterThree 前进 2 个元素
   * 其将指向 lTwo 第 4 个元素
   */
  advance(iterThree , 2);

  /*
   * 将 [iterTwo , iterThree) 范围内的结点
   * 接到 iterOne 指向的结点前
   */
  lOne.splice(iterOne , lTwo , iterTwo , iterThree);

  // 分别将 lOne 和 lTwo 输出
  copy(lOne.begin() , lOne.end() , ostream_iterator<string>(cout , " "));
  // 释放输出流缓存
  cout << endl;
  copy(lTwo.begin() , lTwo.end() , ostream_iterator<string>(cout , " "));
  // 释放输出流缓存
  cout << endl;

  return 0;
}
