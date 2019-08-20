/*
 * 引用类型的函数
 *
 * 1. 不要返回局部变量的引用
 *    因为:
 *    函数中的局部变量
 *    会被内存回收
 *    所谓的内存回收
 *    并不是把内存保存
 *    的设置清零
 *    而是指内存中你的程序
 *    申请的这块内存已经
 *    不是此函数的了
 *    可能会被后面的函数
 *    覆盖并修改
 *    这时如果 main 主函数
 *    中有存储原函数
 *    返回的局部变量
 *    的引用所存储的值会被修改
 *
 * 2. 函数可以不返回值
 *    默认返回传入
 *    的引用对象本身
 */

#include <iostream>

// 声明返回引用类型的函数
int& sum();
// 声明函数 test
void test();
// 声明函数 print
void print(const int& result);
// 声明函数 add
int& add(int& , int&);

using namespace std;

int main(void) {

  /*
   * 定义变量 result
   * 将函数 sum
   * 的返回值赋给
   * result
   */
  int& result = sum();
  /*
   * 在函数 sum 调用完后
   * 立刻调用函数 test
   * 覆盖函数 sum 的代码
   */
  test();

  // 调用函数 print 打印
  print(result);
  // cout << "result: " << result << endl;

  // 定义函数参数
  int a = 0;
  int b = 5;

  /*
   * 定义变量
   * 将函数返回值赋给变量
   */
  int& rt = add(a , b);

  // 打印 6
  cout << "\nresult: " << rt << endl;

  /*
   * 让引用变量指向函数
   * add 返回值
   */
  int& temp = add(a , b);
  /*
   * 让函数作为左值
   * 如果想让函数不被修改
   * 应该在声明时加上前缀
   * const
   */
  add(a , b) = 55;

  /*
   * 打印 55
   *
   * 因为:
   * add 函数是本体
   * 但是它被 temp 引用
   * 所以两者有关联
   * 如果修改 add 函数
   * 的返回值其实
   * temp 的值也要修改
   * 如果不想被修改
   * 应该在函数加上前缀
   * const
   */
  cout << "\nresult: " << temp << endl;

  return 0;
}

// 定义函数 (实现函数)
int& sum() {

  // 定义变量
  int num = 10;
  /*
   * 定义引用变量
   * 让它指向 num
   * rNum 是在 sum
   * 函数中定义的
   * 所以叫局部变量
   * rNUM的声明周期
   * 只在sum函数中
   */
  int& rNum = num;

  /*
   * 将一个局部的
   * 引用类型变量
   * 返回 main 主函数
   */
  return rNum;

  /*
   * 函数中的局部变量
   * 会被内存回收
   * 所谓的内存回收
   * 并不是把内存保存
   * 的设置清零
   * 而是指内存中你的程序
   * 申请的这块内存已经
   * 不是此函数的了
   */

}

/*
 * 定义函数 test
 * 实现覆盖 sum 函数
 */
void test() {

  // 定义变量
  int x = 0;
  int y = 1;
  int z = 525;

  /*
   * 函数中的局部变量
   * 会被内存回收
   * 所谓的内存回收
   * 并不是把内存保存
   * 的设置清零
   * 而是指内存中你的程序
   * 申请的这块内存已经
   * 不是此函数的了
   * 所以这里其实是
   * 三个变量覆盖了
   * sum 函数的内存
   */
  // 返回 main 主函数
  return;
}

// 定义函数 print 实现打印
void print(const int& result) {

  /*
   * 打印 525
   * 因为 test 函数
   * 覆盖到 sum 函数
   */
  cout << "result: " << result << endl;

  // 返回 main 主函数
  return;
}

// 定义函数 add
int& add(int& number , int& num) {

  // 让变量自加
  number++;
  num++;

  /*
   * 没有返回值
   * 默认返回最后
   * 更新的引用
   * 这里返回 num
   */

  /*
   * 尽管要返回也不能
   * 相加引用
   * 因为
   * 引用也是指针
   * 而两者都是指向地址
   * 如果相加则不知会指向
   * 哪一个内存
   */
  // return number + num;

}
