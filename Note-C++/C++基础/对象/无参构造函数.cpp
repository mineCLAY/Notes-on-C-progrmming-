/*
 * 构造函数
 *
 * 1. 如果创建的类中未
 *    书写任何构造函数
 *    系统会自动生成默认
 *    的无参构造函数
 *    (函数为空什么也不做)
 * 2. 如果书写了构造函数
 *    系统就不会自动再
 *    生成默认构造
 *    希望有一个这样的
 *    无参结构函数
 *    需要自己显示地书写出来
 */

#include <iostream>
#include <memory.h>

using namespace std;

/*
 * 定义类
 * TestNoArgumentConstructor
 */
class TestNoArgumentConstructor {

  /*
   * 下面语句写不写都一样
   * 作用:
   * 告诉编译器给构造函数一个
   * 默认构造函数
   */
  // TestNoArgumentCostructor() = default;

  // 定义成员变量
  string name;
  int score;
  // 定义成员数组
  int card[20];

// 共有
public:
  // 定义无参构造函数
  TestNoArgumentConstructor() {

    /*
     * 一般使用构造函数
     * 进行成员变量的初始化
     */
    name = "默认";
    score = 0;

    // 将用户手牌初始化为 0
    memset(card , 0 , sizeof(card));

    // 打印
    cout << "Test no argument constructor" << endl;
    cout << "初始化结果:" << endl;
    cout << "name: " << name << endl;
    cout << "score: " << score << endl;
    cout << "array:" << endl;

    // 循环打印数组
    for (int i = 0; i < sizeof(card) / sizeof(card[0]); i++) {

      // 打印
      cout << card[i] << ' ';

    }

  }

};

int main(void) {

  /*
   * 定义对象时
   * 编译器会自动
   * 调用构造函数
   */

  /*
   * 省略了构造函数但是
   * 编译器会自动调用
   * 构造函数就是 ()
   */
  TestNoArgumentConstructor testNoArgumentConstructor;
  // 标准写法
  // TestNoArgumentConstructor standardTestNoArgumentConstructor();

  // 打印换行
  cout << endl;

  return 0;
}
