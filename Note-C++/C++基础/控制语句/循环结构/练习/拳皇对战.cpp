/* 
 * 拳皇对战
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
  
  // 八神庵的 HP
  int hp1 = 100;
  int hp2 = 100;

  // 八神庵的攻击力
  int attack1 = 0;
  // 草薙京的攻击力
  int attack2 = 0;

  // 获取时间
  srand(time(NULL));

  /* 
   * 当双方都生存的
   * 时候继续战斗过程
   */
  while ((hp1 > 0) && (hp2 > 0)) {

  /* 
   * 模拟玩家出招:
   * 采用随机数是 奇数 / 偶数
   * 的方式来决定谁先攻击
   *
   * 奇数 - 八神庵
   * 偶数 - 草薙京
   */
  // 获取随机数
  int randNum = rand();

  // 判断是奇数还是偶数
  if (1 == randNum % 2) {

    // 八神庵先攻击
    attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
    attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

    // 互相掉血
    hp2 -= attack1;
    hp1 -= attack2;

    } else {

    // 草薙京先攻击
    attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
    attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

    // 互相掉血
    hp1 -= attack2;
    hp2 -= attack1;

    }
  }

  // 打印最终结果
  cout << "八神庵 HP: " << hp1 << endl;
  cout << "草薙京 HP: " << hp2 << endl;

  // 判断谁获胜
  if (hp1 > hp2) {

    // 打印
    cout << "八神庵 win" << endl;    

  } else {

    // 打印
    cout << "草薙京 win" << endl;

  }

  return 0;
}
