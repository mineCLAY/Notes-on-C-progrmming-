/*
 * 利用 assert 函数中断程序
 */

#include <cassert>

int main(int argc, char const *argv[]) {

  // 定义测试变量
  int test = 0;
  /*
   * 调用 assert 函数
   * 1. 如果 test 等于 1
   *    则什么事也没有
   * 2. 如果 test 不等于 1
   *    则中断程序
   *    并告诉用户错误信息
   */
  assert(1 == test);

  return 0;
}
