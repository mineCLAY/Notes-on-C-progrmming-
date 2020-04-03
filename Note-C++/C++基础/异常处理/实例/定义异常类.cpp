/*
 * 声明一个异常类 CException
 * 有成员函数 Reason()
 * 用来显示异常的类型
 * 在子函数中触发异常
 * 在主程序中处理异常
 * 观察程序执行流程
 */

#include <iostream>
// 异常处理
#include <stdexcept>

using namespace std;

// 异常类
class CException {

// 公有
public:
  // 输出原因
  void Reason() { cout << "CException" << endl; }

};

/*
 * 在函数 funOne 中
 * 用 throw 语句触发异常
 * 即 throw CException
 */
void funOne() {

  // 抛出异常
  throw CException();

}

// 程序入口
int main() {


  /*
   * try 模板中
   * 调用会抛出异常的 funOne()
   */
  try {

    // 调用函数
    funOne();

  }
  /*
   * 在 catch 模板中捕获异常
   * 不活的就是 CException 类的异常
   */
  catch (CException &temp) {

    // 查看异常原因
    temp.Reason();

  }

  cin.get();
  cin.get();

  return 0;
}
