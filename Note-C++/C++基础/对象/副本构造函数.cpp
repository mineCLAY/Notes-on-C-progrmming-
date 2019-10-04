/*
 * 副本构造器 (Copy Constructor)
 *
 * 1. 如果是以下代码:
 *
 *    CopyConstructor object;
 *    CopyConstructor obj;
 *    obj = object;
 *
 *    此时使用重载后的 '='
 *    运算符没有隐患
 *
 * 2. 但如果是以下代码:
 *
 *    CopyConstructor object;
 *    CopyConstructor obj = object;
 *
 *    则会有隐患
 *
 * 因为 1 代码是三行代码区别细微
 * 先创建两个对象
 * 然后再把 object 赋值给 object
 * 而 2 代码是先创建一个实例 object
 * 然后再创建实例 obj 的同时
 * 用 object 的值对它进行初始化
 *
 * 看起来好像一样
 * 但编译器却生产完全不同的代码:
 * 编译器将在 CopyConstructor 类
 * 里寻找一个副本构造器 (Copy Constructor)
 * 如果找不到
 * 它会自行创建一个
 * 即使对赋值操作符进行了重载
 * 由于编译器创建的副本构造器仍然
 * 以 "逐位复制" 方式
 * 把 object 赋值给 obj
 * 如果遇到 2 代码
 * 即使已经在这个类重载了赋值运算符 '='
 * 暗藏着隐患的 "逐位复制" 行为
 * 还是会发生
 * 想要躲开这个隐患
 * 还需要亲自定义一个副本构造器
 * 而不是让系统生成
 */

// 导入函数库 iostream
#include <iostream>
/*
 * 因为要使用 NULL
 * 所以导入函数库 stdlib
 */
#include <cstdlib>

using namespace std;

// 声明类 CopyConstructor
class CopyConstructor {

// 私有
private:
  /*
   * 定义存储对象传入
   * 数据的指针变量
   * 此变量的内存在堆区
   */
  int *pointer;

// 公有
public:
  // 定义构造函数
  CopyConstructor (int *ptr) {

    // 输出
    cout << "Enter the main constructor" << '\n';

    // 给相应变量赋值
    pointer = ptr;

    // 输出
    cout << "Leave the main constructor" << '\n';

  }

  /*
   * 定义副本构造函数
   * 方便对象赋值操作调用
   */
  CopyConstructor(const CopyConstructor &rhs) {

    // 输出
    cout << "Enter the replica constructor" << '\n';

    // 调用重载的 '=' 运算符
    *this = rhs;

    // 输出
    cout << "Leave the replica constructor" << '\n';

  }

  // 重载 '=' 运算符
  CopyConstructor &operator = (const CopyConstructor &rhs) {

    // 输出
    cout << "Enter assignment statement overload" << '\n';

    /*
     * 判断 '=' 运算符左值
     * 和右值是否为同一个对象
     */
    if (&rhs != this) {

      /*
       * 释放当前指针变量 pointer
       * 存储的内存
       */
      delete pointer;

      /*
       * new 一块 int
       * 类型内存 (空间)
       * 此内存在堆区中
       * 让指针变量指向新建内存
       */
      pointer = new int;

      /*
       * 将赋值号 '='
       * 右边对象的成员
       * 数据赋值给
       * 左边对象
       */
      *pointer = *rhs.pointer;

    } else {

      /*
       * 告诉用户赋值号
       * 两边为同个对象
       */
      cout << "The assignment number is the same object on both sides , do not handle" << '\n';

    }

    // 输出
    cout << "Leave assignment statement overload" << '\n';

    // 返回对象
    return *this;

  }

  /*
   * 定义函数 Print
   * 实现打印成员变量
   */
  void Print() {

    /*
     * 输出成员变量
     * pointer 存储的数据
     */
    cout << "Pointer: " << *pointer << '\n';

  }

  /*
   * 定义析构函数
   * 实现删除对象
   */
  virtual ~CopyConstructor () {

    // 输出
    cout << "Enter the destructor" << '\n';

    // 释放指针变量存储的内存
    delete pointer;
    /*
     * 将 NULL 赋值给
     * pointer 使它不为野指针
     */
    pointer = NULL;

    // 输出
    cout << "Leave the destructor" << endl;

  }

};

// 程序入口
int main(int argc , char const *argv[]) {

  /*
   * 定义对象
   * 此内存在栈区中
   */
  CopyConstructor object(new int(0));
  CopyConstructor test(new int(0));

  /*
   * 将对象 object 成员的数据
   * 赋值给 test 对象的成员
   */
  test = object;

  // 调用对象的成员函数
  object.Print();
  test.Print();

  // 输出分界线 (---)
  cout << '\n' << "-------------------------------\n" << '\n';

  // 定义对象
  CopyConstructor obj(new int(0));
  CopyConstructor o(new int(0));

  /*
   * 将对象 obj 成员的数据
   * 赋值给 o 对象的成员
   */
  o = obj;

  // 调用对象的成员函数
  obj.Print();
  o.Print();

  // 输出分界线 (---)
  cout << '\n' << "------------------------------\n" << '\n';

  // 定义对象
  CopyConstructor bj(new int(0));

  /*
   * 将对象 bj 成员的数据
   * 赋值给 bj 对象的成员
   * 因为赋值号 '='
   * 两边的对象相同
   * 所以不做处理
   */
  bj = bj;

  // 调用对象的成员函数
  bj.Print();
  bj.Print();

  // 输出分界线 (---)
  cout << '\n' << "-------------------------------\n" << '\n';

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  cin.get();

  return 0;
}
