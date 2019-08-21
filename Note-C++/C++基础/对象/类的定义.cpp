/*
 * 类
 *
 * 类是一种将抽象转换为
 * 用户定义类型的工具
 * 将数据不是和操纵数据
 * 的方法组合组合成一个整体
 * 类的实例称为对象
 * 累中的变量和函数称为成员
 *
 * 1. class 方式声明类型与
 *    srtuct 声明的类型仅仅
 *    是形式上的不同
 * 2. 其唯一的区别在于使用 class
 *    声明的类型默认成员是私有的
 *    (private)
 *    而 struct 声明的类型默认成员
 *    是共有的 (public)
 */

#include <iostream>
/*
 * 如果要使用在
 * 某文件的类
 * 那么必须导入
 * 类的头文件
 */
// #include "LandOwaner.h"

using namespace std;

// 定义类 LandOwaner
class LandOwaner {

  // 私有
  private:
    // 地主名称
    string name;
    // 地主积分
    long score;
    // 地主的手牌数组
    int card[20];
  
  // 公有
  public:

    // 定义 (实现) 构造函数
    LandOwaner() {}
    // 定义 (实现) 析构函数
    ~LandOwaner() {}
    // 声明构造函数
    // LandOwaner();
    // 声明析构函数
    // ~LandOwaner();

    /*
     * 如果此 class 
     * 在 .hpp 文件一般包含实现
     * 的内联函数
     * 如果是定义了函数
     * 就算不加前缀 inline
     * 编译器也会默认加上
     * 通常用于模板类这种
     * 声明与实现共存的情况
     * 只要不是纯模板
     * 一律使用 .h
     * 作为头文件后缀
     * 使用文件 cpp 作为
     * 函数的实现文件
     *
     * 在 .h 文件中类的函数
     * 一般只声明不定义 (实现)
     * 在 .hpp 文件中
     * 一般都要 定义 (实现)
     */

    /*
     * 定义函数 TouchCard
     * 实现打印摸牌张数
     */
    /* inline */ void TouchCard(int cardCount) {

      // 暂时忽略函数的实现
      cout << name << " 摸了 " << cardCount << " 张牌" << endl;

    }

    /*
     * 定义函数 ShowScore
     * 实现打印积分
     */
    /* inline */ void ShowScore() {

      // 打印
      cout << name << "score: " << score << endl;

    }

};

int main(void) {

  // 普通数据类型 变量名
  int num;
  // 给变量赋值
  num = 0;

  /*
   * 声明一个 LandOwaner
   * 类型的变量 lanOwaner
   * 此时类 LandOwaner
   * 就是一个类型
   */
  LandOwaner landOwaner;
  /*
   * 调用对象的成员方法:
   * 对象名.成员
   *
   * 不能直接使用
   * 对象的私有成员
   */
  // landOwaner.card[0] = 0;

  // 调用对象的成员函数
  landOwaner.TouchCard(0);

  return 0;
}
