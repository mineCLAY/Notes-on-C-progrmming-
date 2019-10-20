/*
 * 重载前置和后置 ++ 为时钟类成员函数

 * 1. 前置单目运算符
 *    重载函数没有形参
 *
 * 2. 后置 ++ 运算符
 *    重载函数需要一个 int 形参
 *
 * 3. 操作数是时钟类对象
 *
 * 4. 实现时间增加一秒钟
 */

#include <iostream>

using namespace std;

/*
 * 定义时钟类 Clock
 */
class Clock {

// 私有
private:
  // 声明存储小时的变量
  int hour;
  // 声明存储分钟的变量
  int minute;
  // 声明存储秒钟的变量
  int second;

// 公有
public:
  /*
   * 声明构造函数
   * 并初始化参数
   * 列表中的变量
   */
  Clock(int hour = 0 , int minute = 0 , int second = 0);

  // 声明输出时间的函数
  void PrintTime() const;

  // 声明重载前置单目运算符的函数
  Clock& operator ++ ();

  // 声明重载后置单目运算符的函数
  Clock operator ++ (int);

  // 声明析构函数
  virtual ~Clock();

};

// 定义 Clock 类中的构造函数
Clock::Clock(int hour , int minute , int second) {

  // 判断是否是人类时间
  if ((0 <= hour) && (24 > hour) && (0 <= minute) && (60 > minute) &&
     (0 <= second) && (60 > second)) {

    // 给相应变量赋值
    this -> hour = hour;
    this -> minute = minute;
    this -> second = second;

  } else {

    // 输出输入的时间错误
    cout << "Time error." << endl;

  }

}

/*
 * 定义输出时间
 * Clock 类中的函数
 * PrintTime
 */
void Clock::PrintTime() const {

  // 输出
  cout << hour << " : " << minute << " : " << second << endl;

}

/*
 * 定义重载前置单目运算符
 * '++' 的函数
 */
Clock& Clock::operator ++ () {

  // 秒钟加一
  second++;

  // 判断秒钟是否为 60
  if (60 <= second) {

    // 让秒钟减一分钟 (60 s)
    second -= 60;
    // 让分钟加一
    minute++;

    // 判断分钟是否为 60
    if (60 <= minute) {

      // 让分钟减一小时 (60 m)
      minute -= 60;
      // 让小时加一
      hour = (hour + 1) % 24;

    }

  }

  // 返回当前对象
  return *this;

}

/*
 * 定义重载后置单目运算符
 * '++' 的函数
 * 使用 int 类型的形参
 * 作为占位符
 */
Clock Clock::operator ++ (int) {

  /*
   * 定义中间对象 temp
   * 将当前对象赋值给 temp
   */
  Clock temp = *this;

  // 调用前置 "++" 运算符
  ++(*this);
  // 返回调用 "++" 前的对象
  return temp;

}

Clock::~Clock() {

  // dtor

}

// 程序入口
int main(int argc , char const *argv[]) {

  // 定义 Clock 类的对象 (实现)
  Clock test(0 , 0 , 0);

  // 输出第一个时间
  cout << "First time: ";
  test.PrintTime();

  // 输出调用后置运算符后的时间
  cout << "Run test++: ";
  (test++).PrintTime();

  // 输出调用前置运算符后的时间
  cout << "Run ++test: ";
  (++test).PrintTime();

  // 输出换行
  cout << '\n';

  // 定义 Clock 类的对象 (实现)
  Clock t(23 , 59 , 59);

  // 输出第一个时间
  cout << "First time: ";
  t.PrintTime();

  // 输出调用后置运算符后的时间
  cout << "Run t++: ";
  (t++).PrintTime();

  // 输出调用前置运算符后的时间
  cout << "Run ++t: ";
  (++t).PrintTime();

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
