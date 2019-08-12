/*
 * 计算应付金额
 *
 * 如果总价大于 50000
 * 就打 7 折
 * 否则打 9 折
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义所需变量
  double price_louis = 35000.0;
  double price_hemes = 11044.5;
  double price_chanel = 15354.0;
  double total;

  // 计算总价
  total = price_hemes + price_louis + price_chanel;

  // 判断在哪个打折范围
  if (total > 50000) {

    // 打折扣
    total *= 0.7;

  } else {

    // 打折扣
    total *= 0.9;

  }

  // 打印应付金额
  cout << "total: " << total << endl;


  return 0;
}
