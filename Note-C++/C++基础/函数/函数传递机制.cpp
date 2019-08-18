/*
 * 函数传递机制
 *
 * 给函数传递变元 (参数) 时
 * 变元 (参数) 值不会直接传递
 * 给函数
 * 而是先制作变元 (参数) 值的
 * 副本
 * 存储在栈上
 * 再使这个副本可用于函数
 * 而不是使用初始值
 *
 * 而形参是指针或引用时
 * 则是传递地址 (传址)
 * 此时如果改变此指针
 * 指向地址的内存的值
 * 则会改变其值
 */

#include <iosteam>

void change(int num) {

  // 让此空间的 num 自加
  num++;

}

void changePro(int &num) {

  // 让 num 自加
  num++;

}

using namespace std;

int main(void) {

  // 定义变量
  int num = 1;
  // 调用函数 change
  change(num);
  // 打印 10
  cout << num << endl;

  // 调用函数 changePro
  changePro(num);
  // 打印 11
  cout << num << endl;

  return 0;
}
