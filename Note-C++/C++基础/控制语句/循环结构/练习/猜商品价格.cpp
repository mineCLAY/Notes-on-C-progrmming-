/*
 * 猜商品价格游戏
 * 根据猜的次数给予不同的奖励
 * 1 次: iPhone8S Plus 土豪金
 * 2 ~ 3 次: 小米移动电源
 * 5 次以内: VR 眼镜
 */ 

#include <iostream>

using namespace std;

int main(void) {

  // 定义要猜的商品及价格
  const double PRICE = 2333;
  // 用户猜的价格
  double guessPrice;
  // 用户猜测的次数
  int guessCount = 0;

  // 循环
  while (6 > 3) {

    // 让次数加一
    guessCount++;

    // 叫用户输入价格
    cout << "Enter a price:" << endl;
    // 将用户输入的价格赋给变量
    cin >> guessPrice;

    // 判断用户输入的价格是否一致
    if (PRICE == guessPrice)
      // 退出循环
      break;

  }

  // 判断用户得了什么奖
  if (1 == guessCount) {

    // 打印
    cout << "中了 iPhone8S + 土豪金" << endl;

  } else if ((2 == guessCount) || (3 == guessCount)) {

    // 打印
    cout << "中了 小米移动电源" << endl;

  } else if ((3 < guessCount) && (5 >= guessCount)) {

    // 打印
    cout << "中了 VR 眼镜" << endl;

  } else {

    // 打印
    cout << "没中奖" << endl;

  }

  return 0;
}
