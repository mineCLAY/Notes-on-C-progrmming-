/*
 * 银行提供了整存整取
 * 定期储蓄业务
 * 其存期分为一年、两年、三年
 * 求出到第三年时
 * 凭存单支取本息
 * 年利如下:
 * 一年    2.25%
 * 两年    2.7%
 * 三年    3.24%
 * 利息 = 本金 * 年利率 * 存期
 * 本息 = 本金 + 利息
 */

#include <iostream>

using namespace std;

// 声明变量 Principal
void Principal(double);

int main(void) {

  // 定义变量
  double money;

  // 叫用户输入要存多少金钱
  cout << "Enter how much to save:" << endl;
  // 将用户输入的金钱赋给变量
  cin >> money;

  // 调用函数输出
  Principal(money);

  return 0;
}

// 定义函数 Principal
void Principal(double money) {

  // 计算结果
  money += money * 0.0324 * 3;

  // 打印
  cout << "\nThe principal and interest obtained after three years of existence: "
       << money << endl;

}
