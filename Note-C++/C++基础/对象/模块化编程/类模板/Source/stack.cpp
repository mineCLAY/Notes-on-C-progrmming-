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
   * 如果没有异常
   * 就执行 try 中的语句
   */
  try {

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

  }
  /*
   * 如果出现异常
   * 则捕获异常
   * 赋值给指针 temp
   * 然后执行 catch
   * 中的语句
   */
  catch(const char *temp) {

    // 输出异常
    cout << "Error: " << temp << endl;

  }

  /*
   * 如果没有异常
   * 就执行 try 中的语句
   */
  try {

    // 输出栈中数据
    cout << "data[2]: " << intStack.Popup() << '\n';
    cout << "data[1]: " << intStack.Popup() << '\n';
    cout << "data[0]: " << intStack.Popup() << endl;

    /*
     * 此处会使得函数 Popup
     * 抛出异常所以会输出
     * Beyond the bottom of the stack
     */
    cout << intStack.Popup() << '\n';

  }
  /*
   * 如果出现异常
   * 则捕获异常
   * 赋值给指针 te
   * 然后执行 catch
   * 中的语句
   */
   catch(const char *t) {

     // 输出异常
     cout << "Error: " << t << endl;

   }

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
