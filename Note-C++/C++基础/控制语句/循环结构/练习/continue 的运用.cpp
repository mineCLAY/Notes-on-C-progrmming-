/*
 * 输入 5 个玩家的消费
 * 统计消费额低于 500 的玩家数量
 *
 * 求 1 ~ 100 的偶数和
 */

#include <iostream>

using namespace std;

int main(void) {

  // 玩家的消费
  double money;
  // 玩家计数
  int playerCount = 0;

  // 开始循环
  for (int i = 0; i < 5; i++) {

    // 叫用户输入消费
    cout << "Enter you money:" << endl;
    // 将用户输入的消费赋值
    cin >> money;

    // 判断
    if (500 > money) {

      // 让 playerCount 自加
      playerCount++;
      // 执行下一次循环
      continue;

    }

  }

  // 打印
  cout << "Player count: " << playerCount << endl;

  // 定义变量
  int sum= 0;

  // 循环累加
  for (int i = 1; i <= 100; i++) {

    // 判断
    if (1 == i % 2)
      // 执行下一次循环
      continue;

    // 累加
    sum += i;

  }

  // 打印
  cout << '\n' << "1 to 100 number sum: " << sum << endl;

  return 0;
}o
