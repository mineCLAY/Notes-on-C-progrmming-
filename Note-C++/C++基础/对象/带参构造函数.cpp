/*
 * 构造函数
 *
 * 构造函数的重载规则
 * 与普通函数重载相同
 * 都是对参数类型作重载
 */

#include <iostream>

using namespace std;

/*
 * 定义类 TestArgumentConstruct
 */
class TestArgumentConstructor {

// 私有
private:
  // 定义成员变量
  string thisName;
  string thisDesc;
  int thisAge;

//公有
public:
  // 声明默认构造函数实现重载
  TestArgumentConstructor();
  // 声明析构函数
  ~TestArgumentConstructor();

  // 声明带参构造函数实现重载
  TestArgumentConstructor(string , string);

  /*
   * 如果构造函数中只有
   * 一个是带唯一的参数
   * 那么定义有此构造函数
   * 为成员的对象
   * 可以这样定义:
   * 类名 (类型) 对象名 = 数据;
   */
  TestArgumentConstructor(int);
  // TestArgumentConstructor(string);

  // 定义函数 PrintInfo
  void PrintInfo() {

    // 打印
    cout << thisDesc << thisName << endl;

  }

};

// 定义 (实现) 默认构造函数
TestArgumentConstructor::TestArgumentConstructor() {

  cout << "默认构造函数" << endl;

}

/*
 * 定义 (实现) 有参构造函数
 * 用 初始化参数列表
 * 给相应变量赋值
 */
TestArgumentConstructor::TestArgumentConstructor(string name , string desc) : thisName(name) , thisDesc(desc) {

  // 给相应变量赋值
  // thisName = name;
  // thisDesc = desc;

  // 打印
  cout << "TestArgumentConstructor(string name , string desc)" << endl;

}

// 定义 (实现) 有参构造函数
TestArgumentConstructor::TestArgumentConstructor(int age) {

  // 给相应变量赋值
  thisAge = age;

  // 打印
  cout << "TestArgumentConstructor(int age)" << endl;

}

// 定义 (实现) 析构造函数
TestArgumentConstructor::~TestArgumentConstructor() {

  // dtor

}

int main(void) {

  /*
   * 定义对象
   * 在栈内存直接
   * 分配内存 (空间)
   * 此对象的类型构造函数为:
   * 默认构造器
   */
  TestArgumentConstructor test1;
  /*
   * 定义对象
   * 此对象的结构函数为:
   * TestArgumentConstructor(string name , string desc);
   */
  TestArgumentConstructor test2("- Mine" , "GOD ");
  /*
   * 定义对象
   * 此对象的构造函数为:
   * TestArgumentConstructor(int age)
   */
  TestArgumentConstructor test3(0);
  /*
   * 定义对象
   * 此对象的构造函数为:
   * TestArgumentConstructor(int)
   * 因为:
   * 如果构造函数中只有
   * 一个是带唯一的参数
   * 那么定义有此构造函数
   * 为成员的对象
   * 可以这样定义
   */
  TestArgumentConstructor test4 = 0;
  /*
   * 不能再次定义
   * 因为:
   * 类中只有唯一带
   * 一个参数的构造函数
   * 才可以这样定义
   */
  // TestArgumentConstructor test = "GOD";

  // 调用对象的成员函数
  test2.PrintInfo();

  /*
   * 用 new 分配一个
   * 新的内存 (空间)
   * 此内存是在堆中创建
   * 定义指针让指针指向它
   */
  TestArgumentConstructor* test5 = new TestArgumentConstructor(0);
  // 用指针调用指向的对象的成员函数
  test5 -> PrintInfo();

  return 0;
}
