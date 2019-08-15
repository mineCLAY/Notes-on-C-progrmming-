/* 
 * 战力值排行榜
 *
 * 1. 战力值从大到小排序
 * 2. 删除战斗力42322
 * 3. 插入战斗力 41000
 *    并保持降序
 */

#include <iostream>

using namespace std;

int main(void) {

  /*
   * 数组大小一旦确定了
   * 就不能更改了
   */
  double power[99];
  // 当前数组中的元素个数
  int powerCount = 0;
  // 要插入的攻击力数值
  double insertPower = 0;
  // 默认插入到第一个元素位置
  int insertIndex;

  // 开始对数组赋值
  power[powerCount++] = 45771;
  power[powerCount++] = 42322;
  power[powerCount++] = 40907;
  power[powerCount++] = 40706;

  // 定义临时变量
  double temp;
  // 开始冒泡排序
  for (int i = 0; i < powerCount; i++) {

    // 嵌套
    for (int j = 0; j < powerCount - i - 1; j++) {

      /*
       * 判断后面一个数组元素
       * 是否大于前面一个数组元素
       */
      if (power[j] <power[j + 1]) {

        // 交换
        temp = power[j];
        power[j] = power[j + 1];
        power[j + 1] = temp;

      }

    }

  }

  // 打印提示
  cout << "排序后:\n" << endl;

  // 循环打印
  for (int i = 0; i < powerCount; i++) {

    // 打印
    cout << power[i] << ' ';

  }

  // 打印换行
  cout << endl;

  // 叫用户输入一个数字
  cout << "Enter a number:" << endl;
  // 将用户输入的数字赋值
  cin >> insertPower;

  // 将插入的位置赋值
  insertIndex = powerCount;

  /*
   * 插入数字
   *
   * 1. 找到第一个比插入
   * 数字大的位置 insertIndex
   */
  for (int i = 0; i < powerCount; i++) {

    /*
     * 判断 insertPower
     * 是否大于 power
     * 数组为下标 i 的元素
     */
    if (insertPower > power[i]) {

      // 将该下标赋给变量
      insertIndex = i;
      // 退出循环
      break;

    }

  }

  /*
   * 从最后一个元素开始
   * 将数字复制到后面一个元素中
   */
  for (int i = powerCount - 1; i >= insertIndex; i--) {

    // 开始复制
    power[i + 1] = power[i];

  }

  // 将要插入的数字赋给数组
  power[insertIndex] = insertPower;

  // 打印
  cout << endl;
  // 循环打印
  for (int i = 0; i <= powerCount; i++) {

    // 打印
    cout << power[i] << ' ';

  }

  // 打印换行
  cout << '\n' << endl;

  /*
   * 删除数字
   *
   * 1. 找到要删除的元素下标
   */
  double deletePower;
  // 定义存储元素下标的变量
  int deleteIndex = INT_MIN;

  // 叫用户输入要删除的数字
  cout << "Enter delete number:" << endl;
  // 将用户输入的数字赋给变量
  cin >> deletePower;

  // 循环找到要删除元素的下标
  for (int i = 0; i <= powerCount; i++) {

    /*
     * 判断数组元素和要删除的
     * 元素是否一致
     */
    if (deletePower == power[i]) {

      // 记录该元素下标
      deleteIndex = i;
      // 退出循环
      break;

    }

  }

  // 判断是否找到
  if (INT_MIN == deleteIndex) {

    // 打印错误
    cout << "\nDelete error" << endl;

  } else {

    /*
     * 从找到的下标开始
     * 后面一个元素赋值给
     * 前面一个元素
     */
    for (int i = deleteIndex; i < powerCount; i++) {

      // 开始交换
      power[i] = power[i + 1];

    }

    // 总长度 -1
    powerCount--;

    // 打印
    cout << "\nDelete:\n" << endl;
    for (int i = 0; i <= powerCount; i++) {

      cout << power[i] << ' ';

    }

    // 打印换行
    cout << endl;

  }

  return 0;
}
