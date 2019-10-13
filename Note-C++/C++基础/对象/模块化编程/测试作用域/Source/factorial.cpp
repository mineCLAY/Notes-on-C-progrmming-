/*
 * 测试作用域 (TestScope)
 */

#include <iostream>
/*
 * 导入自己
 * 创建的头文件
 * header
 */
#include "..\\Header\\header.h"

using namespace std;

/*
 * 引入其它源文件
 * (翻译文件) 的成员变量
 */
extern unsigned short thatNum;
/*
 * 定义存储测试作用域
 * 是否会互相干扰的变量
 */
static bool condition = false;

// 程序入口
int main(int argc , char const *argv[]) {

  // 定义存储阶乘次数的变量
  unsigned long thisNum = 0;

  // 将函数返回值输出
  cout << thisNum << "! is equal to " << ReturnFactorial(thisNum) << '\n';

  cout << thatNum << "! is equal to " << ReturnFactorial(thatNum) << '\n';

  cout << headerNum << "! is equal to " << ReturnFactorial(headerNum) << '\n';

  // 判断 condition 是否为真
  if (condition) {

    // 输出
    cout << "I am so handsome." << endl;

  }

  /*
   * 让程序停一下
   * 不会一闪而过
   */

  return 0;
}
