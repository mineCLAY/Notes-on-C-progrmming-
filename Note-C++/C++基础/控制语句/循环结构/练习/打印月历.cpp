/*
 * 打印中国
 * 1997 年 7 月的月历
 */

#include <iostream>

using namespace std;

int main(void) {

  // 定义变量
  const int DAY = 31;
  int dayOfweek = 2;

  // 打印
  cout << "一\t二\t三\t四\t五\t六\t日" << endl;

  // 打印制表符
  cout << '\t';

  // 循环打印日子
  for (int i = 1; i <= DAY; i++) {

    // 打印
    cout << i;
    // 打印制表符
    cout << '\t';
    
    // 判断是否在星期日
    if (0 == (i + 1) % 7) {

      // 打印换行
      cout << endl;

    }

  }

  return 0;
}
