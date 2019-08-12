#include <iostream>

using namespace std;

int main(void) {

  // 定义所需变量
  int choice = 1;
  switch (choice) {

    case 1: {
      // 打印 战士
      cout << "战士" << endl;
      break;
    }

    case 2: {
      // 打印 刺客
      cout << "刺客" << endl;
      break;
    }

    case 3: {
      // 打印 法师
      cout << "法师" << endl;
      break;
    }

    case 4: {
      // 打印 肉盾
      cout << "肉盾" << endl;
    }

    // 默认
    default : {
      cout << "隐居山林";
    }

  }

  // 定义变量
  int month;
  // 判断某月有几天
  switch (month) {

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12: {
      // 打印 30 天
      cout << "30 天" << endl;
    }

  }

  // 定义变量
  int a = 5;
  int b = 10;

  /*
   * 没有加大括号的 if
   * 只会执行一个语句
   */
  if (a > b)
  if (a++ > --b)
  a += b;

  // 打印
  cout << a << '\t' << b << endl;

  return 0;
}
