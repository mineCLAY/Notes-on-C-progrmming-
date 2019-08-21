/*
 * 访问修饰符
 *
 * 封装的实现
 */

#include <iostream>

using namespace std;

// 定义类 
class TestModifier {

  /*
   * 忽略 private 修饰符
   * (但是编译器会默认加上)
   */
  /* private: */
    // 定义积分
    long score;

  // 共有
  public:
    // 定义名字
    string name;
    // 定义 (实现) 结构函数
    TestModifier() {}
    // 定义 (实现) 析构函数
    ~TestModifier() {}

    /*
     * 定义 (实现) 函数 SetName
     * 判断 score 是非法情况
     *
     * 使用 方法 / 函数 实现对
     * 成员变量的封装
     * Get / Set 方法
     */
    void SetName(string tempName) {

      // 给变量赋值
      name = tempName;

    }
    /*
     * 定义 (实现) 函数 GetName
     * 实现返回积分给调用
     * 此函数的函数
     */
    string GetName() {

      /*
       * 将 name 返回调用
       * 此函数的函数
       */
      return name;

    }

    /*
     * 定义 (实现) 函数 SetScore
     * 判断 score 是非法情况
     *
     * 使用 方法 / 函数 实现对
     * 成员变量的封装
     * Get / Set 方法
     */
    void SetScore(long tempScore) {

      /*
       * 判断传入的积分是否
       * 是非法情况
       * 如果是积分默认为 0
       */
      if (0 > tempScore)
        // 将积分默认为 0
        score = 0;
      else
        /*
         * 积分为正数时
         * 才进行赋值操作
         * 这里就通过条件判断
         * 封装了
         */
        score = tempScore;

    }
    /*
     * 定义 (实现) 函数 GetScore
     * 实现返回积分给调用
     * 此函数的函数
     */
    long GetScore() {

      /*
       * 将 score 返回调用
       * 此函数的函数
       */
      return score;

    }

    // 定义 (实现) 函数 print
    void Print() {

      // 打印
      cout << "name: " << name << '\n' << "score: " << score << '\n' << endl;

    }

};

int main(void) {

  /*
   * 定义一个 TestModifier
   * 类型的变量 (对象)
   */
  TestModifier testModifier;

  /*
   * 无法直接修改 testModifier
   * 对象的私有变量
   */
  // testModifier.name = "GOD";
  // testModifier.score = 0;

  // 需要借助函数
  testModifier.SetName("GOD");
  testModifier.SetScore(0);

  // 调用对象的成员函数实现打印
  testModifier.Print();

  // 打印对象成员函数返回的值
  cout << testModifier.GetName() << '\n'
       << testModifier.GetScore() << endl;

  return 0;
}
