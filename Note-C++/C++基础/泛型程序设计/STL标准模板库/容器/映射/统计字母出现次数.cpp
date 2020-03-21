/*
 * 映射 (map) 实例
 *
 * 统计一句话中每个
 * 字母出现的次数
 */

#include <iostream>
// 映射
#include <map>
#include <cctype>

using namespace std;

// 程序入口
int main(int argc, char const *argv[]) {

  // 用来存储字幕出现次数的映射
  map <char , int> test;
  // 存储输入字符
  char c;

  do {

    // 输入下一个字符
    cin >> c;
    // 判断是否是字母
    if (isalpha(c)) {

      // 将字母转换为小写
      c = tolower(c);
      // 将该字母的出现频率加一;

    }

  } while ('.' != c); // 碰到 '.' 则结束输入

  // 输出每个字母出现次数
  for (map <char , int>::iterator iter = test.begin(); iter != test.end(); ++iter)
    // 输出
    cout << iter -> first << ' ' << iter -> second << ' ';

  // 释放输出流缓存
  cout << endl;

  cin.get();
  cin.get();

  return 0;
}
