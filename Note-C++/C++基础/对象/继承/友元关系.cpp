;/*
 * Problem 朋友不可欺
 * (FriendsRelationshipExample)
 *
 * Person 类有两个子类
 * 分别为 Boy 类和 Girl 类
 *
 * Person 应有的方法
 * Hit play 等
 *
 * 另增加 Other 类
 * 作为路人甲
 * Other 想打 (Hit)
 * Girl 类的对象 要帮助他实现
 */

#include <iostream>
#include <string>

using namespace std;

// 定义基类 Person
class Person {

// 私有 (子类可以用)
protected:
  // 定义变量
  string name;

  // 建立友元关系
  friend class Other;

// 公有
public:
  /*
   * 定义构造函数
   * 并初始化参数列表
   */
  Person(string thisName) : name(thisName) {

    // ctor

  }

  // 定义函数 Hit
  void Hit(Person* object) {

    // 输出
    cout << this -> name << " hit " << (*object).name << endl;

  }

  // 定义函数 Play
  void Play(Person* object) {

    // 输出
    cout << this -> name << " and " << (*object).name << " are playing" << endl;

  }

  // 定义函数 Ask
  void Ask(Person* object , string something) {

    // 判断做什么
    if ("Hit" == something) {

      // 调用函数 Hit
      Hit(object);

    } else {

      // 调用函数
      Play(object);

    }

  }

  // 定义析构函数
  ~Person() {

    // dtor

  }

};

// 定义子类 Boy
class Boy : public Person {

// 公有
public:
  /*
   * 定义构造函数
   * 并调用基类构造函数
   */
  Boy(string name) : Person(name) {

    // ctor

  }

};

// 定义子类 Girl
class Girl : public Person {

// 公有
public:
  // 定义
  /*
   * 定义构造函数
   * 并调用基类构造函数
   */
  Girl(string name) : Person(name) {

    // ctor

  }

};

// 定义类 Other
class Other {

/*
 * 私有
 * 和类: Girl
 * 建立友元关系
 */
private:
  // 定义变量
  string name;

// 公有
public:
  // 定义构造函数
  Other(string name) {

    // 给相应变量赋值
    this -> name = name;

  }

  // 定义函数 Hit
  void Hit(Person* person) {

    // 输出
    cout << this -> name << " hit " << (*person).name << endl;

  }

};

// 程序入口
int main(void) {

  // 定义对象
  Girl girl("loser girl");
  Boy boy("loser boy");
  Other other("real man");

  // 调用对象的成员函数
  boy.Ask(&girl , "Hit");
  boy.Ask(&girl , "Play");

  // 调用对象的成员函数
  other.Hit(&girl);

  return 0;
}
