/*
 * 类模板
 *
 * 类模板内:
 *
 * template <模板参数表>
 * class 类名 { 类成员声明 }
 *
 * 类模板外:
 *
 * template <模板参数表>
 * 类型名 类名 <模板参数标识符列表>::函数名(参数表)
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

// 定义 Student 结构体类型
typedef struct {

  // 定义存储学号的变量
  int id;

} Student;

// 定义模板
template <typename Type>
// 定义类 Store
class Store {

// 私有
private:
  // 定义存放数据的变量
  Type item;
  /*
   * 定义标记 item 是否
   * 已被存入内容的变量
   */
  bool haveValue;

// 公有
public:
  /*
   * 定义构造函数
   * 并初始化参数列表
   */
  Store() {

    // ctor

  }

  // 声明提取数据的函数
  Type &GetElem();

  // 声明存入数据的函数
  void PutElem(const Type &temp);

  // 定义析构函数
  virtual ~Store() {

    // dtor

  }

};

/*
 * 定义 Store 类模板
 * 中的函数 GetElem
 */
template <typename Type>
Type &Store <Type>::GetElem() {

  /*
   * 如试图提取未初始化的数据
   * 则终止程序
   */
  if (!haveValue) {

    // 输出错误
    cout << "No item persent" << endl;
    /*
     * 使程序完全退出
     * 返回到操作系统
     */
    exit(EXIT_FAILURE);

  }

  // 返回 item 中存放的数据
  return item;

}

/*
 * 定义 Store 类模板
 * 中的函数 PutElem
 */
template <typename Type>
void Store <Type>::PutElem(const Type &temp) {

  /*
   * 将 haveValue 设置为 true
   * 表示 item 中已存入数据
   */
  haveValue = true;

  // 将 temp 的值存赋给 item
  item = temp;

}

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义两个存储 int 类型的对象
  Store <int> intOne , intTwo;

  // 往 intOne 存入数据
  intOne.PutElem(0);
  // 往 intTwo 存入数据
  intTwo.PutElem(666);

  // 输出两个对象的数据
  cout << intOne.GetElem() << ' ' << intTwo.GetElem();

  // 定义结构体变量
  Student temp = { 233 };

  // 定义存储 Student 类型的对象
  Store <Student> student;

  // 往 student 存入数据
  student.PutElem(temp);

  // 输出 student 对象的数据
  cout << "The student id is " << student.GetElem().id << endl;

  // 定义存储 double 类型的对象
  Store <double> doubleObject;

  // 输出
  cout << "Retrieving object doulbeObject" << endl;;
  /*
   * 因为 doubleObject 未初始化
   * 所以执行函数
   * doubleObject.GetElem()
   * 时导致程序终止
   */
   cout << doubleObject.GetElem() <<endl;

  return 0;
}
