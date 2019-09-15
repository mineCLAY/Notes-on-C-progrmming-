/*
 * 注意运算符的优先级
 */

#include <iostream>

int main(void) {

  // 定义变量
  int a = 1;
  int b;

  /*
   * 此处将 a 的值
   * 赋给变量 b
   * 然后让 a 自减
   * 所以 b 为 1
   * 执行输出语句
   */
  if (b = a--) {

    // 输出
    std::cout << "Okey" << std::endl;

  } else {

    // 函数结束
    return 0;

  }

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  std::cin.get();

  return 0;

}
