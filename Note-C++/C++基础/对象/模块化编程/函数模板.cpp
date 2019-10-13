/*
 * 函数模板 (FunctionTempleta)
 * 实现两个变量数据交换
 */

#include <iostream>

using namespace std;

/*
 * 使用模板定义函数
 * 实现一个函数实现
 * 多个重载函数
 * 交换的功能
 */
template <class Type>
/*
 * 定义函数 Exchange
 * 实现两个变量交换数据
 */
void Exchange(Type *temp , Type *t) {

  // 定义临时变量
  Type temporary;

  // 开始交换
  temporary = *temp;
  *temp = *t;
  *t = temporary;

}

// 程序入口
int main(int argc , char const *argv[]) {

  /*
   * new 新的 int
   * 类型内存 (空间)
   * 此内存在堆中
   * 定义测试交换的指针变量
   * 让指针变量指向新建内存
   */
  int *test = new int(0);
  int *t = new int(2019);

  // 输出交换前两个变量的数据
  cout << "Before e1xchange:" << '\n'
       << "test: " << *test << '\n'
       << "t: " << *t << '\n' << '\n';

  // 调用函数实现交换
  Exchange(test , t);

  // 输出交换后两个变量的数据
  cout << "After exchange:" << '\n'
       << "test: " << *test << '\n'
       << "t: " << *t << '\n' << '\n';

  // 释放指针存储的内存
  delete test;
  delete t;

  // 定义测试交换的变量
  string str = "GOD";
  string s = "God";

  // 输出交换前两个变量的数据
  cout << "Before e1xchange:" << '\n'
       << "str: " << str << '\n'
       << "s: " << s << '\n' << '\n';

  // 调用函数实现交换
  Exchange(&str , &s);

  // 输出交换后两个变量的数据
  cout << "After exchange:" << '\n'
       << "str: " << str << '\n'
       << "s: " << s << '\n' << '\n';

  return 0;
}
