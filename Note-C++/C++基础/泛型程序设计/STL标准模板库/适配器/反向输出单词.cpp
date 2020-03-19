// 利用栈 (适配器) 反向输出单词

#include <iostream>
// STL 迭代器
#include <iterator>
// 栈
#include <stack>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义栈容器 test
  stack <char> test;
  string str;

  // 从键盘输入一个字符串
  cin >> str;

  // 将字符串的每个元素顺序压入栈中
  for (string::iterator iter = str.begin(); iter != str.end(); ++iter)
    // 压入数据
    test.push(*iter);

  // 将栈中的元素顺序弹出并输出
  while (!test.empty()) {

    // 输出数据
    cout << test.top();
    test.pop();

  }

  cin.get();
  cin.get();

  return 0;
}
