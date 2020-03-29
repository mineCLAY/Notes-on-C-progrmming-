/*
 * 用字符串输出流将数值转换为字符串
 */

#include <iostream>
// 字符串操作
#include <string>
// 字符串流
#include <sstream>

using namespace std;

/*
 * 定义函数模板
 * 可以将各种支持 "<<"
 * 插入运算符的类型的对象转换成字符串
 */
template <typename T>
inline string ToString(const T &temp) {

  // 创建字符串输出流
  ostringstream os;
  // 将变量 temp 值写入字符串流
  os << temp;
  // 返回输出流生成的字符串
  return os.str();

}

// 程序入口
int main(int argc, char const *argv[]) {

  /*
   * 定义字符串变量
   * 并将传入的数据
   * 转换成字符串后返回
   */
  string strOne = ToString(0);
  string strTwo = ToString(1.2);

  // 输出字符串变量存储的字符串
  cout << strOne << '\n';
  cout << strTwo << endl;

  cin.get();

  return 0;
}
