/*
 * 有以下一段代码
 * 判断输出结果
 *
 * 答案:
 * 123abc
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  int num;
  char ch , ch1 , ch2 , ch3;

  // 假设用户输入: 123abc
  // cin >> num;
  // 等同于 scanf("%d" , &num);
  // cin >> ch;

  // 如果是有数字又有字符用以下方法
  ch1 = cin.get();
  ch2 = cin.get();
  ch3 = cin.get();

  // 输出
  cout << num << "\t" << ch << endl;

  // 输出
  cout << num
       << '\t' << ch1 << '\t' << ch2 << '\t' << ch3 << endl;

  return 0;
}
