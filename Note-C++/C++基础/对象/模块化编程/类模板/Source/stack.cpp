/*
 * 类模板 (ClassTempleta)
 * 生成一个栈
 */

#include <iostream>
/*
 * 导入自定义头文件
 * header
 */
#include "..//Header//header.h"

using namespace std;

int main(int argc, char const *argv[]) {

  /*
   * 定义对象 intStack
   * 此内存在栈中
   */
  Stack<int> intStack(23);

  /*
   * 调用函数 Pushu
   * 压入数据 0
   */
  intStack.Push(0);
  /*
   * 调用函数 Pushu
   * 压入数据 1
   */
  intStack.Push(1);
  /*
   * 调用函数 Pushu
   * 压入数据 2
   */
  intStack.Push(2);

  // 输出栈中数据
  cout << "data[2]: " << intStack.Popup() << '\n';
  cout << "data[1]: " << intStack.Popup() << '\n';
  cout << "data[0]: " << intStack.Popup() << endl;

  return 0;
}
