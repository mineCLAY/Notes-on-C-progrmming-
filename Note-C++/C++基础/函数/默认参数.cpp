/*
 * 默认参数
 *
 * 1. 默认值可以在函数
 *    上面或定义中给出
 *    不能在两个位置
 *    同时出现
 * 2. 对于带参数列表的函数
 *    必须从右向添加默认值
 */

#include <iostream>

using namespace std;

/*
 * 声明函数
 * 直接给它
 * 参数赋默认值
 */
void num(char string[] = " -- 嗯" , char str[20] = "我真帅");
// 不能从左向右赋值
// void num(char string[20] = "我真帅" , char str[20]);

int main(void) {

  // 调用函数 num
  num();
  // 再次调用这次给函数传址
  num(" -- 对");

  return 0;
}

// 定义函数
void num(char string[20]  , char str[20]) {

  // 打印
  cout << str << string << endl;;

}
