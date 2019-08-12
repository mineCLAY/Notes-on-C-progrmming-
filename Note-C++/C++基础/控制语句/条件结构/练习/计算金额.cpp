/*
 * 计算应付金额
 *
 * 如果买的三种商品有一种商品
 * 单价大于 1000
 * 或三种商品总金额大于 5000
 * 折扣率为 30%
 * 否则没有折扣
 */

#include <iostream>

using namespace std;

int main(void) {

  // 大于变量
  double price_louis = 35000.0;
  double price_hermes = 11044.5;
  double price_chanel = 1535.0;
  double total;
  double discount;

  // 计算总价
  total = price_louis + price_chanel + price_hermes;

  // 判断在哪个折扣范围
  if ((1000 < price_chanel) ||(1000 < price_chanel) || (1000 < price_hermes) || (5000 < total)) {

    // 设置折扣
    discount = 0.3;

  } else {

    // 设置折扣
    discount = 1;

  }

  // 打印
  cout << "total:" << total * discount << endl;

  return 0;
}
