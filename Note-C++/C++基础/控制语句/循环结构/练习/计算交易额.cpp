/*
 * 某宝双十一 2015 年的交易额为
 * 800 亿每年递增 25%
 * 按此速度哪年交易额达到 2000 亿
 * 寻找循环变量 赋值、判断、更新
 * 年 交易额 递增比
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  double money = 800.0;
  double temp = 800.0;
  int year = 2019;

  // 循环递增
  while (money < 2000) {

    year++;
    money *= 1 + 0.25;

  }

  // 打印
  cout << "year: " << year << '\t'
       << "money: " << money << " bilion" << '\t'
       << "incremental ratio: " << (double)(money / temp)  << endl;

  return 0;
}
