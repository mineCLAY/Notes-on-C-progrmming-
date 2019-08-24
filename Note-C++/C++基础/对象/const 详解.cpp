 /*
 * const 修饰指针变量时
 *
 * 1. 只有一个 const 时
 *    如果 const 位于
 *    * 的右侧
 *    表示指针所指的数据是常量
 *    不能通过指针修改实际数据
 *    指针本身是变量
 *    可以指向其它内存单元
 * 2. 只有一个 const 时
 *    如果 const 位于 * 的右侧
 *    表示指针本身是常量
 *    不能指向其它内存单元
 *    所指向的数据可以修改
 * 3. 如果有两个 const 位于
 *    * 的左右侧表示指针和
 *    指针所指向的数据都不能修改 
 *
 * 使用 const 修饰引用类型的一个
 * 常见原因是
 * 提高效率
 * 如果函数要返回局部对象
 * 就应该直接返回这个对象
 * 而不要返回对象的引用
 * 在可以返回对象
 * 也可以返回引用时
 * 就应该首选引用
 * 因为效率高
 */

#include <iostream>

using namespace std;

// 定义类 Computer
class Computer {

// 私有
private:
  // 定义 CPU 的频率
  int thisCore;

// 公有
public:
  // 定义构造函数
  Computer(int core) {

   (*this).thisCore = core;

  }

  /*
   * 定义封装 (内联) 函数
   * 实现返回变量 thisCore
   * 后缀为 const 此函数
   * 不能修改对象
   */
  int GetThisCore() const {

    // 返回变量 core
    return thisCore;

  }

  // 定义函数 Buy
  void Buy(int core) {}

  /*
   * 定义函数 SetCore
   * 从外部修改电脑核心频率
   */
  void SetCore(int core) {

    // 给相应变量赋值
    this -> thisCore = core;

  }

};

/*
 * 声明函数 ConstDemoOne
 * 测试 const 修饰符
 */
void ConstDemoOne();
// 声明函数 ConstDemoTwo
void ConstDemoTwo(int);
// 声明函数 ConstDemoThree
void ConstDemoThree(const Computer &);
/*
 * 声明函数 GetMax
 * 实现返回 CPU
 * 频率高的对象
 */
const Computer & GetMax(const Computer & , const Computer &);

// 定义类 TestConst
class TestConst {

// 私有
private:
  int number;

// 公有
public:
  /*
   * 4. const 修饰函数
   *    声明函数不会
   *    修改成员变量的值
   */
  void ModifyNumber() const {

    // 无法修改
    // this -> number = 6666;

  }

};

// 程序入口
int main(void) {

  // 调用函数 ConstDemoOne
  ConstDemoOne();

  // 调用函数 ConstDemoTwo
  ConstDemoTwo(525);

  /*
   * 定义对象
   * 此内存在栈中
   */
  Computer computer = 666;

  /*
   * new 一块内存 (空间)
   * 此内存在堆中
   * 定义指针变量
   * 让指针指向它
   */
  Computer * com = new Computer(999);

  // 将函数 GetMax 返回的对象引用赋给引用
  const Computer & comer = GetMax(computer , *com);

  /*
   * 打印函数 GetMax
   * 返回的对象的 CPU 频率
   */
  cout << "Max object: " << comer.GetThisCore() << endl;

  // 清理内存 (资源)
  delete com;

  return 0;
}

// 定义 (实现) 函数
void ConstDemoOne() {

  // 定义普通变量
  int number = 525;

  // 1. const 修饰成员变量
  // const 修饰变量为常量
  const int NUM = 1111;
  /*
   * 定义为常量的
   * 变量不能重新赋值
   * 报错:
   * assignment of read-only variable "NUM"
   * (分配的变量只能只读)
   */
  // NUM = 525;

  // 此语句的作用
  const int * ptrNumber = &number;
  // 等价于
  // int const * ptrNumber = &number;
  int * const ptrNum = &number;
  const int * const pointer = &NUM;

  /*
   * 合法因为 const
   * 在左侧可以修改
   * 指针指向的内存单元
   */
  ptrNumber = &NUM;
  /*
   * 不合法因为 const
   * 在右侧不能修改
   * 变量的值
   */
  // *ptrNumber = 6666;

  /* 指向
   * 合法因为 const
   * 在右侧可以修改
   * 变量的值
   */
  *ptrNum = 525;
  /*
   * 不合法因为 const 
   * 在右侧不能修改
   * 指针的内存单元
   */
   // *ptrNum = &NUM;

  /*
   * 不合法因为 const
   * 在左右侧既不能
   * 修改变量的值
   * 也不能修改指针
   * 指向的内存单元
   */
  // pointer = &NUM;
  // *pointer = 8888;

  // 输出
  cout << "number: " << number << '\n'
       << "NUM: " << NUM << '\n'
       << "ptrNumber: " << *ptrNumber << '\n'
       << "ptrNum: " << *ptrNum << '\n'
       << "pointer: " << *pointer << endl;

}

// 2. const 修饰函数参数
void ConstDemoTwo(const int num) {

  /*
   * 传递来的参数 num
   * 在函数体内不可改变
   * 与修饰变量时的性质一致
   */
  // num = 666;

}

// 定义 (实现) 函数
void ConstDemoThree(const Computer & computer) {

  /*
   * const 修饰引用时不能
   * 修改引用对象的任何成员
   * const 成员函数不能
   * 调用非 const 成员函数
   * 所以被 const 修饰的引用
   * 不能调用非 const 成员函数
   *
   * 好处:
   * 1. 可以保护传递参数
   *    不需要一个新的
   *    参数副本 (copy)
   * 2. 使用 const 传递
   *    对象的引用时
   *    可以起到不 copy
   *    对象 (节省效率)
   */
  // computer.buy();

}

// 3. const 修饰返回值
const Computer & GetMax(const Computer & computer , const Computer & com) {

  // 判断哪个对象的 cpu 频率高
  if (computer.GetThisCore() > computer.GetThisCore()) {

    // 返回对象 computer
    return computer;

  } else {

    // 返回对象 com
    return com;

  }

}
